// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vone_shot_pulse_test.h for the primary calling header

#include "Vone_shot_pulse_test__pch.h"
#include "Vone_shot_pulse_test__Syms.h"
#include "Vone_shot_pulse_test___024root.h"

void Vone_shot_pulse_test___024root___ctor_var_reset(Vone_shot_pulse_test___024root* vlSelf);

Vone_shot_pulse_test___024root::Vone_shot_pulse_test___024root(Vone_shot_pulse_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vone_shot_pulse_test___024root___ctor_var_reset(this);
}

void Vone_shot_pulse_test___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vone_shot_pulse_test___024root::~Vone_shot_pulse_test___024root() {
}
