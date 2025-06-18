// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vled_blinker_test.h for the primary calling header

#include "Vled_blinker_test__pch.h"
#include "Vled_blinker_test__Syms.h"
#include "Vled_blinker_test___024root.h"

void Vled_blinker_test___024root___ctor_var_reset(Vled_blinker_test___024root* vlSelf);

Vled_blinker_test___024root::Vled_blinker_test___024root(Vled_blinker_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vled_blinker_test___024root___ctor_var_reset(this);
}

void Vled_blinker_test___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vled_blinker_test___024root::~Vled_blinker_test___024root() {
}
