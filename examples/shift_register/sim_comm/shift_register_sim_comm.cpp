// SPDX-FileCopyrightText: © 2024 Tenstorrent Inc.
// SPDX-License-Identifier: Apache-2.0

// shift_register_sim_comm.cpp - Host application
// Demonstrates RTL simulation with host-device communication on TT-Metal

#include <tt-metalium/host_api.hpp>
#include <tt-metalium/buffer.hpp>
#include <tt-metalium/circular_buffer_types.hpp>
#include <tt-metalium/constants.hpp>
#include <vector>
#include <iomanip>
#include <iostream>
#include <cstring>

using namespace tt::tt_metal;
using namespace tt::constants;

// Test vector structure for shift register operations
struct ShiftRegisterTestVector {
    uint8_t enable;           // Enable signal
    uint8_t mode;            // 2-bit mode (0:hold, 1:shift_right, 2:shift_left, 3:load)
    uint8_t serial_in_right; // Serial input for right shift
    uint8_t serial_in_left;  // Serial input for left shift
    uint8_t parallel_in;     // 8-bit parallel load value
    uint8_t expected_output; // Expected result
    uint8_t padding[10];     // Padding to 16 bytes for alignment
};

// Result structure from simulation
struct SimulationResult {
    uint8_t test_id;         // Test identifier
    uint8_t output_value;    // Actual shift register output
    uint8_t expected_value;  // Expected value for comparison
    uint8_t pass;           // Pass/fail flag (1 = pass, 0 = fail)
    uint32_t cycle_count;    // Simulation cycles for this test
    uint8_t padding[8];      // Padding to 16 bytes
};

static_assert(sizeof(ShiftRegisterTestVector) == 16, "TestVector must be 16 bytes");
static_assert(sizeof(SimulationResult) == 16, "SimulationResult must be 16 bytes");

int main(int argc, char** argv) {
    bool overall_pass = true;

    // Initialize device
    IDevice* device = CreateDevice(0);
    CommandQueue& cq = device->command_queue();
    Program program = CreateProgram();

    // Test configuration
    constexpr uint32_t num_tests = 64;  // Number of test vectors
    constexpr uint32_t num_tiles = 1;   // Process in 1 tile for simplicity
    constexpr uint32_t tests_per_tile = num_tests;
    constexpr uint32_t tile_bytes = tests_per_tile * sizeof(ShiftRegisterTestVector);
    constexpr uint32_t output_tile_bytes = tests_per_tile * sizeof(SimulationResult);

    log_info(tt::LogTest, "=== Shift Register RTL Simulation with Communication ===");
    log_info(tt::LogTest, "Configuration:");
    log_info(tt::LogTest, "  Number of test vectors: {}", num_tests);
    log_info(tt::LogTest, "  Test vector size: {} bytes", sizeof(ShiftRegisterTestVector));
    log_info(tt::LogTest, "  Result size: {} bytes", sizeof(SimulationResult));
    log_info(tt::LogTest, "  Input buffer size: {} bytes", tile_bytes);
    log_info(tt::LogTest, "  Output buffer size: {} bytes", output_tile_bytes);

    // Create DRAM buffers for test vectors and results
    InterleavedBufferConfig input_config{
        .device = device,
        .size = tile_bytes,
        .page_size = tile_bytes,
        .buffer_type = BufferType::DRAM
    };
    std::shared_ptr<Buffer> input_buffer = CreateBuffer(input_config);

    InterleavedBufferConfig output_config{
        .device = device,
        .size = output_tile_bytes,
        .page_size = output_tile_bytes,
        .buffer_type = BufferType::DRAM
    };
    std::shared_ptr<Buffer> output_buffer = CreateBuffer(output_config);

    log_info(tt::LogTest, "DRAM buffers created:");
    log_info(tt::LogTest, "  Input buffer address: 0x{:x}", input_buffer->address());
    log_info(tt::LogTest, "  Output buffer address: 0x{:x}", output_buffer->address());

    // Generate comprehensive test vectors
    std::vector<ShiftRegisterTestVector> test_vectors(num_tests);
    uint8_t current_reg_value = 0;  // Track expected register state

    log_info(tt::LogTest, "\nGenerating test vectors:");
    
    // Test 1-4: Reset and basic operations
    test_vectors[0] = {0, 0, 0, 0, 0, 0, {0}};  // Reset (disabled)
    current_reg_value = 0;
    
    test_vectors[1] = {1, 3, 0, 0, 0xA5, 0xA5, {0}};  // Load 0xA5
    current_reg_value = 0xA5;
    
    test_vectors[2] = {1, 1, 1, 0, 0, 0xD2, {0}};  // Shift right with 1
    current_reg_value = 0xD2;  // (0xA5 >> 1) | 0x80
    
    test_vectors[3] = {1, 2, 0, 0, 0, 0xA4, {0}};  // Shift left with 0
    current_reg_value = 0xA4;  // (0xD2 << 1) & 0xFF

    // Test 4-8: Hold operations
    for (int i = 4; i < 8; i++) {
        test_vectors[i] = {1, 0, 0, 0, 0, current_reg_value, {0}};  // Hold
    }

    // Test 8-16: Walking ones pattern
    log_info(tt::LogTest, "  Tests 8-15: Walking ones pattern");
    test_vectors[8] = {1, 3, 0, 0, 0x01, 0x01, {0}};  // Load 0x01
    current_reg_value = 0x01;
    
    for (int i = 9; i < 16; i++) {
        test_vectors[i] = {1, 2, 0, 0, 0, static_cast<uint8_t>(current_reg_value << 1), {0}};  // Shift left
        current_reg_value = (current_reg_value << 1) & 0xFF;
    }

    // Test 16-24: Walking zeros pattern (inverse)
    log_info(tt::LogTest, "  Tests 16-23: Walking zeros pattern");
    test_vectors[16] = {1, 3, 0, 0, 0xFE, 0xFE, {0}};  // Load 0xFE
    current_reg_value = 0xFE;
    
    for (int i = 17; i < 24; i++) {
        test_vectors[i] = {1, 2, 0, 1, 0, static_cast<uint8_t>((current_reg_value << 1) | 1), {0}};
        current_reg_value = ((current_reg_value << 1) | 1) & 0xFF;
    }

    // Test 24-32: Alternating shift directions
    log_info(tt::LogTest, "  Tests 24-31: Alternating shift directions");
    test_vectors[24] = {1, 3, 0, 0, 0x55, 0x55, {0}};  // Load 0x55 (01010101)
    current_reg_value = 0x55;
    
    for (int i = 25; i < 32; i++) {
        if (i % 2 == 1) {
            test_vectors[i] = {1, 1, 0, 0, 0, static_cast<uint8_t>(current_reg_value >> 1), {0}};
            current_reg_value = current_reg_value >> 1;
        } else {
            test_vectors[i] = {1, 2, 0, 1, 0, static_cast<uint8_t>((current_reg_value << 1) | 1), {0}};
            current_reg_value = ((current_reg_value << 1) | 1) & 0xFF;
        }
    }

    // Test 32-48: Random operations
    log_info(tt::LogTest, "  Tests 32-47: Random mixed operations");
    std::srand(42);  // Fixed seed for reproducibility
    for (int i = 32; i < 48; i++) {
        uint8_t mode = std::rand() % 4;
        uint8_t serial_right = std::rand() % 2;
        uint8_t serial_left = std::rand() % 2;
        uint8_t parallel = std::rand() % 256;
        
        uint8_t expected = current_reg_value;
        switch (mode) {
            case 0: // Hold
                expected = current_reg_value;
                break;
            case 1: // Shift right
                expected = (current_reg_value >> 1) | (serial_right ? 0x80 : 0);
                break;
            case 2: // Shift left
                expected = ((current_reg_value << 1) | (serial_left ? 1 : 0)) & 0xFF;
                break;
            case 3: // Load
                expected = parallel;
                break;
        }
        
        test_vectors[i] = {1, mode, serial_right, serial_left, parallel, expected, {0}};
        current_reg_value = expected;
    }

    // Test 48-64: Edge cases
    log_info(tt::LogTest, "  Tests 48-63: Edge cases (all 0s, all 1s, disable)");
    
    // All zeros
    test_vectors[48] = {1, 3, 0, 0, 0x00, 0x00, {0}};
    current_reg_value = 0x00;
    test_vectors[49] = {1, 1, 0, 0, 0, 0x00, {0}};  // Shift right on 0
    test_vectors[50] = {1, 2, 0, 0, 0, 0x00, {0}};  // Shift left on 0
    
    // All ones
    test_vectors[51] = {1, 3, 0, 0, 0xFF, 0xFF, {0}};
    current_reg_value = 0xFF;
    test_vectors[52] = {1, 1, 1, 0, 0, 0xFF, {0}};  // Shift right on 0xFF with 1
    test_vectors[53] = {1, 2, 0, 1, 0, 0xFF, {0}};  // Shift left on 0xFF with 1
    
    // Disable tests
    for (int i = 54; i < 60; i++) {
        test_vectors[i] = {0, static_cast<uint8_t>(std::rand() % 4), 
                          static_cast<uint8_t>(std::rand() % 2),
                          static_cast<uint8_t>(std::rand() % 2),
                          static_cast<uint8_t>(std::rand() % 256),
                          current_reg_value, {0}};  // Should hold when disabled
    }
    
    // Final pattern tests
    test_vectors[60] = {1, 3, 0, 0, 0xAA, 0xAA, {0}};  // Load 10101010
    test_vectors[61] = {1, 3, 0, 0, 0x55, 0x55, {0}};  // Load 01010101
    test_vectors[62] = {1, 3, 0, 0, 0xF0, 0xF0, {0}};  // Load 11110000
    test_vectors[63] = {1, 3, 0, 0, 0x0F, 0x0F, {0}};  // Load 00001111

    // Write test vectors to device
    log_info(tt::LogTest, "\nWriting {} test vectors to device DRAM...", num_tests);
    EnqueueWriteBuffer(cq, *input_buffer, test_vectors, false);

    // Create simulation kernel on core {0,0}
    CoreCoord core = {0, 0};
    
    KernelHandle sim_kernel = CreateKernel(
        program,
        "tt_metal/programming_examples/hdl_simulation_accelerated/examples/shift_register/sim_comm/kernels/shift_register_simulator.cpp",
        core,
        DataMovementConfig{
            .processor = DataMovementProcessor::RISCV_0,
            .noc = NOC::RISCV_0_default
        }
    );

    // Set runtime arguments
    SetRuntimeArgs(
        program,
        sim_kernel,
        core,
        {
            input_buffer->address(),   // Test vectors address
            output_buffer->address(),  // Results address
            num_tests,                  // Number of tests
            sizeof(ShiftRegisterTestVector),
            sizeof(SimulationResult)
        }
    );

    log_info(tt::LogTest, "Launching shift register simulation on device...");
    log_info(tt::LogTest, "Export TT_METAL_DPRINT_CORES=0,0 to see kernel debug output");

    // Execute simulation
    EnqueueProgram(cq, program, false);
    Finish(cq);

    log_info(tt::LogTest, "\nSimulation complete! Reading results...");

    // Read results from device
    std::vector<SimulationResult> results;
    EnqueueReadBuffer(cq, *output_buffer, results, true);

    // Analyze results
    log_info(tt::LogTest, "\n=== SIMULATION RESULTS ===");
    
    uint32_t passed_tests = 0;
    uint32_t failed_tests = 0;
    uint64_t total_cycles = 0;

    for (uint32_t i = 0; i < num_tests && i < results.size(); i++) {
        bool pass = (results[i].pass == 1);
        
        if (pass) {
            passed_tests++;
        } else {
            failed_tests++;
            log_info(tt::LogTest, "  Test {}: FAIL - Output: 0x{:02x}, Expected: 0x{:02x} (cycles: {})",
                    i, results[i].output_value, results[i].expected_value, results[i].cycle_count);
        }
        
        total_cycles += results[i].cycle_count;
        
        // Show details for first few tests and any failures
        if (i < 5 || !pass) {
            const auto& tv = test_vectors[i];
            log_info(tt::LogTest, "  Test {}: {} - Mode:{}, Enable:{}, Parallel:0x{:02x}, Output:0x{:02x}, Expected:0x{:02x} (cycles: {})",
                    i, pass ? "PASS" : "FAIL",
                    tv.mode, tv.enable, tv.parallel_in,
                    results[i].output_value, results[i].expected_value,
                    results[i].cycle_count);
        }
    }

    // Summary statistics
    log_info(tt::LogTest, "\n=== SUMMARY ===");
    log_info(tt::LogTest, "Total tests: {}", num_tests);
    log_info(tt::LogTest, "Passed: {} ({:.1f}%)", passed_tests, 100.0f * passed_tests / num_tests);
    log_info(tt::LogTest, "Failed: {} ({:.1f}%)", failed_tests, 100.0f * failed_tests / num_tests);
    log_info(tt::LogTest, "Total simulation cycles: {}", total_cycles);
    log_info(tt::LogTest, "Average cycles per test: {:.1f}", static_cast<float>(total_cycles) / num_tests);

    // Performance metrics
    log_info(tt::LogTest, "\n=== PERFORMANCE METRICS ===");
    log_info(tt::LogTest, "Data transferred to device: {} bytes", tile_bytes);
    log_info(tt::LogTest, "Data transferred from device: {} bytes", output_tile_bytes);
    log_info(tt::LogTest, "Total data movement: {} bytes", tile_bytes + output_tile_bytes);
    
    overall_pass = (failed_tests == 0);

    if (overall_pass) {
        log_info(tt::LogTest, "\n✅ SUCCESS: Shift register simulation with communication verified!");
        log_info(tt::LogTest, "   • All {} test vectors passed", num_tests);
        log_info(tt::LogTest, "   • Host → Device communication working");
        log_info(tt::LogTest, "   • RTL simulation on TT-Metal successful");
        log_info(tt::LogTest, "   • Device → Host results verified");
    } else {
        log_info(tt::LogTest, "\n❌ FAILURE: {} tests failed", failed_tests);
        log_info(tt::LogTest, "   Check DPRINT output for debugging");
    }

    CloseDevice(device);
    return overall_pass ? 0 : 1;
}

