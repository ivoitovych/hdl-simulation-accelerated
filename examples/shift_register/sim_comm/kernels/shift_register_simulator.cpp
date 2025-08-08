// SPDX-FileCopyrightText: © 2024 Tenstorrent Inc.
// SPDX-License-Identifier: Apache-2.0

// ===== KERNEL FILE: kernels/shift_register_simulator.cpp =====

#include "dataflow_api.h"
#include "debug/dprint.h"

// Test vector structure (must match host)
struct ShiftRegisterTestVector {
    uint8_t enable;
    uint8_t mode;
    uint8_t serial_in_right;
    uint8_t serial_in_left;
    uint8_t parallel_in;
    uint8_t expected_output;
    uint8_t padding[10];
};

// Result structure (must match host)
struct SimulationResult {
    uint8_t test_id;
    uint8_t output_value;
    uint8_t expected_value;
    uint8_t pass;
    uint32_t cycle_count;
    uint8_t padding[8];
};

// Minimal shift register implementation (matching the rewritten version)
class ShiftRegister {
private:
    uint8_t reg_value;
    
public:
    ShiftRegister() : reg_value(0) {}
    
    void reset() {
        reg_value = 0;
    }
    
    void operate(bool enable, uint8_t mode, bool serial_left, bool serial_right, uint8_t parallel) {
        if (!enable) return;
        
        switch (mode) {
            case 0: // Hold
                break;
            case 1: // Shift right
                reg_value = (reg_value >> 1) | (serial_right ? 0x80 : 0);
                break;
            case 2: // Shift left
                reg_value = ((reg_value << 1) | (serial_left ? 1 : 0)) & 0xFF;
                break;
            case 3: // Parallel load
                reg_value = parallel;
                break;
        }
    }
    
    uint8_t get_output() const {
        return reg_value;
    }
};

void kernel_main() {
    uint32_t src_addr = get_arg_val<uint32_t>(0);
    uint32_t dst_addr = get_arg_val<uint32_t>(1);
    uint32_t num_tests = get_arg_val<uint32_t>(2);
    uint32_t test_size = get_arg_val<uint32_t>(3);
    uint32_t result_size = get_arg_val<uint32_t>(4);
    
    DPRINT << "=== Shift Register Simulator Starting ===" << ENDL();
    DPRINT << "Number of tests: " << num_tests << ENDL();
    DPRINT << "Source address: 0x" << src_addr << ENDL();
    DPRINT << "Dest address: 0x" << dst_addr << ENDL();
    
    // L1 buffer addresses
    constexpr uint32_t l1_input_addr = 0x10000;
    constexpr uint32_t l1_output_addr = 0x20000;
    
    // Calculate buffer sizes
    uint32_t input_buffer_size = num_tests * test_size;
    uint32_t output_buffer_size = num_tests * result_size;
    
    // Read all test vectors from DRAM to L1
    DPRINT << "Reading test vectors from DRAM..." << ENDL();
    
    const InterleavedAddrGenFast<true> src_gen = {
        .bank_base_address = src_addr,
        .page_size = input_buffer_size,
        .data_format = DataFormat::UInt8
    };
    
    noc_async_read_tile(0, src_gen, l1_input_addr);
    noc_async_read_barrier();
    
    DPRINT << "Test vectors loaded. Starting simulation..." << ENDL();
    
    // Get pointers to L1 buffers
    volatile tt_l1_ptr ShiftRegisterTestVector* tests = 
        reinterpret_cast<volatile tt_l1_ptr ShiftRegisterTestVector*>(l1_input_addr);
    volatile tt_l1_ptr SimulationResult* results = 
        reinterpret_cast<volatile tt_l1_ptr SimulationResult*>(l1_output_addr);
    
    // Create shift register instance
    ShiftRegister sr;
    sr.reset();
    
    // Process each test vector
    for (uint32_t i = 0; i < num_tests; i++) {
        // Read test vector
        uint8_t enable = tests[i].enable;
        uint8_t mode = tests[i].mode;
        uint8_t serial_right = tests[i].serial_in_right;
        uint8_t serial_left = tests[i].serial_in_left;
        uint8_t parallel = tests[i].parallel_in;
        uint8_t expected = tests[i].expected_output;
        
        // Simulate cycles (could be more sophisticated)
        uint32_t cycles = 1;  // Basic: 1 cycle per operation
        if (mode == 3) cycles = 2;  // Load takes 2 cycles
        if (!enable) cycles = 1;    // Disabled still takes 1 cycle
        
        // Execute operation
        sr.operate(enable != 0, mode, serial_left != 0, serial_right != 0, parallel);
        uint8_t output = sr.get_output();
        
        // Store result
        results[i].test_id = i;
        results[i].output_value = output;
        results[i].expected_value = expected;
        results[i].pass = (output == expected) ? 1 : 0;
        results[i].cycle_count = cycles;
        
        // Clear padding
        for (int p = 0; p < 8; p++) {
            results[i].padding[p] = 0;
        }
        
        // Debug output for first few tests and failures
        if (i < 5 || results[i].pass == 0) {
            DPRINT << "Test " << i << ": ";
            DPRINT << "mode=" << static_cast<int>(mode) << " ";
            DPRINT << "enable=" << static_cast<int>(enable) << " ";
            DPRINT << "output=0x" << static_cast<int>(output) << " ";
            DPRINT << "expected=0x" << static_cast<int>(expected) << " ";
            DPRINT << (results[i].pass ? "PASS" : "FAIL") << ENDL();
        }
    }
    
    // Write results back to DRAM
    DPRINT << "Writing results to DRAM..." << ENDL();
    
    const InterleavedAddrGenFast<true> dst_gen = {
        .bank_base_address = dst_addr,
        .page_size = output_buffer_size,
        .data_format = DataFormat::UInt8
    };
    
    noc_async_write_tile(0, dst_gen, l1_output_addr);
    noc_async_write_barrier();
    
    // Summary
    uint32_t passed = 0;
    for (uint32_t i = 0; i < num_tests; i++) {
        if (results[i].pass) passed++;
    }
    
    DPRINT << "=== Simulation Complete ===" << ENDL();
    DPRINT << "Tests run: " << num_tests << ENDL();
    DPRINT << "Tests passed: " << passed << ENDL();
    DPRINT << "Tests failed: " << (num_tests - passed) << ENDL();
}
