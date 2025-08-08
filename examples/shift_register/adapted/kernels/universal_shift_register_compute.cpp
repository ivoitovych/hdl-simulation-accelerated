// SPDX-FileCopyrightText: © 2024 Tenstorrent Inc.
// SPDX-License-Identifier: Apache-2.0
// Universal Shift Register RTL simulation on TT-Metal compute kernel

#include <cstdint>
#include "debug/dprint.h"

// Include our minimal Verilator runtime replacements
// These need to be accessible from the kernel compile path
#include "../verilated.h"
#include "../verilated_vcd_c.h"

// HACK: Make __Vconfigure accessible by redefining private as public
#define private public
#include "../../obj_dir/Vuniversal_shift_register.h"
#include "../../obj_dir/Vuniversal_shift_register___024root.h"
#undef private

// Need to include the implementation files too since we're not linking separately
#include "../../obj_dir/Vuniversal_shift_register.cpp"
#include "../../obj_dir/Vuniversal_shift_register__Syms.cpp"
#include "../../obj_dir/Vuniversal_shift_register___024root__Slow.cpp"
#include "../../obj_dir/Vuniversal_shift_register___024root__DepSet_haad4c736__0.cpp"
#include "../../obj_dir/Vuniversal_shift_register___024root__DepSet_h684c9756__0.cpp"
#include "../../obj_dir/Vuniversal_shift_register___024root__DepSet_h684c9756__0__Slow.cpp"

// Include trace files if needed (these can be stubbed)
//#include "../../obj_dir/Vuniversal_shift_register__Trace__0.cpp"
//#include "../../obj_dir/Vuniversal_shift_register__Trace__0__Slow.cpp"
//#include "../../obj_dir/Vuniversal_shift_register__TraceDecls__0__Slow.cpp"

// Helper function to print hex values using DPRINT
void dprint_hex(const char* prefix, uint32_t value) {
    DPRINT << prefix << "0x";
    // Print two hex digits for 8-bit value
    uint32_t high_nibble = (value >> 4) & 0xF;
    uint32_t low_nibble = value & 0xF;
    
    char high_char = (high_nibble < 10) ? ('0' + high_nibble) : ('A' + high_nibble - 10);
    char low_char = (low_nibble < 10) ? ('0' + low_nibble) : ('A' + low_nibble - 10);
    
    DPRINT << high_char << low_char << ENDL();
}

// Verification helper
bool verify_result_dprint(const char* test_name, uint32_t actual, uint32_t expected) {
    DPRINT << test_name << ": ";
    if (actual == expected) {
        DPRINT << "CORRECT (got 0x";
        uint32_t high = (actual >> 4) & 0xF;
        uint32_t low = actual & 0xF;
        char high_char = (high < 10) ? ('0' + high) : ('A' + high - 10);
        char low_char = (low < 10) ? ('0' + low) : ('A' + low - 10);
        DPRINT << high_char << low_char << ")" << ENDL();
        return true;
    } else {
        DPRINT << "INCORRECT - expected 0x";
        uint32_t exp_high = (expected >> 4) & 0xF;
        uint32_t exp_low = expected & 0xF;
        char exp_high_char = (exp_high < 10) ? ('0' + exp_high) : ('A' + exp_high - 10);
        char exp_low_char = (exp_low < 10) ? ('0' + exp_low) : ('A' + exp_low - 10);
        DPRINT << exp_high_char << exp_low_char << " but got 0x";
        
        uint32_t act_high = (actual >> 4) & 0xF;
        uint32_t act_low = actual & 0xF;
        char act_high_char = (act_high < 10) ? ('0' + act_high) : ('A' + act_high - 10);
        char act_low_char = (act_low < 10) ? ('0' + act_low) : ('A' + act_low - 10);
        DPRINT << act_high_char << act_low_char << ENDL();
        return false;
    }
}

// RTL simulation logic
void run_universal_shift_register_test() {
    // Create an instance of our model
    Vuniversal_shift_register* dut = new Vuniversal_shift_register();
    
    int total_tests = 0;
    int passed_tests = 0;
    
    // Initialize
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->mode = 0;
    dut->serial_in_right = 0;
    dut->serial_in_left = 0;
    dut->parallel_in = 0;
    
    // Reset sequence
    DPRINT << "=== Universal Shift Register Test ===" << ENDL();
    DPRINT << "Resetting..." << ENDL();
    for (int i = 0; i < 5; i++) {
        dut->clk = 0;
        dut->eval();
        dut->clk = 1;
        dut->eval();
    }
    
    // Release reset
    dut->rst_n = 1;
    DPRINT << "Reset released" << ENDL();
    
    // Test 1: Load parallel value
    DPRINT << ENDL() << "Test 1: Load parallel value 0xA5" << ENDL();
    dut->enable = 1;
    dut->mode = 3;  // Load mode
    dut->parallel_in = 0xA5;
    
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    
    total_tests++;
    if (verify_result_dprint("  Load 0xA5", dut->q, 0xA5)) passed_tests++;
    
    // Test 2: Shift right
    DPRINT << ENDL() << "Test 2: Shift right with serial_in=1" << ENDL();
    dut->mode = 1;  // Shift right
    dut->serial_in_right = 1;
    
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result_dprint("  After 1st shift", dut->q, 0xD2)) passed_tests++;
    
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result_dprint("  After 2nd shift", dut->q, 0xE9)) passed_tests++;
    
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result_dprint("  After 3rd shift", dut->q, 0xF4)) passed_tests++;
    
    // Test 3: Shift left
    DPRINT << ENDL() << "Test 3: Shift left with serial_in=0" << ENDL();
    dut->mode = 2;  // Shift left
    dut->serial_in_left = 0;
    
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result_dprint("  After 1st shift", dut->q, 0xE8)) passed_tests++;
    
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result_dprint("  After 2nd shift", dut->q, 0xD0)) passed_tests++;
    
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result_dprint("  After 3rd shift", dut->q, 0xA0)) passed_tests++;
    
    // Test 4: Hold mode
    DPRINT << ENDL() << "Test 4: Hold mode (should not change)" << ENDL();
    dut->mode = 0;  // Hold mode
    unsigned int hold_value = dut->q;
    
    for (int i = 0; i < 2; i++) {
        dut->clk = 0; dut->eval();
        dut->clk = 1; dut->eval();
    }
    total_tests++;
    if (verify_result_dprint("  After hold cycles", dut->q, hold_value)) passed_tests++;
    
    // Summary
    DPRINT << ENDL() << "=== Test Summary ===" << ENDL();
    dprint_hex("Total tests: ", total_tests);
    dprint_hex("Passed tests: ", passed_tests);
    
    if (passed_tests == total_tests) {
        DPRINT << ENDL() << "ALL TESTS PASSED!" << ENDL();
    } else {
        DPRINT << ENDL() << "SOME TESTS FAILED!" << ENDL();
    }
    
    // Clean up
    delete dut;
}

// Required TT-Metal compute kernel functions
namespace NAMESPACE {

void unpack_main() {
    // Empty unpack function - no data movement needed for this simulation
}

void math_main() {
    // Run the RTL simulation in the math stage
    run_universal_shift_register_test();
}

void pack_main() {
    // Empty pack function - no data movement needed for this simulation
}

}  // namespace NAMESPACE

