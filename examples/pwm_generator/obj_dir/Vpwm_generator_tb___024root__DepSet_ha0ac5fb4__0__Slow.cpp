// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm_generator_tb.h for the primary calling header

#include "Vpwm_generator_tb__pch.h"
#include "Vpwm_generator_tb___024root.h"

VL_ATTR_COLD void Vpwm_generator_tb___024root___eval_static(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___eval_static\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__pwm_generator_tb__DOT__clk__0 
        = vlSelfRef.pwm_generator_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pwm_generator_tb__DOT__rst_n__0 
        = vlSelfRef.pwm_generator_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__pwm_generator_tb__DOT__pwm_out__0 
        = vlSelfRef.pwm_generator_tb__DOT__pwm_out;
}

VL_ATTR_COLD void Vpwm_generator_tb___024root___eval_final(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___eval_final\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vpwm_generator_tb___024root___eval_settle(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___eval_settle\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpwm_generator_tb___024root___dump_triggers__act(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___dump_triggers__act\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge pwm_generator_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge pwm_generator_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge pwm_generator_tb.pwm_out)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpwm_generator_tb___024root___dump_triggers__nba(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___dump_triggers__nba\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge pwm_generator_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge pwm_generator_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge pwm_generator_tb.pwm_out)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpwm_generator_tb___024root___ctor_var_reset(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___ctor_var_reset\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->pwm_generator_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 726512540508721385ull);
    vlSelf->pwm_generator_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3699080400871093333ull);
    vlSelf->pwm_generator_tb__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10626905892308180412ull);
    vlSelf->pwm_generator_tb__DOT__duty = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4059638417276639745ull);
    vlSelf->pwm_generator_tb__DOT__period = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16629841705390651311ull);
    vlSelf->pwm_generator_tb__DOT__pwm_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3685184179562078724ull);
    vlSelf->pwm_generator_tb__DOT__test_case = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2207522512690192770ull);
    vlSelf->pwm_generator_tb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4989091113552489147ull);
    vlSelf->pwm_generator_tb__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3035065362714288789ull);
    vlSelf->pwm_generator_tb__DOT__high_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4094739274856568875ull);
    vlSelf->pwm_generator_tb__DOT__low_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17291594263012117302ull);
    vlSelf->pwm_generator_tb__DOT__measured_duty_cycle = 0;
    vlSelf->pwm_generator_tb__DOT__expected_duty_cycle = 0;
    vlSelf->pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7202863916749060020ull);
    vlSelf->pwm_generator_tb__DOT__dut__DOT__pwm_counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3257186391444566502ull);
    vlSelf->pwm_generator_tb__DOT__dut__DOT__clk_div_counter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1837621429633115590ull);
    vlSelf->__Vtrigprevexpr___TOP__pwm_generator_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13121052998816983310ull);
    vlSelf->__Vtrigprevexpr___TOP__pwm_generator_tb__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10359221039463040330ull);
    vlSelf->__Vtrigprevexpr___TOP__pwm_generator_tb__DOT__pwm_out__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1926719626772320480ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
