// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm_generator_tb.h for the primary calling header

#include "Vpwm_generator_tb__pch.h"
#include "Vpwm_generator_tb___024root.h"

VlCoroutine Vpwm_generator_tb___024root___eval_initial__TOP__Vtiming__0(Vpwm_generator_tb___024root* vlSelf);
VlCoroutine Vpwm_generator_tb___024root___eval_initial__TOP__Vtiming__1(Vpwm_generator_tb___024root* vlSelf);

void Vpwm_generator_tb___024root___eval_initial(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___eval_initial\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vpwm_generator_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vpwm_generator_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vpwm_generator_tb___024root___eval_initial__TOP__Vtiming__0(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pwm_generator_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "pwm_generator_tb.v", 
                                             41);
        vlSelfRef.pwm_generator_tb__DOT__clk = (1U 
                                                & (~ (IData)(vlSelfRef.pwm_generator_tb__DOT__clk)));
    }
}

void Vpwm_generator_tb___024root___eval_act(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___eval_act\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vpwm_generator_tb___024root___nba_sequent__TOP__0(Vpwm_generator_tb___024root* vlSelf);

void Vpwm_generator_tb___024root___eval_nba(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___eval_nba\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpwm_generator_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vpwm_generator_tb___024root___nba_sequent__TOP__0(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___nba_sequent__TOP__0\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__pwm_generator_tb__DOT__dut__DOT__pwm_counter;
    __Vdly__pwm_generator_tb__DOT__dut__DOT__pwm_counter = 0;
    // Body
    __Vdly__pwm_generator_tb__DOT__dut__DOT__pwm_counter 
        = vlSelfRef.pwm_generator_tb__DOT__dut__DOT__pwm_counter;
    if (vlSelfRef.pwm_generator_tb__DOT__rst_n) {
        if (vlSelfRef.pwm_generator_tb__DOT__enable) {
            __Vdly__pwm_generator_tb__DOT__dut__DOT__pwm_counter 
                = (((IData)(vlSelfRef.pwm_generator_tb__DOT__dut__DOT__pwm_counter) 
                    >= (IData)(vlSelfRef.pwm_generator_tb__DOT__period))
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelfRef.pwm_generator_tb__DOT__dut__DOT__pwm_counter))));
        }
    } else {
        __Vdly__pwm_generator_tb__DOT__dut__DOT__pwm_counter = 0U;
    }
    vlSelfRef.pwm_generator_tb__DOT__pwm_out = ((IData)(vlSelfRef.pwm_generator_tb__DOT__rst_n) 
                                                && ((IData)(vlSelfRef.pwm_generator_tb__DOT__enable) 
                                                    && ((IData)(vlSelfRef.pwm_generator_tb__DOT__dut__DOT__pwm_counter) 
                                                        < (IData)(vlSelfRef.pwm_generator_tb__DOT__duty))));
    vlSelfRef.pwm_generator_tb__DOT__dut__DOT__pwm_counter 
        = __Vdly__pwm_generator_tb__DOT__dut__DOT__pwm_counter;
}

void Vpwm_generator_tb___024root___timing_resume(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___timing_resume\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5d7703a5__0.resume(
                                                   "@(posedge pwm_generator_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h1f93b9e0__0.resume(
                                                   "@(posedge pwm_generator_tb.pwm_out)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vpwm_generator_tb___024root___timing_commit(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___timing_commit\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5d7703a5__0.commit(
                                                   "@(posedge pwm_generator_tb.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h1f93b9e0__0.commit(
                                                   "@(posedge pwm_generator_tb.pwm_out)");
    }
}

void Vpwm_generator_tb___024root___eval_triggers__act(Vpwm_generator_tb___024root* vlSelf);

bool Vpwm_generator_tb___024root___eval_phase__act(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___eval_phase__act\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpwm_generator_tb___024root___eval_triggers__act(vlSelf);
    Vpwm_generator_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vpwm_generator_tb___024root___timing_resume(vlSelf);
        Vpwm_generator_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpwm_generator_tb___024root___eval_phase__nba(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___eval_phase__nba\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpwm_generator_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpwm_generator_tb___024root___dump_triggers__nba(Vpwm_generator_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpwm_generator_tb___024root___dump_triggers__act(Vpwm_generator_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vpwm_generator_tb___024root___eval(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___eval\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vpwm_generator_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("pwm_generator_tb.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vpwm_generator_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("pwm_generator_tb.v", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vpwm_generator_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vpwm_generator_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpwm_generator_tb___024root___eval_debug_assertions(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___eval_debug_assertions\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
