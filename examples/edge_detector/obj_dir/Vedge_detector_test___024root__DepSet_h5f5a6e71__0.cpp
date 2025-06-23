// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vedge_detector_test.h for the primary calling header

#include "Vedge_detector_test__pch.h"
#include "Vedge_detector_test___024root.h"

VlCoroutine Vedge_detector_test___024root___eval_initial__TOP__Vtiming__0(Vedge_detector_test___024root* vlSelf);

void Vedge_detector_test___024root___eval_initial(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___eval_initial\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vedge_detector_test___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vedge_detector_test___024root___eval_act(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___eval_act\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vedge_detector_test___024root___nba_sequent__TOP__0(Vedge_detector_test___024root* vlSelf);

void Vedge_detector_test___024root___eval_nba(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___eval_nba\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vedge_detector_test___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vedge_detector_test___024root___nba_sequent__TOP__0(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___nba_sequent__TOP__0\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.edge_detector_test__DOT__rst) {
        vlSelfRef.edge_detector_test__DOT__rising_edge = 0U;
        vlSelfRef.edge_detector_test__DOT__falling_edge = 0U;
        vlSelfRef.edge_detector_test__DOT__any_edge = 0U;
    } else {
        vlSelfRef.edge_detector_test__DOT__rising_edge 
            = ((IData)(vlSelfRef.edge_detector_test__DOT__signal_in) 
               & (~ (IData)(vlSelfRef.edge_detector_test__DOT__dut__DOT__signal_prev)));
        vlSelfRef.edge_detector_test__DOT__falling_edge 
            = ((~ (IData)(vlSelfRef.edge_detector_test__DOT__signal_in)) 
               & (IData)(vlSelfRef.edge_detector_test__DOT__dut__DOT__signal_prev));
        vlSelfRef.edge_detector_test__DOT__any_edge 
            = ((IData)(vlSelfRef.edge_detector_test__DOT__signal_in) 
               ^ (IData)(vlSelfRef.edge_detector_test__DOT__dut__DOT__signal_prev));
    }
    vlSelfRef.edge_detector_test__DOT__dut__DOT__signal_prev 
        = ((1U & (~ (IData)(vlSelfRef.edge_detector_test__DOT__rst))) 
           && (IData)(vlSelfRef.edge_detector_test__DOT__signal_in));
}

void Vedge_detector_test___024root___timing_resume(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___timing_resume\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vedge_detector_test___024root___eval_triggers__act(Vedge_detector_test___024root* vlSelf);

bool Vedge_detector_test___024root___eval_phase__act(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___eval_phase__act\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vedge_detector_test___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vedge_detector_test___024root___timing_resume(vlSelf);
        Vedge_detector_test___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vedge_detector_test___024root___eval_phase__nba(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___eval_phase__nba\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vedge_detector_test___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vedge_detector_test___024root___dump_triggers__nba(Vedge_detector_test___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vedge_detector_test___024root___dump_triggers__act(Vedge_detector_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vedge_detector_test___024root___eval(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___eval\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vedge_detector_test___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("edge_detector.v", 33, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vedge_detector_test___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("edge_detector.v", 33, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vedge_detector_test___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vedge_detector_test___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vedge_detector_test___024root___eval_debug_assertions(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___eval_debug_assertions\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
