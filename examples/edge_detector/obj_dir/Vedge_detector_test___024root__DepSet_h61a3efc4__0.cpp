// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vedge_detector_test.h for the primary calling header

#include "Vedge_detector_test__pch.h"
#include "Vedge_detector_test__Syms.h"
#include "Vedge_detector_test___024root.h"

VL_INLINE_OPT VlCoroutine Vedge_detector_test___024root___eval_initial__TOP__Vtiming__0(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "edge_detector.v", 
                                         57);
    vlSelfRef.edge_detector_test__DOT__rst = 0U;
    VL_WRITEF_NX("Time(ns)  Input  Rising  Falling  Any\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    vlSelfRef.edge_detector_test__DOT__signal_in = 1U;
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    vlSelfRef.edge_detector_test__DOT__signal_in = 0U;
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 8U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 9U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    vlSelfRef.edge_detector_test__DOT__signal_in = 1U;
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    vlSelfRef.edge_detector_test__DOT__signal_in = 0U;
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    vlSelfRef.edge_detector_test__DOT__signal_in = 1U;
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0x10U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0x12U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0x13U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0x14U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    vlSelfRef.edge_detector_test__DOT__signal_in = 0U;
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0x15U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0x16U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0x17U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0x18U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0x19U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    vlSelfRef.edge_detector_test__DOT__signal_in = 1U;
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0x1aU;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0x1bU;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0x1cU;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0x1dU;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         63);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "edge_detector.v", 
                                         64);
    vlSelfRef.edge_detector_test__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_detector_test__DOT__clk)));
    VL_WRITEF_NX("%8t     %b      %b       %b       %b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(vlSelfRef.edge_detector_test__DOT__signal_in),
                 1,vlSelfRef.edge_detector_test__DOT__rising_edge,
                 1,(IData)(vlSelfRef.edge_detector_test__DOT__falling_edge),
                 1,vlSelfRef.edge_detector_test__DOT__any_edge);
    vlSelfRef.edge_detector_test__DOT__i = 0x1eU;
    VL_WRITEF_NX("\nSimulation complete!\n",0);
    VL_FINISH_MT("edge_detector.v", 82, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vedge_detector_test___024root___dump_triggers__act(Vedge_detector_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vedge_detector_test___024root___eval_triggers__act(Vedge_detector_test___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root___eval_triggers__act\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.edge_detector_test__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__edge_detector_test__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__edge_detector_test__DOT__clk__0 
        = vlSelfRef.edge_detector_test__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vedge_detector_test___024root___dump_triggers__act(vlSelf);
    }
#endif
}
