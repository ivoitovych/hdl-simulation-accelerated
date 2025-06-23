// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_8bit_test.h for the primary calling header

#include "Vcounter_8bit_test__pch.h"
#include "Vcounter_8bit_test___024root.h"

VL_ATTR_COLD void Vcounter_8bit_test___024root___eval_static__TOP(Vcounter_8bit_test___024root* vlSelf);
VL_ATTR_COLD void Vcounter_8bit_test___024root____Vm_traceActivitySetAll(Vcounter_8bit_test___024root* vlSelf);

VL_ATTR_COLD void Vcounter_8bit_test___024root___eval_static(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___eval_static\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcounter_8bit_test___024root___eval_static__TOP(vlSelf);
    Vcounter_8bit_test___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__counter_8bit_test__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vcounter_8bit_test___024root___eval_static__TOP(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___eval_static__TOP\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.counter_8bit_test__DOT__clk = 0U;
    vlSelfRef.counter_8bit_test__DOT__rst = 1U;
    vlSelfRef.counter_8bit_test__DOT__enable = 0U;
    vlSelfRef.counter_8bit_test__DOT__load = 0U;
    vlSelfRef.counter_8bit_test__DOT__load_value = 0U;
}

VL_ATTR_COLD void Vcounter_8bit_test___024root___eval_final(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___eval_final\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_8bit_test___024root___dump_triggers__stl(Vcounter_8bit_test___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcounter_8bit_test___024root___eval_phase__stl(Vcounter_8bit_test___024root* vlSelf);

VL_ATTR_COLD void Vcounter_8bit_test___024root___eval_settle(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___eval_settle\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcounter_8bit_test___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("counter_8bit.v", 32, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcounter_8bit_test___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_8bit_test___024root___dump_triggers__stl(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___dump_triggers__stl\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vcounter_8bit_test___024root___act_sequent__TOP__0(Vcounter_8bit_test___024root* vlSelf);

VL_ATTR_COLD void Vcounter_8bit_test___024root___eval_stl(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___eval_stl\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcounter_8bit_test___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcounter_8bit_test___024root___eval_triggers__stl(Vcounter_8bit_test___024root* vlSelf);

VL_ATTR_COLD bool Vcounter_8bit_test___024root___eval_phase__stl(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___eval_phase__stl\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcounter_8bit_test___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcounter_8bit_test___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_8bit_test___024root___dump_triggers__act(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___dump_triggers__act\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge counter_8bit_test.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_8bit_test___024root___dump_triggers__nba(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___dump_triggers__nba\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge counter_8bit_test.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcounter_8bit_test___024root____Vm_traceActivitySetAll(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root____Vm_traceActivitySetAll\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vcounter_8bit_test___024root___ctor_var_reset(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___ctor_var_reset\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->counter_8bit_test__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14949244101070454881ull);
    vlSelf->counter_8bit_test__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16206465256344107685ull);
    vlSelf->counter_8bit_test__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11089958849822133981ull);
    vlSelf->counter_8bit_test__DOT__load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6327702197541030827ull);
    vlSelf->counter_8bit_test__DOT__load_value = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6887788941922611584ull);
    vlSelf->counter_8bit_test__DOT__count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5672559094355198068ull);
    vlSelf->counter_8bit_test__DOT__overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 700658571063825538ull);
    vlSelf->counter_8bit_test__DOT__underflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14622919145663544119ull);
    vlSelf->counter_8bit_test__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18322110161510784234ull);
    vlSelf->__Vtrigprevexpr___TOP__counter_8bit_test__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3865747027648996587ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
