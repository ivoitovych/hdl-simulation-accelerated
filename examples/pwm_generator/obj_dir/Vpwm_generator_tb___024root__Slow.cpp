// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm_generator_tb.h for the primary calling header

#include "Vpwm_generator_tb__pch.h"
#include "Vpwm_generator_tb__Syms.h"
#include "Vpwm_generator_tb___024root.h"

void Vpwm_generator_tb___024root___ctor_var_reset(Vpwm_generator_tb___024root* vlSelf);

Vpwm_generator_tb___024root::Vpwm_generator_tb___024root(Vpwm_generator_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpwm_generator_tb___024root___ctor_var_reset(this);
}

void Vpwm_generator_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpwm_generator_tb___024root::~Vpwm_generator_tb___024root() {
}
