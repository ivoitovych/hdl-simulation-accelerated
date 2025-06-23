// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vone_shot_pulse_test__pch.h"
#include "Vone_shot_pulse_test.h"
#include "Vone_shot_pulse_test___024root.h"

// FUNCTIONS
Vone_shot_pulse_test__Syms::~Vone_shot_pulse_test__Syms()
{
}

Vone_shot_pulse_test__Syms::Vone_shot_pulse_test__Syms(VerilatedContext* contextp, const char* namep, Vone_shot_pulse_test* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(21);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
