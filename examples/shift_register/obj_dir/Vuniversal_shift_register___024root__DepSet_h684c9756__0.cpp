// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuniversal_shift_register.h for the primary calling header

#include "Vuniversal_shift_register__pch.h"
#include "Vuniversal_shift_register___024root.h"

void Vuniversal_shift_register___024root___eval_act(Vuniversal_shift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root___eval_act\n"); );
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vuniversal_shift_register___024root___nba_sequent__TOP__0(Vuniversal_shift_register___024root* vlSelf);

void Vuniversal_shift_register___024root___eval_nba(Vuniversal_shift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root___eval_nba\n"); );
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vuniversal_shift_register___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vuniversal_shift_register___024root___nba_sequent__TOP__0(Vuniversal_shift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root___nba_sequent__TOP__0\n"); );
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.enable) {
            vlSelfRef.q = ((2U & (IData)(vlSelfRef.mode))
                            ? ((1U & (IData)(vlSelfRef.mode))
                                ? (IData)(vlSelfRef.parallel_in)
                                : ((0xfeU & ((IData)(vlSelfRef.q) 
                                             << 1U)) 
                                   | (IData)(vlSelfRef.serial_in_left)))
                            : ((1U & (IData)(vlSelfRef.mode))
                                ? (((IData)(vlSelfRef.serial_in_right) 
                                    << 7U) | (0x7fU 
                                              & ((IData)(vlSelfRef.q) 
                                                 >> 1U)))
                                : (IData)(vlSelfRef.q)));
        }
    } else {
        vlSelfRef.q = 0U;
    }
}

void Vuniversal_shift_register___024root___eval_triggers__act(Vuniversal_shift_register___024root* vlSelf);

bool Vuniversal_shift_register___024root___eval_phase__act(Vuniversal_shift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root___eval_phase__act\n"); );
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vuniversal_shift_register___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vuniversal_shift_register___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vuniversal_shift_register___024root___eval_phase__nba(Vuniversal_shift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root___eval_phase__nba\n"); );
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vuniversal_shift_register___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuniversal_shift_register___024root___dump_triggers__nba(Vuniversal_shift_register___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vuniversal_shift_register___024root___dump_triggers__act(Vuniversal_shift_register___024root* vlSelf);
#endif  // VL_DEBUG

void Vuniversal_shift_register___024root___eval(Vuniversal_shift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root___eval\n"); );
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vuniversal_shift_register___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("universal_shift_register.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vuniversal_shift_register___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("universal_shift_register.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vuniversal_shift_register___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vuniversal_shift_register___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vuniversal_shift_register___024root___eval_debug_assertions(Vuniversal_shift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root___eval_debug_assertions\n"); );
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.enable & 0xfeU)))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY(((vlSelfRef.mode & 0xfcU)))) {
        Verilated::overWidthError("mode");}
    if (VL_UNLIKELY(((vlSelfRef.serial_in_right & 0xfeU)))) {
        Verilated::overWidthError("serial_in_right");}
    if (VL_UNLIKELY(((vlSelfRef.serial_in_left & 0xfeU)))) {
        Verilated::overWidthError("serial_in_left");}
}
#endif  // VL_DEBUG
