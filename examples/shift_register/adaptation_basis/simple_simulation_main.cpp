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

// Simple test without any I/O for now
int main() {
    // Create an instance of our model
    Vuniversal_shift_register* dut = new Vuniversal_shift_register();
    
    // Initialize
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->mode = 0;
    dut->serial_in_right = 0;
    dut->serial_in_left = 0;
    dut->parallel_in = 0;
    
    // Reset sequence
    for (int i = 0; i < 5; i++) {
        dut->clk = 0;
        dut->eval();
        dut->clk = 1;
        dut->eval();
    }
    
    // Release reset
    dut->rst_n = 1;
    
    // Test 1: Load parallel value
    dut->enable = 1;
    dut->mode = 3;  // Load mode
    dut->parallel_in = 0xA5;
    
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    
    // Test 2: Shift right
    dut->mode = 1;  // Shift right
    dut->serial_in_right = 1;
    
    for (int i = 0; i < 3; i++) {
        dut->clk = 0; dut->eval();
        dut->clk = 1; dut->eval();
    }
    
    // Test 3: Shift left
    dut->mode = 2;  // Shift left
    dut->serial_in_left = 0;
    
    for (int i = 0; i < 3; i++) {
        dut->clk = 0; dut->eval();
        dut->clk = 1; dut->eval();
    }
    
    // Clean up
    delete dut;
    
    return 0;
}
