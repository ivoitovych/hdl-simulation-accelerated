// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_alu_tb.h for the primary calling header

#include "Vsimple_alu_tb__pch.h"
#include "Vsimple_alu_tb___024root.h"

VlCoroutine Vsimple_alu_tb___024root___eval_initial__TOP__Vtiming__0(Vsimple_alu_tb___024root* vlSelf);
VlCoroutine Vsimple_alu_tb___024root___eval_initial__TOP__Vtiming__1(Vsimple_alu_tb___024root* vlSelf);

void Vsimple_alu_tb___024root___eval_initial(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___eval_initial\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vsimple_alu_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsimple_alu_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vsimple_alu_tb___024root___eval_initial__TOP__Vtiming__0(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.simple_alu_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "simple_alu_tb.v", 
                                             66);
        vlSelfRef.simple_alu_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.simple_alu_tb__DOT__clk)));
    }
}

void Vsimple_alu_tb___024root___act_sequent__TOP__0(Vsimple_alu_tb___024root* vlSelf);

void Vsimple_alu_tb___024root___eval_act(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___eval_act\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vsimple_alu_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vsimple_alu_tb___024root___act_sequent__TOP__0(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___act_sequent__TOP__0\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.simple_alu_tb__DOT__dut__DOT__add_result 
        = (0x1ffU & ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                     + (IData)(vlSelfRef.simple_alu_tb__DOT__b)));
    vlSelfRef.simple_alu_tb__DOT__dut__DOT__sub_result 
        = (0x1ffU & ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                     - (IData)(vlSelfRef.simple_alu_tb__DOT__b)));
    vlSelfRef.simple_alu_tb__DOT__dut__DOT__and_result 
        = ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
           & (IData)(vlSelfRef.simple_alu_tb__DOT__b));
    vlSelfRef.simple_alu_tb__DOT__dut__DOT__or_result 
        = ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
           | (IData)(vlSelfRef.simple_alu_tb__DOT__b));
    vlSelfRef.simple_alu_tb__DOT__dut__DOT__xor_result 
        = ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
           ^ (IData)(vlSelfRef.simple_alu_tb__DOT__b));
    vlSelfRef.simple_alu_tb__DOT__dut__DOT__mul_result 
        = (0xffU & ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                    * (IData)(vlSelfRef.simple_alu_tb__DOT__b)));
    vlSelfRef.simple_alu_tb__DOT__dut__DOT__execute_edge 
        = ((~ (IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__execute_prev)) 
           & (IData)(vlSelfRef.simple_alu_tb__DOT__execute));
}

void Vsimple_alu_tb___024root___nba_sequent__TOP__0(Vsimple_alu_tb___024root* vlSelf);
void Vsimple_alu_tb___024root___nba_sequent__TOP__1(Vsimple_alu_tb___024root* vlSelf);
void Vsimple_alu_tb___024root___nba_comb__TOP__0(Vsimple_alu_tb___024root* vlSelf);

void Vsimple_alu_tb___024root___eval_nba(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___eval_nba\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsimple_alu_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsimple_alu_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsimple_alu_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsimple_alu_tb___024root___nba_sequent__TOP__0(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___nba_sequent__TOP__0\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.simple_alu_tb__DOT__rst_n) {
        if (vlSelfRef.simple_alu_tb__DOT__done) {
            vlSelfRef.simple_alu_tb__DOT__done = 0U;
        }
        if (vlSelfRef.simple_alu_tb__DOT__dut__DOT__execute_edge) {
            vlSelfRef.simple_alu_tb__DOT__done = 1U;
            if ((8U & (IData)(vlSelfRef.simple_alu_tb__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.simple_alu_tb__DOT__opcode))) {
                    vlSelfRef.simple_alu_tb__DOT__result 
                        = (0xffU & 0U);
                    vlSelfRef.simple_alu_tb__DOT__flags = 0U;
                } else if ((2U & (IData)(vlSelfRef.simple_alu_tb__DOT__opcode))) {
                    vlSelfRef.simple_alu_tb__DOT__result 
                        = (0xffU & 0U);
                    vlSelfRef.simple_alu_tb__DOT__flags = 0U;
                } else if ((1U & (IData)(vlSelfRef.simple_alu_tb__DOT__opcode))) {
                    vlSelfRef.simple_alu_tb__DOT__result 
                        = (0xffU & (IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__mul_result));
                    vlSelfRef.simple_alu_tb__DOT__flags 
                        = ((0xcU & (IData)(vlSelfRef.simple_alu_tb__DOT__flags)) 
                           | (0U != (0xffU & (((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                                               * (IData)(vlSelfRef.simple_alu_tb__DOT__b)) 
                                              >> 8U))));
                    vlSelfRef.simple_alu_tb__DOT__flags 
                        = ((3U & (IData)(vlSelfRef.simple_alu_tb__DOT__flags)) 
                           | (((0U == (IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__mul_result)) 
                               << 3U) | (4U & ((IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__mul_result) 
                                               >> 5U))));
                } else {
                    vlSelfRef.simple_alu_tb__DOT__result 
                        = (0xffU & (IData)(vlSelfRef.simple_alu_tb__DOT__result));
                    vlSelfRef.simple_alu_tb__DOT__flags 
                        = ((0xdU & (IData)(vlSelfRef.simple_alu_tb__DOT__flags)) 
                           | (2U & ((IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__sub_result) 
                                    >> 7U)));
                    vlSelfRef.simple_alu_tb__DOT__flags 
                        = ((0xeU & (IData)(vlSelfRef.simple_alu_tb__DOT__flags)) 
                           | (((1U & ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                                      >> 7U)) != (1U 
                                                  & ((IData)(vlSelfRef.simple_alu_tb__DOT__b) 
                                                     >> 7U))) 
                              & ((1U & ((IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__sub_result) 
                                        >> 7U)) != 
                                 (1U & ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                                        >> 7U)))));
                    vlSelfRef.simple_alu_tb__DOT__flags 
                        = ((3U & (IData)(vlSelfRef.simple_alu_tb__DOT__flags)) 
                           | ((((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                                == (IData)(vlSelfRef.simple_alu_tb__DOT__b)) 
                               << 3U) | (4U & ((IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__sub_result) 
                                               >> 5U))));
                }
            } else if ((4U & (IData)(vlSelfRef.simple_alu_tb__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.simple_alu_tb__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.simple_alu_tb__DOT__opcode))) {
                        vlSelfRef.simple_alu_tb__DOT__result 
                            = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.simple_alu_tb__DOT__a), 1U));
                        vlSelfRef.simple_alu_tb__DOT__flags 
                            = ((((0U == (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.simple_alu_tb__DOT__a), 1U))) 
                                 << 3U) | (4U & (VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.simple_alu_tb__DOT__a), 1U) 
                                                 >> 5U))) 
                               | (2U & ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                                        << 1U)));
                    } else {
                        vlSelfRef.simple_alu_tb__DOT__result 
                            = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.simple_alu_tb__DOT__a), 1U));
                        vlSelfRef.simple_alu_tb__DOT__flags 
                            = ((((0U == (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.simple_alu_tb__DOT__a), 1U))) 
                                 << 3U) | (4U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.simple_alu_tb__DOT__a), 1U) 
                                                 >> 5U))) 
                               | (2U & ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                                        >> 6U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.simple_alu_tb__DOT__opcode))) {
                    vlSelfRef.simple_alu_tb__DOT__result 
                        = (0xffU & (~ (IData)(vlSelfRef.simple_alu_tb__DOT__a)));
                    vlSelfRef.simple_alu_tb__DOT__flags 
                        = (((0U == (0xffU & (~ (IData)(vlSelfRef.simple_alu_tb__DOT__a)))) 
                            << 3U) | (4U & ((~ ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                                                >> 7U)) 
                                            << 2U)));
                } else {
                    vlSelfRef.simple_alu_tb__DOT__result 
                        = (0xffU & (IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__xor_result));
                    vlSelfRef.simple_alu_tb__DOT__flags 
                        = (((0U == (IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__xor_result)) 
                            << 3U) | (4U & ((IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__xor_result) 
                                            >> 5U)));
                }
            } else if ((2U & (IData)(vlSelfRef.simple_alu_tb__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.simple_alu_tb__DOT__opcode))) {
                    vlSelfRef.simple_alu_tb__DOT__result 
                        = (0xffU & (IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__or_result));
                    vlSelfRef.simple_alu_tb__DOT__flags 
                        = (((0U == (IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__or_result)) 
                            << 3U) | (4U & ((IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__or_result) 
                                            >> 5U)));
                } else {
                    vlSelfRef.simple_alu_tb__DOT__result 
                        = (0xffU & (IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__and_result));
                    vlSelfRef.simple_alu_tb__DOT__flags 
                        = (((0U == (IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__and_result)) 
                            << 3U) | (4U & ((IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__and_result) 
                                            >> 5U)));
                }
            } else if ((1U & (IData)(vlSelfRef.simple_alu_tb__DOT__opcode))) {
                vlSelfRef.simple_alu_tb__DOT__result 
                    = (0xffU & (IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__sub_result));
                vlSelfRef.simple_alu_tb__DOT__flags 
                    = ((0xdU & (IData)(vlSelfRef.simple_alu_tb__DOT__flags)) 
                       | (2U & ((IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__sub_result) 
                                >> 7U)));
                vlSelfRef.simple_alu_tb__DOT__flags 
                    = ((0xeU & (IData)(vlSelfRef.simple_alu_tb__DOT__flags)) 
                       | (((1U & ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                                  >> 7U)) != (1U & 
                                              ((IData)(vlSelfRef.simple_alu_tb__DOT__b) 
                                               >> 7U))) 
                          & ((1U & ((IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__sub_result) 
                                    >> 7U)) != (1U 
                                                & ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                                                   >> 7U)))));
                vlSelfRef.simple_alu_tb__DOT__flags 
                    = ((3U & (IData)(vlSelfRef.simple_alu_tb__DOT__flags)) 
                       | (((0U == (0xffU & (IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__sub_result))) 
                           << 3U) | (4U & ((IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__sub_result) 
                                           >> 5U))));
            } else {
                vlSelfRef.simple_alu_tb__DOT__result 
                    = (0xffU & (IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__add_result));
                vlSelfRef.simple_alu_tb__DOT__flags 
                    = ((0xdU & (IData)(vlSelfRef.simple_alu_tb__DOT__flags)) 
                       | (2U & ((IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__add_result) 
                                >> 7U)));
                vlSelfRef.simple_alu_tb__DOT__flags 
                    = ((0xeU & (IData)(vlSelfRef.simple_alu_tb__DOT__flags)) 
                       | (((1U & ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                                  >> 7U)) == (1U & 
                                              ((IData)(vlSelfRef.simple_alu_tb__DOT__b) 
                                               >> 7U))) 
                          & ((1U & ((IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__add_result) 
                                    >> 7U)) != (1U 
                                                & ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                                                   >> 7U)))));
                vlSelfRef.simple_alu_tb__DOT__flags 
                    = ((3U & (IData)(vlSelfRef.simple_alu_tb__DOT__flags)) 
                       | (((0U == (0xffU & (IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__add_result))) 
                           << 3U) | (4U & ((IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__add_result) 
                                           >> 5U))));
            }
        }
        vlSelfRef.simple_alu_tb__DOT__dut__DOT__execute_prev 
            = vlSelfRef.simple_alu_tb__DOT__execute;
    } else {
        vlSelfRef.simple_alu_tb__DOT__done = 0U;
        vlSelfRef.simple_alu_tb__DOT__result = 0U;
        vlSelfRef.simple_alu_tb__DOT__flags = 0U;
        vlSelfRef.simple_alu_tb__DOT__dut__DOT__execute_prev = 0U;
    }
}

VL_INLINE_OPT void Vsimple_alu_tb___024root___nba_sequent__TOP__1(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___nba_sequent__TOP__1\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.simple_alu_tb__DOT__dut__DOT__mul_result 
        = (0xffU & ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                    * (IData)(vlSelfRef.simple_alu_tb__DOT__b)));
    vlSelfRef.simple_alu_tb__DOT__dut__DOT__sub_result 
        = (0x1ffU & ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                     - (IData)(vlSelfRef.simple_alu_tb__DOT__b)));
    vlSelfRef.simple_alu_tb__DOT__dut__DOT__xor_result 
        = ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
           ^ (IData)(vlSelfRef.simple_alu_tb__DOT__b));
    vlSelfRef.simple_alu_tb__DOT__dut__DOT__or_result 
        = ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
           | (IData)(vlSelfRef.simple_alu_tb__DOT__b));
    vlSelfRef.simple_alu_tb__DOT__dut__DOT__and_result 
        = ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
           & (IData)(vlSelfRef.simple_alu_tb__DOT__b));
    vlSelfRef.simple_alu_tb__DOT__dut__DOT__add_result 
        = (0x1ffU & ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                     + (IData)(vlSelfRef.simple_alu_tb__DOT__b)));
}

VL_INLINE_OPT void Vsimple_alu_tb___024root___nba_comb__TOP__0(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___nba_comb__TOP__0\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.simple_alu_tb__DOT__dut__DOT__execute_edge 
        = ((~ (IData)(vlSelfRef.simple_alu_tb__DOT__dut__DOT__execute_prev)) 
           & (IData)(vlSelfRef.simple_alu_tb__DOT__execute));
}

void Vsimple_alu_tb___024root___timing_resume(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___timing_resume\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h0c10e39c__0.resume(
                                                   "@(posedge simple_alu_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsimple_alu_tb___024root___timing_commit(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___timing_commit\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h0c10e39c__0.commit(
                                                   "@(posedge simple_alu_tb.clk)");
    }
}

void Vsimple_alu_tb___024root___eval_triggers__act(Vsimple_alu_tb___024root* vlSelf);

bool Vsimple_alu_tb___024root___eval_phase__act(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___eval_phase__act\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsimple_alu_tb___024root___eval_triggers__act(vlSelf);
    Vsimple_alu_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsimple_alu_tb___024root___timing_resume(vlSelf);
        Vsimple_alu_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsimple_alu_tb___024root___eval_phase__nba(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___eval_phase__nba\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsimple_alu_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_alu_tb___024root___dump_triggers__nba(Vsimple_alu_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_alu_tb___024root___dump_triggers__act(Vsimple_alu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimple_alu_tb___024root___eval(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___eval\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vsimple_alu_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("simple_alu_tb.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsimple_alu_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("simple_alu_tb.v", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsimple_alu_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsimple_alu_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsimple_alu_tb___024root___eval_debug_assertions(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___eval_debug_assertions\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
