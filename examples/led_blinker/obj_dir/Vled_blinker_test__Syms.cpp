// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vled_blinker_test__pch.h"
#include "Vled_blinker_test.h"
#include "Vled_blinker_test___024root.h"

// FUNCTIONS
Vled_blinker_test__Syms::~Vled_blinker_test__Syms()
{
}

Vled_blinker_test__Syms::Vled_blinker_test__Syms(VerilatedContext* contextp, const char* namep, Vled_blinker_test* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(15);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
