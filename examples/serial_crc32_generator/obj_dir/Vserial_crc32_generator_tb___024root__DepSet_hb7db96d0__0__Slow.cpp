// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vserial_crc32_generator_tb.h for the primary calling header

#include "Vserial_crc32_generator_tb__pch.h"
#include "Vserial_crc32_generator_tb___024root.h"

VL_ATTR_COLD void Vserial_crc32_generator_tb___024root___eval_static(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___eval_static\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__serial_crc32_generator_tb__DOT__clk__0 
        = vlSelfRef.serial_crc32_generator_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__serial_crc32_generator_tb__DOT__rst_n__0 
        = vlSelfRef.serial_crc32_generator_tb__DOT__rst_n;
}

VL_ATTR_COLD void Vserial_crc32_generator_tb___024root___eval_final(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___eval_final\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vserial_crc32_generator_tb___024root___eval_settle(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___eval_settle\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vserial_crc32_generator_tb___024root___dump_triggers__act(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___dump_triggers__act\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge serial_crc32_generator_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge serial_crc32_generator_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge serial_crc32_generator_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vserial_crc32_generator_tb___024root___dump_triggers__nba(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___dump_triggers__nba\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge serial_crc32_generator_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge serial_crc32_generator_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge serial_crc32_generator_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vserial_crc32_generator_tb___024root___ctor_var_reset(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___ctor_var_reset\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->serial_crc32_generator_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->serial_crc32_generator_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->serial_crc32_generator_tb__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->serial_crc32_generator_tb__DOT__data_in = VL_RAND_RESET_I(1);
    vlSelf->serial_crc32_generator_tb__DOT__new_message = VL_RAND_RESET_I(1);
    vlSelf->serial_crc32_generator_tb__DOT__crc_out = VL_RAND_RESET_I(32);
    vlSelf->serial_crc32_generator_tb__DOT__test_case = VL_RAND_RESET_I(32);
    vlSelf->serial_crc32_generator_tb__DOT__error_count = VL_RAND_RESET_I(32);
    vlSelf->serial_crc32_generator_tb__DOT__expected_crc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->serial_crc32_generator_tb__DOT__test_data_bytes[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->serial_crc32_generator_tb__DOT__total_test_bytes = VL_RAND_RESET_I(32);
    vlSelf->serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = VL_RAND_RESET_I(32);
    vlSelf->serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx = VL_RAND_RESET_I(32);
    vlSelf->serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->serial_crc32_generator_tb__DOT__dut__DOT__crc_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__serial_crc32_generator_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__serial_crc32_generator_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
