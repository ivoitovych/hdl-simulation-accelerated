// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminimal_divider_sim.h for the primary calling header

#include "Vminimal_divider_sim__pch.h"
#include "Vminimal_divider_sim___024root.h"

VlCoroutine Vminimal_divider_sim___024root___eval_initial__TOP__Vtiming__0(Vminimal_divider_sim___024root* vlSelf);
VlCoroutine Vminimal_divider_sim___024root___eval_initial__TOP__Vtiming__1(Vminimal_divider_sim___024root* vlSelf);

void Vminimal_divider_sim___024root___eval_initial(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___eval_initial\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vminimal_divider_sim___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vminimal_divider_sim___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vminimal_divider_sim___024root___eval_initial__TOP__Vtiming__0(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.minimal_divider_sim__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x32ULL, 
                                             nullptr, 
                                             "minimal_divider_sim.v", 
                                             13);
        vlSelfRef.minimal_divider_sim__DOT__clk = (1U 
                                                   & (~ (IData)(vlSelfRef.minimal_divider_sim__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vminimal_divider_sim___024root___eval_initial__TOP__Vtiming__1(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.minimal_divider_sim__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x50ULL, nullptr, 
                                         "minimal_divider_sim.v", 
                                         19);
    vlSelfRef.minimal_divider_sim__DOT__rst = 0U;
}

void Vminimal_divider_sim___024root___eval_act(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___eval_act\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vminimal_divider_sim___024root___nba_sequent__TOP__0(Vminimal_divider_sim___024root* vlSelf);

void Vminimal_divider_sim___024root___eval_nba(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___eval_nba\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vminimal_divider_sim___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vminimal_divider_sim___024root___nba_sequent__TOP__0(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___nba_sequent__TOP__0\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__minimal_divider_sim__DOT__div1;
    __Vdly__minimal_divider_sim__DOT__div1 = 0;
    CData/*0:0*/ __Vdly__minimal_divider_sim__DOT__div2;
    __Vdly__minimal_divider_sim__DOT__div2 = 0;
    CData/*0:0*/ __Vdly__minimal_divider_sim__DOT__div3;
    __Vdly__minimal_divider_sim__DOT__div3 = 0;
    CData/*0:0*/ __Vdly__minimal_divider_sim__DOT__div4;
    __Vdly__minimal_divider_sim__DOT__div4 = 0;
    IData/*31:0*/ __Vdly__minimal_divider_sim__DOT__i;
    __Vdly__minimal_divider_sim__DOT__i = 0;
    // Body
    __Vdly__minimal_divider_sim__DOT__div1 = vlSelfRef.minimal_divider_sim__DOT__div1;
    __Vdly__minimal_divider_sim__DOT__div2 = vlSelfRef.minimal_divider_sim__DOT__div2;
    __Vdly__minimal_divider_sim__DOT__div3 = vlSelfRef.minimal_divider_sim__DOT__div3;
    __Vdly__minimal_divider_sim__DOT__div4 = vlSelfRef.minimal_divider_sim__DOT__div4;
    __Vdly__minimal_divider_sim__DOT__i = vlSelfRef.minimal_divider_sim__DOT__i;
    if (vlSelfRef.minimal_divider_sim__DOT__rst) {
        __Vdly__minimal_divider_sim__DOT__div1 = 0U;
        __Vdly__minimal_divider_sim__DOT__div2 = 0U;
        __Vdly__minimal_divider_sim__DOT__div3 = 0U;
        __Vdly__minimal_divider_sim__DOT__div4 = 0U;
        __Vdly__minimal_divider_sim__DOT__i = 0U;
    } else {
        __Vdly__minimal_divider_sim__DOT__i = ((IData)(1U) 
                                               + vlSelfRef.minimal_divider_sim__DOT__i);
        __Vdly__minimal_divider_sim__DOT__div1 = (1U 
                                                  & (~ (IData)(vlSelfRef.minimal_divider_sim__DOT__div1)));
        if (vlSelfRef.minimal_divider_sim__DOT__div1) {
            __Vdly__minimal_divider_sim__DOT__div2 
                = (1U & (~ (IData)(vlSelfRef.minimal_divider_sim__DOT__div2)));
        }
        if (((IData)(vlSelfRef.minimal_divider_sim__DOT__div1) 
             & (IData)(vlSelfRef.minimal_divider_sim__DOT__div2))) {
            __Vdly__minimal_divider_sim__DOT__div3 
                = (1U & (~ (IData)(vlSelfRef.minimal_divider_sim__DOT__div3)));
        }
        if ((((IData)(vlSelfRef.minimal_divider_sim__DOT__div1) 
              & (IData)(vlSelfRef.minimal_divider_sim__DOT__div2)) 
             & (IData)(vlSelfRef.minimal_divider_sim__DOT__div3))) {
            __Vdly__minimal_divider_sim__DOT__div4 
                = (1U & (~ (IData)(vlSelfRef.minimal_divider_sim__DOT__div4)));
        }
    }
    VL_WRITEF_NX("time=%6t ns  cycle=%2d  div1=%1b  div2=%1b  div3=%1b  div4=%1b\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,32,vlSelfRef.minimal_divider_sim__DOT__i,
                 1,(IData)(vlSelfRef.minimal_divider_sim__DOT__div1),
                 1,vlSelfRef.minimal_divider_sim__DOT__div2,
                 1,(IData)(vlSelfRef.minimal_divider_sim__DOT__div3),
                 1,vlSelfRef.minimal_divider_sim__DOT__div4);
    if (VL_UNLIKELY(((0x31U == vlSelfRef.minimal_divider_sim__DOT__i)))) {
        VL_FINISH_MT("minimal_divider_sim.v", 42, "");
    }
    vlSelfRef.minimal_divider_sim__DOT__div1 = __Vdly__minimal_divider_sim__DOT__div1;
    vlSelfRef.minimal_divider_sim__DOT__div2 = __Vdly__minimal_divider_sim__DOT__div2;
    vlSelfRef.minimal_divider_sim__DOT__div3 = __Vdly__minimal_divider_sim__DOT__div3;
    vlSelfRef.minimal_divider_sim__DOT__div4 = __Vdly__minimal_divider_sim__DOT__div4;
    vlSelfRef.minimal_divider_sim__DOT__i = __Vdly__minimal_divider_sim__DOT__i;
}

void Vminimal_divider_sim___024root___timing_resume(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___timing_resume\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vminimal_divider_sim___024root___eval_triggers__act(Vminimal_divider_sim___024root* vlSelf);

bool Vminimal_divider_sim___024root___eval_phase__act(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___eval_phase__act\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vminimal_divider_sim___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vminimal_divider_sim___024root___timing_resume(vlSelf);
        Vminimal_divider_sim___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vminimal_divider_sim___024root___eval_phase__nba(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___eval_phase__nba\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vminimal_divider_sim___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminimal_divider_sim___024root___dump_triggers__nba(Vminimal_divider_sim___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vminimal_divider_sim___024root___dump_triggers__act(Vminimal_divider_sim___024root* vlSelf);
#endif  // VL_DEBUG

void Vminimal_divider_sim___024root___eval(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___eval\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vminimal_divider_sim___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("minimal_divider_sim.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vminimal_divider_sim___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("minimal_divider_sim.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vminimal_divider_sim___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vminimal_divider_sim___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vminimal_divider_sim___024root___eval_debug_assertions(Vminimal_divider_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root___eval_debug_assertions\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
