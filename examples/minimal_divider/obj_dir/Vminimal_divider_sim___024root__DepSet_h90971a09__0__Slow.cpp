// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminimal_divider_sim.h for the primary calling header

#include "Vminimal_divider_sim__pch.h"
#include "Vminimal_divider_sim___024root.h"

VL_ATTR_COLD void Vminimal_divider_sim___024root___eval_static(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___eval_static\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__minimal_divider_sim__DOT__clk__0 
        = vlSelfRef.minimal_divider_sim__DOT__clk;
}

VL_ATTR_COLD void Vminimal_divider_sim___024root___eval_final(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___eval_final\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vminimal_divider_sim___024root___eval_settle(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___eval_settle\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminimal_divider_sim___024root___dump_triggers__act(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___dump_triggers__act\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge minimal_divider_sim.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminimal_divider_sim___024root___dump_triggers__nba(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___dump_triggers__nba\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge minimal_divider_sim.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vminimal_divider_sim___024root___ctor_var_reset(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___ctor_var_reset\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->minimal_divider_sim__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->minimal_divider_sim__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->minimal_divider_sim__DOT__div1 = VL_RAND_RESET_I(1);
    vlSelf->minimal_divider_sim__DOT__div2 = VL_RAND_RESET_I(1);
    vlSelf->minimal_divider_sim__DOT__div3 = VL_RAND_RESET_I(1);
    vlSelf->minimal_divider_sim__DOT__div4 = VL_RAND_RESET_I(1);
    vlSelf->minimal_divider_sim__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__minimal_divider_sim__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
