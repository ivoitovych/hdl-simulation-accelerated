// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuniversal_shift_register_tb.h for the primary calling header

#include "Vuniversal_shift_register_tb__pch.h"
#include "Vuniversal_shift_register_tb__Syms.h"
#include "Vuniversal_shift_register_tb___024root.h"

void Vuniversal_shift_register_tb___024root___ctor_var_reset(Vuniversal_shift_register_tb___024root* vlSelf);

Vuniversal_shift_register_tb___024root::Vuniversal_shift_register_tb___024root(Vuniversal_shift_register_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vuniversal_shift_register_tb___024root___ctor_var_reset(this);
}

void Vuniversal_shift_register_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vuniversal_shift_register_tb___024root::~Vuniversal_shift_register_tb___024root() {
}
