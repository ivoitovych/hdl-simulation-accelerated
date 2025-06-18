// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vled_blinker_test.h for the primary calling header

#include "Vled_blinker_test__pch.h"
#include "Vled_blinker_test___024root.h"

VlCoroutine Vled_blinker_test___024root___eval_initial__TOP__Vtiming__0(Vled_blinker_test___024root* vlSelf);

void Vled_blinker_test___024root___eval_initial(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___eval_initial\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vled_blinker_test___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vled_blinker_test___024root___eval_act(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___eval_act\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vled_blinker_test___024root___nba_sequent__TOP__0(Vled_blinker_test___024root* vlSelf);

void Vled_blinker_test___024root___eval_nba(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___eval_nba\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vled_blinker_test___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vled_blinker_test___024root___nba_sequent__TOP__0(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___nba_sequent__TOP__0\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__led_blinker_test__DOT__dut__DOT__counter;
    __Vdly__led_blinker_test__DOT__dut__DOT__counter = 0;
    CData/*0:0*/ __Vdly__led_blinker_test__DOT__led;
    __Vdly__led_blinker_test__DOT__led = 0;
    // Body
    __Vdly__led_blinker_test__DOT__dut__DOT__counter 
        = vlSelfRef.led_blinker_test__DOT__dut__DOT__counter;
    __Vdly__led_blinker_test__DOT__led = vlSelfRef.led_blinker_test__DOT__led;
    if (vlSelfRef.led_blinker_test__DOT__rst) {
        __Vdly__led_blinker_test__DOT__dut__DOT__counter = 0U;
        __Vdly__led_blinker_test__DOT__led = 0U;
    } else if ((3U == (IData)(vlSelfRef.led_blinker_test__DOT__dut__DOT__counter))) {
        __Vdly__led_blinker_test__DOT__led = (1U & 
                                              (~ (IData)(vlSelfRef.led_blinker_test__DOT__led)));
        __Vdly__led_blinker_test__DOT__dut__DOT__counter = 0U;
    } else {
        __Vdly__led_blinker_test__DOT__dut__DOT__counter 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.led_blinker_test__DOT__dut__DOT__counter)));
    }
    vlSelfRef.led_blinker_test__DOT__dut__DOT__counter 
        = __Vdly__led_blinker_test__DOT__dut__DOT__counter;
    vlSelfRef.led_blinker_test__DOT__led = __Vdly__led_blinker_test__DOT__led;
}

void Vled_blinker_test___024root___timing_resume(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___timing_resume\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vled_blinker_test___024root___eval_triggers__act(Vled_blinker_test___024root* vlSelf);

bool Vled_blinker_test___024root___eval_phase__act(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___eval_phase__act\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vled_blinker_test___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vled_blinker_test___024root___timing_resume(vlSelf);
        Vled_blinker_test___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vled_blinker_test___024root___eval_phase__nba(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___eval_phase__nba\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vled_blinker_test___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_blinker_test___024root___dump_triggers__nba(Vled_blinker_test___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_blinker_test___024root___dump_triggers__act(Vled_blinker_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vled_blinker_test___024root___eval(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___eval\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vled_blinker_test___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("led_blinker.v", 33, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vled_blinker_test___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("led_blinker.v", 33, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vled_blinker_test___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vled_blinker_test___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vled_blinker_test___024root___eval_debug_assertions(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___eval_debug_assertions\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
