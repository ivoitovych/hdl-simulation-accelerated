// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_8bit_test.h for the primary calling header

#include "Vcounter_8bit_test__pch.h"
#include "Vcounter_8bit_test__Syms.h"
#include "Vcounter_8bit_test___024root.h"

VL_INLINE_OPT VlCoroutine Vcounter_8bit_test___024root___eval_initial__TOP__Vtiming__0(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "counter_8bit.v", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__rst = 0U;
    VL_WRITEF_NX("Time(ns)  Count  Overflow  Underflow  Enable  Load\n",0);
    vlSelfRef.counter_8bit_test__DOT__enable = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 0xaU;
    vlSelfRef.counter_8bit_test__DOT__enable = 0U;
    vlSelfRef.counter_8bit_test__DOT__load = 1U;
    vlSelfRef.counter_8bit_test__DOT__load_value = 0xfdU;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__load = 0U;
    vlSelfRef.counter_8bit_test__DOT__enable = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 8U;
    vlSelfRef.counter_8bit_test__DOT__enable = 0U;
    vlSelfRef.counter_8bit_test__DOT__load = 1U;
    vlSelfRef.counter_8bit_test__DOT__load_value = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         97);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__load = 0U;
    vlSelfRef.counter_8bit_test__DOT__enable = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 8U;
    vlSelfRef.counter_8bit_test__DOT__enable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "counter_8bit.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.counter_8bit_test__DOT__clk = (1U & (~ (IData)(vlSelfRef.counter_8bit_test__DOT__clk)));
    VL_WRITEF_NX("%8t   %3#       %b         %b        %b     %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.counter_8bit_test__DOT__count),
                 1,vlSelfRef.counter_8bit_test__DOT__overflow,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__underflow),
                 1,vlSelfRef.counter_8bit_test__DOT__enable,
                 1,(IData)(vlSelfRef.counter_8bit_test__DOT__load));
    vlSelfRef.counter_8bit_test__DOT__i = 3U;
    VL_WRITEF_NX("\nSimulation complete!\nDemonstrated: Basic counting, overflow wrap-around, load operation, enable control\n",0);
    VL_FINISH_MT("counter_8bit.v", 121, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_8bit_test___024root___dump_triggers__act(Vcounter_8bit_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounter_8bit_test___024root___eval_triggers__act(Vcounter_8bit_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root___eval_triggers__act\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.counter_8bit_test__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__counter_8bit_test__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__counter_8bit_test__DOT__clk__0 
        = vlSelfRef.counter_8bit_test__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcounter_8bit_test___024root___dump_triggers__act(vlSelf);
    }
#endif
}
