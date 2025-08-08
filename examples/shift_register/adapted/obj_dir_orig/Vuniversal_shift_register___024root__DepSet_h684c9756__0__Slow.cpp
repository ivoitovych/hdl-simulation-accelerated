// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuniversal_shift_register.h for the primary calling header

#include "Vuniversal_shift_register__pch.h"
#include "Vuniversal_shift_register___024root.h"

VL_ATTR_COLD void Vuniversal_shift_register___024root___eval_static(Vuniversal_shift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root___eval_static\n"); );
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vuniversal_shift_register___024root___eval_initial(Vuniversal_shift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root___eval_initial\n"); );
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vuniversal_shift_register___024root___eval_final(Vuniversal_shift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root___eval_final\n"); );
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vuniversal_shift_register___024root___eval_settle(Vuniversal_shift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root___eval_settle\n"); );
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuniversal_shift_register___024root___dump_triggers__act(Vuniversal_shift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root___dump_triggers__act\n"); );
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuniversal_shift_register___024root___dump_triggers__nba(Vuniversal_shift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root___dump_triggers__nba\n"); );
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuniversal_shift_register___024root___ctor_var_reset(Vuniversal_shift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root___ctor_var_reset\n"); );
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030669854614834172ull);
    vlSelf->mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2288075164703132177ull);
    vlSelf->serial_in_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12624694465744606031ull);
    vlSelf->serial_in_left = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5831810122618900224ull);
    vlSelf->parallel_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14663299222880654612ull);
    vlSelf->q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8861071527689086543ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14803524876191471008ull);
}
