// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vuniversal_shift_register__pch.h"
#include "Vuniversal_shift_register.h"
#include "Vuniversal_shift_register___024root.h"

// FUNCTIONS
Vuniversal_shift_register__Syms::~Vuniversal_shift_register__Syms()
{
}

Vuniversal_shift_register__Syms::Vuniversal_shift_register__Syms(VerilatedContext* contextp, const char* namep, Vuniversal_shift_register* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(11);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
