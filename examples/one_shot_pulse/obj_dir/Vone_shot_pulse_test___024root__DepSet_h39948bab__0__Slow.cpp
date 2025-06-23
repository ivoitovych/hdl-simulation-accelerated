// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vone_shot_pulse_test.h for the primary calling header

#include "Vone_shot_pulse_test__pch.h"
#include "Vone_shot_pulse_test___024root.h"

VL_ATTR_COLD void Vone_shot_pulse_test___024root___eval_static__TOP(Vone_shot_pulse_test___024root* vlSelf);

VL_ATTR_COLD void Vone_shot_pulse_test___024root___eval_static(Vone_shot_pulse_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vone_shot_pulse_test___024root___eval_static\n"); );
    Vone_shot_pulse_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vone_shot_pulse_test___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__one_shot_pulse_test__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vone_shot_pulse_test___024root___eval_static__TOP(Vone_shot_pulse_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vone_shot_pulse_test___024root___eval_static__TOP\n"); );
    Vone_shot_pulse_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.one_shot_pulse_test__DOT__clk = 0U;
    vlSelfRef.one_shot_pulse_test__DOT__rst = 1U;
    vlSelfRef.one_shot_pulse_test__DOT__enable = 0U;
}

VL_ATTR_COLD void Vone_shot_pulse_test___024root___eval_final(Vone_shot_pulse_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vone_shot_pulse_test___024root___eval_final\n"); );
    Vone_shot_pulse_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vone_shot_pulse_test___024root___eval_settle(Vone_shot_pulse_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vone_shot_pulse_test___024root___eval_settle\n"); );
    Vone_shot_pulse_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vone_shot_pulse_test___024root___dump_triggers__act(Vone_shot_pulse_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vone_shot_pulse_test___024root___dump_triggers__act\n"); );
    Vone_shot_pulse_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge one_shot_pulse_test.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vone_shot_pulse_test___024root___dump_triggers__nba(Vone_shot_pulse_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vone_shot_pulse_test___024root___dump_triggers__nba\n"); );
    Vone_shot_pulse_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge one_shot_pulse_test.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vone_shot_pulse_test___024root___ctor_var_reset(Vone_shot_pulse_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vone_shot_pulse_test___024root___ctor_var_reset\n"); );
    Vone_shot_pulse_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->one_shot_pulse_test__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->one_shot_pulse_test__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->one_shot_pulse_test__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->one_shot_pulse_test__DOT__pulse = VL_RAND_RESET_I(1);
    vlSelf->one_shot_pulse_test__DOT__dut__DOT__counter = VL_RAND_RESET_I(3);
    vlSelf->one_shot_pulse_test__DOT__dut__DOT__pulse_counter = VL_RAND_RESET_I(1);
    vlSelf->one_shot_pulse_test__DOT__dut__DOT__counting = VL_RAND_RESET_I(1);
    vlSelf->one_shot_pulse_test__DOT__dut__DOT__pulse_active = VL_RAND_RESET_I(1);
    vlSelf->one_shot_pulse_test__DOT__dut__DOT__pulse_done = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__one_shot_pulse_test__DOT__clk__0 = VL_RAND_RESET_I(1);
}
