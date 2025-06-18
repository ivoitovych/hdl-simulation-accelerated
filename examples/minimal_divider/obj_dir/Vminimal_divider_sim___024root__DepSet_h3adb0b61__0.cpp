// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminimal_divider_sim.h for the primary calling header

#include "Vminimal_divider_sim__pch.h"
#include "Vminimal_divider_sim__Syms.h"
#include "Vminimal_divider_sim___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminimal_divider_sim___024root___dump_triggers__act(Vminimal_divider_sim___024root* vlSelf);
#endif  // VL_DEBUG

void Vminimal_divider_sim___024root___eval_triggers__act(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___eval_triggers__act\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.minimal_divider_sim__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__minimal_divider_sim__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__minimal_divider_sim__DOT__clk__0 
        = vlSelfRef.minimal_divider_sim__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vminimal_divider_sim___024root___dump_triggers__act(vlSelf);
    }
#endif
}
