// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuniversal_shift_register_tb.h for the primary calling header

#include "Vuniversal_shift_register_tb__pch.h"
#include "Vuniversal_shift_register_tb___024root.h"

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root___eval_static__TOP(Vuniversal_shift_register_tb___024root* vlSelf);
VL_ATTR_COLD void Vuniversal_shift_register_tb___024root____Vm_traceActivitySetAll(Vuniversal_shift_register_tb___024root* vlSelf);

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root___eval_static(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___eval_static\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuniversal_shift_register_tb___024root___eval_static__TOP(vlSelf);
    Vuniversal_shift_register_tb___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__universal_shift_register_tb__DOT__clk__0 
        = vlSelfRef.universal_shift_register_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__universal_shift_register_tb__DOT__rst_n__0 
        = vlSelfRef.universal_shift_register_tb__DOT__rst_n;
}

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root___eval_static__TOP(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___eval_static__TOP\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.universal_shift_register_tb__DOT__seed = 0x75bcd15U;
}

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root___eval_final(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___eval_final\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root___eval_settle(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___eval_settle\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuniversal_shift_register_tb___024root___dump_triggers__act(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___dump_triggers__act\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge universal_shift_register_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge universal_shift_register_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge universal_shift_register_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuniversal_shift_register_tb___024root___dump_triggers__nba(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___dump_triggers__nba\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge universal_shift_register_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge universal_shift_register_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge universal_shift_register_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root____Vm_traceActivitySetAll(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root____Vm_traceActivitySetAll\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root___ctor_var_reset(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___ctor_var_reset\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->universal_shift_register_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->universal_shift_register_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->universal_shift_register_tb__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->universal_shift_register_tb__DOT__mode = VL_RAND_RESET_I(2);
    vlSelf->universal_shift_register_tb__DOT__serial_in_right = VL_RAND_RESET_I(1);
    vlSelf->universal_shift_register_tb__DOT__serial_in_left = VL_RAND_RESET_I(1);
    vlSelf->universal_shift_register_tb__DOT__parallel_in = VL_RAND_RESET_I(8);
    vlSelf->universal_shift_register_tb__DOT__q = VL_RAND_RESET_I(8);
    vlSelf->universal_shift_register_tb__DOT__test_case = VL_RAND_RESET_I(32);
    vlSelf->universal_shift_register_tb__DOT__error_count = VL_RAND_RESET_I(32);
    vlSelf->universal_shift_register_tb__DOT__expected_q = VL_RAND_RESET_I(8);
    vlSelf->universal_shift_register_tb__DOT__seed = VL_RAND_RESET_I(32);
    vlSelf->universal_shift_register_tb__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->universal_shift_register_tb__DOT__bit_val = VL_RAND_RESET_I(1);
    vlSelf->universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__pattern = VL_RAND_RESET_I(8);
    vlSelf->universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__j = VL_RAND_RESET_I(32);
    vlSelf->universal_shift_register_tb__DOT__unnamedblk1__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__universal_shift_register_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__universal_shift_register_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
