// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vone_shot_pulse_test.h for the primary calling header

#include "Vone_shot_pulse_test__pch.h"
#include "Vone_shot_pulse_test__Syms.h"
#include "Vone_shot_pulse_test___024root.h"

VL_INLINE_OPT VlCoroutine Vone_shot_pulse_test___024root___eval_initial__TOP__Vtiming__0(Vone_shot_pulse_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vone_shot_pulse_test___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vone_shot_pulse_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    VL_PRINTF_MT("-Info: one_shot_pulse.v:87: $dumpvar ignored, as Verilated without --trace\n");
    VL_WRITEF_NX("Time(ns)  Enable  Pulse\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         92);
    vlSelfRef.one_shot_pulse_test__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         95);
    vlSelfRef.one_shot_pulse_test__DOT__enable = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         98);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         99);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         98);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         99);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         98);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         99);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         98);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         99);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         98);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         99);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         98);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         99);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         98);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         99);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         98);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         99);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         98);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         99);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         98);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         99);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    vlSelfRef.one_shot_pulse_test__DOT__enable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         106);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         107);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         106);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         107);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    vlSelfRef.one_shot_pulse_test__DOT__enable = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         113);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         114);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         113);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         114);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         113);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         114);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         113);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         114);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         113);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         114);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         113);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         114);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         113);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         114);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         113);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         114);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         113);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         114);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         113);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         114);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         120);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         121);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         120);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         121);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         120);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         121);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         120);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         121);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         120);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "one_shot_pulse.v", 
                                         121);
    vlSelfRef.one_shot_pulse_test__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.one_shot_pulse_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b\n\nSimulation complete!\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.one_shot_pulse_test__DOT__enable),
                 1,vlSelfRef.one_shot_pulse_test__DOT__pulse);
    VL_FINISH_MT("one_shot_pulse.v", 126, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vone_shot_pulse_test___024root___dump_triggers__act(Vone_shot_pulse_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vone_shot_pulse_test___024root___eval_triggers__act(Vone_shot_pulse_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vone_shot_pulse_test___024root___eval_triggers__act\n"); );
    Vone_shot_pulse_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.one_shot_pulse_test__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__one_shot_pulse_test__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__one_shot_pulse_test__DOT__clk__0 
        = vlSelfRef.one_shot_pulse_test__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vone_shot_pulse_test___024root___dump_triggers__act(vlSelf);
    }
#endif
}
