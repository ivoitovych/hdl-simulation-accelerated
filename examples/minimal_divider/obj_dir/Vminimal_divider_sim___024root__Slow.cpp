// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminimal_divider_sim.h for the primary calling header

#include "Vminimal_divider_sim__pch.h"
#include "Vminimal_divider_sim__Syms.h"
#include "Vminimal_divider_sim___024root.h"

void Vminimal_divider_sim___024root___ctor_var_reset(Vminimal_divider_sim___024root* vlSelf);

Vminimal_divider_sim___024root::Vminimal_divider_sim___024root(Vminimal_divider_sim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vminimal_divider_sim___024root___ctor_var_reset(this);
}

void Vminimal_divider_sim___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vminimal_divider_sim___024root::~Vminimal_divider_sim___024root() {
}
