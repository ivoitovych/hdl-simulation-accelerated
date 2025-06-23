// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vedge_detector_test.h for the primary calling header

#include "Vedge_detector_test__pch.h"
#include "Vedge_detector_test__Syms.h"
#include "Vedge_detector_test___024root.h"

void Vedge_detector_test___024root___ctor_var_reset(Vedge_detector_test___024root* vlSelf);

Vedge_detector_test___024root::Vedge_detector_test___024root(Vedge_detector_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vedge_detector_test___024root___ctor_var_reset(this);
}

void Vedge_detector_test___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vedge_detector_test___024root::~Vedge_detector_test___024root() {
}
