// adaptation_basis/simple_simulation_main.cpp
// Main file that includes everything and runs the simulation

// Include our minimal Verilator runtime replacements
#include "verilated.h"
#include "verilated_vcd_c.h"

// HACK: Make __Vconfigure accessible by redefining private as public
// This is needed because the generated code has friend declarations that
// we can't easily replicate in our adaptation layer
#define private public
#include "../obj_dir/Vuniversal_shift_register.h"
#include "../obj_dir/Vuniversal_shift_register___024root.h"
#undef private

// Need to include the implementation files too since we're not linking separately
#include "../obj_dir/Vuniversal_shift_register.cpp"
#include "../obj_dir/Vuniversal_shift_register__Syms.cpp"
#include "../obj_dir/Vuniversal_shift_register___024root__Slow.cpp"
#include "../obj_dir/Vuniversal_shift_register___024root__DepSet_haad4c736__0.cpp"
#include "../obj_dir/Vuniversal_shift_register___024root__DepSet_h684c9756__0.cpp"
#include "../obj_dir/Vuniversal_shift_register___024root__DepSet_h684c9756__0__Slow.cpp"

// Include trace files if needed (these can be stubbed)
#include "../obj_dir/Vuniversal_shift_register__Trace__0.cpp"
#include "../obj_dir/Vuniversal_shift_register__Trace__0__Slow.cpp"
#include "../obj_dir/Vuniversal_shift_register__TraceDecls__0__Slow.cpp"

// Simple I/O functions for platforms without stdio
#include <unistd.h>  // For write() system call

void print_str(const char* str) {
    int len = 0;
    while (str[len]) len++;
    ssize_t written = write(1, str, len);
    (void)written; // Explicitly ignore to avoid warning
}

void print_hex_digit(int digit) {
    char c = (digit < 10) ? ('0' + digit) : ('A' + digit - 10);
    ssize_t written = write(1, &c, 1);
    (void)written; // Explicitly ignore to avoid warning
}

void print_hex(const char* prefix, unsigned int value) {
    print_str(prefix);
    print_str("0x");
    for (int i = 1; i >= 0; i--) {  // 8-bit value, so only 2 hex digits
        print_hex_digit((value >> (i * 4)) & 0xF);
    }
    print_str("\n");
}

// Verification helper
bool verify_result(const char* test_name, unsigned int actual, unsigned int expected) {
    print_str(test_name);
    print_str(": ");
    if (actual == expected) {
        print_str("CORRECT (");
        print_hex("got ", actual);
        print_str(")\n");
        return true;
    } else {
        print_str("INCORRECT - ");
        print_hex("expected ", expected);
        print_hex("but got ", actual);
        print_str("\n");
        return false;
    }
}

int main() {
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
    print_str("=== Universal Shift Register Test ===\n");
    print_str("Resetting...\n");
    for (int i = 0; i < 5; i++) {
        dut->clk = 0;
        dut->eval();
        dut->clk = 1;
        dut->eval();
    }
    
    // Release reset
    dut->rst_n = 1;
    print_str("Reset released\n");
    
    // Test 1: Load parallel value
    print_str("\nTest 1: Load parallel value 0xA5\n");
    dut->enable = 1;
    dut->mode = 3;  // Load mode
    dut->parallel_in = 0xA5;
    
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    
    total_tests++;
    if (verify_result("  Load 0xA5", dut->q, 0xA5)) passed_tests++;
    
    // Test 2: Shift right
    print_str("\nTest 2: Shift right with serial_in=1\n");
    dut->mode = 1;  // Shift right
    dut->serial_in_right = 1;
    
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result("  After 1st shift", dut->q, 0xD2)) passed_tests++;
    
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result("  After 2nd shift", dut->q, 0xE9)) passed_tests++;
    
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result("  After 3rd shift", dut->q, 0xF4)) passed_tests++;
    
    // Test 3: Shift left
    print_str("\nTest 3: Shift left with serial_in=0\n");
    dut->mode = 2;  // Shift left
    dut->serial_in_left = 0;
    
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result("  After 1st shift", dut->q, 0xE8)) passed_tests++;
    
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result("  After 2nd shift", dut->q, 0xD0)) passed_tests++;
    
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    total_tests++;
    if (verify_result("  After 3rd shift", dut->q, 0xA0)) passed_tests++;
    
    // Test 4: Hold mode
    print_str("\nTest 4: Hold mode (should not change)\n");
    dut->mode = 0;  // Hold mode
    unsigned int hold_value = dut->q;
    
    for (int i = 0; i < 2; i++) {
        dut->clk = 0; dut->eval();
        dut->clk = 1; dut->eval();
    }
    total_tests++;
    if (verify_result("  After hold cycles", dut->q, hold_value)) passed_tests++;
    
    // Summary
    print_str("\n=== Test Summary ===\n");
    print_str("Total tests: ");
    print_hex("", total_tests);
    print_str("Passed tests: ");
    print_hex("", passed_tests);
    if (passed_tests == total_tests) {
        print_str("\nALL TESTS PASSED!\n");
    } else {
        print_str("\nSOME TESTS FAILED!\n");
    }
    
    // Clean up
    delete dut;
    
    return (passed_tests == total_tests) ? 0 : 1;
}
