// SPDX-FileCopyrightText: © 2024 Tenstorrent Inc.
// SPDX-License-Identifier: Apache-2.0
// Minimal Universal Shift Register RTL simulation on TT-Metal compute kernel

#include <cstdint>
#include "debug/dprint.h"

// Minimal shift register implementation without Verilator overhead
class ShiftRegister {
  private:
    uint8_t reg_value;
    
  public:
    ShiftRegister() : reg_value(0) {}
    
    void reset() {
        reg_value = 0;
    }
    
    void load(uint8_t value) {
        reg_value = value;
    }
    
    void shift_left(bool serial_in) {
        reg_value = (reg_value << 1) | (serial_in ? 1 : 0);
    }
    
    void shift_right(bool serial_in) {
        reg_value = (reg_value >> 1) | (serial_in ? 0x80 : 0);
    }
    
    uint8_t get_output() const {
        return reg_value;
    }
    
    // Combined operation matching the original RTL behavior
    void operate(bool enable, uint8_t mode, bool serial_left, bool serial_right, uint8_t parallel) {
        if (!enable) return;
        
        switch (mode) {
            case 0: // Hold
                break;
            case 1: // Shift right
                shift_right(serial_right);
                break;
            case 2: // Shift left
                shift_left(serial_left);
                break;
            case 3: // Parallel load
                load(parallel);
                break;
        }
    }
};

// Simple hex print helper
void print_hex(uint32_t value) {
    DPRINT << "0x";
    uint32_t h = (value >> 4) & 0xF;
    uint32_t l = value & 0xF;
    DPRINT << (char)(h < 10 ? '0' + h : 'A' + h - 10);
    DPRINT << (char)(l < 10 ? '0' + l : 'A' + l - 10);
}

// Test function
void test_shift_register() {
    ShiftRegister sr;
    uint32_t tests = 0;
    uint32_t passed = 0;
    
    DPRINT << "=== Shift Register Test ===" << ENDL();
    
    // Reset
    sr.reset();
    DPRINT << "Reset done" << ENDL();
    
    // Test 1: Load 0xA5
    DPRINT << "Test 1: Load ";
    print_hex(0xA5);
    DPRINT << ENDL();
    
    sr.operate(true, 3, false, false, 0xA5);
    tests++;
    if (sr.get_output() == 0xA5) {
        passed++;
        DPRINT << "  PASS: ";
    } else {
        DPRINT << "  FAIL: ";
    }
    print_hex(sr.get_output());
    DPRINT << ENDL();
    
    // Test 2: Shift right with 1
    DPRINT << "Test 2: Shift right" << ENDL();
    
    sr.operate(true, 1, false, true, 0);
    tests++;
    if (sr.get_output() == 0xD2) {
        passed++;
        DPRINT << "  PASS: ";
    } else {
        DPRINT << "  FAIL: ";
    }
    print_hex(sr.get_output());
    DPRINT << ENDL();
    
    sr.operate(true, 1, false, true, 0);
    tests++;
    if (sr.get_output() == 0xE9) {
        passed++;
        DPRINT << "  PASS: ";
    } else {
        DPRINT << "  FAIL: ";
    }
    print_hex(sr.get_output());
    DPRINT << ENDL();
    
    // Test 3: Shift left with 0
    DPRINT << "Test 3: Shift left" << ENDL();
    
    sr.operate(true, 2, false, false, 0);
    tests++;
    if (sr.get_output() == 0xD2) {
        passed++;
        DPRINT << "  PASS: ";
    } else {
        DPRINT << "  FAIL: ";
    }
    print_hex(sr.get_output());
    DPRINT << ENDL();
    
    sr.operate(true, 2, false, false, 0);
    tests++;
    if (sr.get_output() == 0xA4) {
        passed++;
        DPRINT << "  PASS: ";
    } else {
        DPRINT << "  FAIL: ";
    }
    print_hex(sr.get_output());
    DPRINT << ENDL();
    
    // Test 4: Hold
    DPRINT << "Test 4: Hold" << ENDL();
    uint8_t hold_val = sr.get_output();
    sr.operate(true, 0, false, false, 0);
    tests++;
    if (sr.get_output() == hold_val) {
        passed++;
        DPRINT << "  PASS: ";
    } else {
        DPRINT << "  FAIL: ";
    }
    print_hex(sr.get_output());
    DPRINT << ENDL();
    
    // Summary
    DPRINT << "Tests: " << tests << " Passed: " << passed << ENDL();
    if (passed == tests) {
        DPRINT << "ALL PASS!" << ENDL();
    }
}

// Required TT-Metal compute kernel functions
namespace NAMESPACE {

void unpack_main() {
    // Empty - no data movement needed
}

void math_main() {
    test_shift_register();
}

void pack_main() {
    // Empty - no data movement needed
}

}  // namespace NAMESPACE
