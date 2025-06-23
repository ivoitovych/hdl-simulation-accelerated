// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vedge_detector_test.h for the primary calling header

#include "Vedge_detector_test__pch.h"
#include "Vedge_detector_test___024root.h"

VL_ATTR_COLD void Vedge_detector_test___024root___eval_static__TOP(Vedge_detector_test___024root* vlSelf);

VL_ATTR_COLD void Vedge_detector_test___024root___eval_static(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___eval_static\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vedge_detector_test___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__edge_detector_test__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vedge_detector_test___024root___eval_static__TOP(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___eval_static__TOP\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.edge_detector_test__DOT__clk = 0U;
    vlSelfRef.edge_detector_test__DOT__rst = 1U;
    vlSelfRef.edge_detector_test__DOT__signal_in = 0U;
}

VL_ATTR_COLD void Vedge_detector_test___024root___eval_final(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___eval_final\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vedge_detector_test___024root___eval_settle(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___eval_settle\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vedge_detector_test___024root___dump_triggers__act(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___dump_triggers__act\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge edge_detector_test.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vedge_detector_test___024root___dump_triggers__nba(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___dump_triggers__nba\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge edge_detector_test.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vedge_detector_test___024root___ctor_var_reset(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___ctor_var_reset\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->edge_detector_test__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10238338302221111148ull);
    vlSelf->edge_detector_test__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4147333277084240595ull);
    vlSelf->edge_detector_test__DOT__signal_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2864740188642178981ull);
    vlSelf->edge_detector_test__DOT__rising_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15254102926551981903ull);
    vlSelf->edge_detector_test__DOT__falling_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8486343252150248255ull);
    vlSelf->edge_detector_test__DOT__any_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8358157832484458587ull);
    vlSelf->edge_detector_test__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6145645303248220711ull);
    vlSelf->edge_detector_test__DOT__dut__DOT__signal_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16950486275841687132ull);
    vlSelf->__Vtrigprevexpr___TOP__edge_detector_test__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16635874666263240768ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
