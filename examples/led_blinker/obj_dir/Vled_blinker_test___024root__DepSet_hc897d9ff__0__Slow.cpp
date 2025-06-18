// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vled_blinker_test.h for the primary calling header

#include "Vled_blinker_test__pch.h"
#include "Vled_blinker_test___024root.h"

VL_ATTR_COLD void Vled_blinker_test___024root___eval_static__TOP(Vled_blinker_test___024root* vlSelf);

VL_ATTR_COLD void Vled_blinker_test___024root___eval_static(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___eval_static\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vled_blinker_test___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__led_blinker_test__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vled_blinker_test___024root___eval_static__TOP(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___eval_static__TOP\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.led_blinker_test__DOT__clk = 0U;
    vlSelfRef.led_blinker_test__DOT__rst = 1U;
}

VL_ATTR_COLD void Vled_blinker_test___024root___eval_final(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___eval_final\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vled_blinker_test___024root___eval_settle(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___eval_settle\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_blinker_test___024root___dump_triggers__act(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___dump_triggers__act\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge led_blinker_test.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_blinker_test___024root___dump_triggers__nba(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___dump_triggers__nba\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge led_blinker_test.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vled_blinker_test___024root___ctor_var_reset(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___ctor_var_reset\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->led_blinker_test__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->led_blinker_test__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->led_blinker_test__DOT__led = VL_RAND_RESET_I(1);
    vlSelf->led_blinker_test__DOT__dut__DOT__counter = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__led_blinker_test__DOT__clk__0 = VL_RAND_RESET_I(1);
}
