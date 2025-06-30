// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_alu_tb.h for the primary calling header

#include "Vsimple_alu_tb__pch.h"
#include "Vsimple_alu_tb__Syms.h"
#include "Vsimple_alu_tb___024root.h"

void Vsimple_alu_tb___024root___ctor_var_reset(Vsimple_alu_tb___024root* vlSelf);

Vsimple_alu_tb___024root::Vsimple_alu_tb___024root(Vsimple_alu_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsimple_alu_tb___024root___ctor_var_reset(this);
}

void Vsimple_alu_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsimple_alu_tb___024root::~Vsimple_alu_tb___024root() {
}
