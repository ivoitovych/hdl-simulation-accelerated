// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vled_blinker_test.h for the primary calling header

#include "Vled_blinker_test__pch.h"
#include "Vled_blinker_test__Syms.h"
#include "Vled_blinker_test___024root.h"

VL_INLINE_OPT VlCoroutine Vled_blinker_test___024root___eval_initial__TOP__Vtiming__0(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    VL_PRINTF_MT("-Info: led_blinker.v:48: $dumpvar ignored, as Verilated without --trace\n");
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "led_blinker.v", 
                                         51);
    vlSelfRef.led_blinker_test__DOT__rst = 0U;
    VL_WRITEF_NX("Time(ns)  LED\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         55);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "led_blinker.v", 
                                         56);
    vlSelfRef.led_blinker_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.led_blinker_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.led_blinker_test__DOT__led));
    VL_FINISH_MT("led_blinker.v", 59, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_blinker_test___024root___dump_triggers__act(Vled_blinker_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vled_blinker_test___024root___eval_triggers__act(Vled_blinker_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blinker_test___024root___eval_triggers__act\n"); );
    Vled_blinker_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.led_blinker_test__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__led_blinker_test__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__led_blinker_test__DOT__clk__0 
        = vlSelfRef.led_blinker_test__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vled_blinker_test___024root___dump_triggers__act(vlSelf);
    }
#endif
}
