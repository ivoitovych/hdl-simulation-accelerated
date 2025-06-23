// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_8bit_test.h for the primary calling header

#include "Vcounter_8bit_test__pch.h"
#include "Vcounter_8bit_test___024root.h"

VlCoroutine Vcounter_8bit_test___024root___eval_initial__TOP__Vtiming__0(Vcounter_8bit_test___024root* vlSelf);

void Vcounter_8bit_test___024root___eval_initial(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___eval_initial\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vcounter_8bit_test___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vcounter_8bit_test___024root___act_sequent__TOP__0(Vcounter_8bit_test___024root* vlSelf);

void Vcounter_8bit_test___024root___eval_act(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___eval_act\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcounter_8bit_test___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcounter_8bit_test___024root___act_sequent__TOP__0(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___act_sequent__TOP__0\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.counter_8bit_test__DOT__overflow = ((IData)(vlSelfRef.counter_8bit_test__DOT__enable) 
                                                  & ((~ (IData)(vlSelfRef.counter_8bit_test__DOT__load)) 
                                                     & (0xffU 
                                                        == (IData)(vlSelfRef.counter_8bit_test__DOT__count))));
    vlSelfRef.counter_8bit_test__DOT__underflow = ((IData)(vlSelfRef.counter_8bit_test__DOT__enable) 
                                                   & ((~ (IData)(vlSelfRef.counter_8bit_test__DOT__load)) 
                                                      & (0U 
                                                         == (IData)(vlSelfRef.counter_8bit_test__DOT__count))));
}

void Vcounter_8bit_test___024root___nba_sequent__TOP__0(Vcounter_8bit_test___024root* vlSelf);

void Vcounter_8bit_test___024root___eval_nba(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___eval_nba\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcounter_8bit_test___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcounter_8bit_test___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcounter_8bit_test___024root___nba_sequent__TOP__0(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___nba_sequent__TOP__0\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__counter_8bit_test__DOT__count;
    __Vdly__counter_8bit_test__DOT__count = 0;
    // Body
    __Vdly__counter_8bit_test__DOT__count = vlSelfRef.counter_8bit_test__DOT__count;
    if (vlSelfRef.counter_8bit_test__DOT__rst) {
        __Vdly__counter_8bit_test__DOT__count = 0U;
    } else if (vlSelfRef.counter_8bit_test__DOT__load) {
        __Vdly__counter_8bit_test__DOT__count = vlSelfRef.counter_8bit_test__DOT__load_value;
    } else if (vlSelfRef.counter_8bit_test__DOT__enable) {
        __Vdly__counter_8bit_test__DOT__count = (0xffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.counter_8bit_test__DOT__count)));
    }
    vlSelfRef.counter_8bit_test__DOT__count = __Vdly__counter_8bit_test__DOT__count;
}

void Vcounter_8bit_test___024root___timing_resume(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___timing_resume\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcounter_8bit_test___024root___eval_triggers__act(Vcounter_8bit_test___024root* vlSelf);

bool Vcounter_8bit_test___024root___eval_phase__act(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___eval_phase__act\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcounter_8bit_test___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcounter_8bit_test___024root___timing_resume(vlSelf);
        Vcounter_8bit_test___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcounter_8bit_test___024root___eval_phase__nba(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___eval_phase__nba\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcounter_8bit_test___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_8bit_test___024root___dump_triggers__nba(Vcounter_8bit_test___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_8bit_test___024root___dump_triggers__act(Vcounter_8bit_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounter_8bit_test___024root___eval(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___eval\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcounter_8bit_test___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("counter_8bit.v", 32, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcounter_8bit_test___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("counter_8bit.v", 32, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcounter_8bit_test___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcounter_8bit_test___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcounter_8bit_test___024root___eval_debug_assertions(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___eval_debug_assertions\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
