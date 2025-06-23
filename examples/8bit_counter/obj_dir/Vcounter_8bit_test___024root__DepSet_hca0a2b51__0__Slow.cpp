// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_8bit_test.h for the primary calling header

#include "Vcounter_8bit_test__pch.h"
#include "Vcounter_8bit_test__Syms.h"
#include "Vcounter_8bit_test___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_8bit_test___024root___dump_triggers__stl(Vcounter_8bit_test___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcounter_8bit_test___024root___eval_triggers__stl(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___eval_triggers__stl\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcounter_8bit_test___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
