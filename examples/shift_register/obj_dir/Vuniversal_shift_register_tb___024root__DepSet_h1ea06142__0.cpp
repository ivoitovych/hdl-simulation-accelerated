// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuniversal_shift_register_tb.h for the primary calling header

#include "Vuniversal_shift_register_tb__pch.h"
#include "Vuniversal_shift_register_tb___024root.h"

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root___eval_initial__TOP(Vuniversal_shift_register_tb___024root* vlSelf);
VlCoroutine Vuniversal_shift_register_tb___024root___eval_initial__TOP__Vtiming__0(Vuniversal_shift_register_tb___024root* vlSelf);
VlCoroutine Vuniversal_shift_register_tb___024root___eval_initial__TOP__Vtiming__1(Vuniversal_shift_register_tb___024root* vlSelf);

void Vuniversal_shift_register_tb___024root___eval_initial(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___eval_initial\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuniversal_shift_register_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vuniversal_shift_register_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vuniversal_shift_register_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vuniversal_shift_register_tb___024root___eval_initial__TOP__Vtiming__0(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.universal_shift_register_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "universal_shift_register_tb.v", 
                                             47);
        vlSelfRef.universal_shift_register_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.universal_shift_register_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vuniversal_shift_register_tb___024root___eval_initial__TOP__Vtiming__1(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__1__expected;
    __Vtask_universal_shift_register_tb__DOT__check_output__1__expected = 0;
    IData/*31:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__1__test_number;
    __Vtask_universal_shift_register_tb__DOT__check_output__1__test_number = 0;
    CData/*1:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_mode;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_mode = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_enable;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_enable = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_serial_right;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_serial_right = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_serial_left;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_serial_left = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_parallel;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_parallel = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__3__expected;
    __Vtask_universal_shift_register_tb__DOT__check_output__3__expected = 0;
    IData/*31:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__3__test_number;
    __Vtask_universal_shift_register_tb__DOT__check_output__3__test_number = 0;
    CData/*1:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_mode;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_mode = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_enable;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_enable = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_serial_right;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_serial_right = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_serial_left;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_serial_left = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_parallel;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_parallel = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__5__expected;
    __Vtask_universal_shift_register_tb__DOT__check_output__5__expected = 0;
    IData/*31:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__5__test_number;
    __Vtask_universal_shift_register_tb__DOT__check_output__5__test_number = 0;
    CData/*1:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_mode;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_mode = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_enable;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_enable = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_serial_right;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_serial_right = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_serial_left;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_serial_left = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_parallel;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_parallel = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__7__expected;
    __Vtask_universal_shift_register_tb__DOT__check_output__7__expected = 0;
    IData/*31:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__7__test_number;
    __Vtask_universal_shift_register_tb__DOT__check_output__7__test_number = 0;
    CData/*1:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_mode;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_mode = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_enable;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_enable = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_serial_right;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_serial_right = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_serial_left;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_serial_left = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_parallel;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_parallel = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__9__expected;
    __Vtask_universal_shift_register_tb__DOT__check_output__9__expected = 0;
    IData/*31:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__9__test_number;
    __Vtask_universal_shift_register_tb__DOT__check_output__9__test_number = 0;
    CData/*1:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_mode;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_mode = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_enable;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_enable = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_serial_right;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_serial_right = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_serial_left;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_serial_left = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_parallel;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_parallel = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__11__expected;
    __Vtask_universal_shift_register_tb__DOT__check_output__11__expected = 0;
    IData/*31:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__11__test_number;
    __Vtask_universal_shift_register_tb__DOT__check_output__11__test_number = 0;
    CData/*1:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_mode;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_mode = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_enable;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_enable = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_serial_right;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_serial_right = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_serial_left;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_serial_left = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_parallel;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_parallel = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__13__expected;
    __Vtask_universal_shift_register_tb__DOT__check_output__13__expected = 0;
    IData/*31:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__13__test_number;
    __Vtask_universal_shift_register_tb__DOT__check_output__13__test_number = 0;
    CData/*1:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_mode;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_mode = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_enable;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_enable = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_serial_right;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_serial_right = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_serial_left;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_serial_left = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_parallel;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_parallel = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__15__expected;
    __Vtask_universal_shift_register_tb__DOT__check_output__15__expected = 0;
    IData/*31:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__15__test_number;
    __Vtask_universal_shift_register_tb__DOT__check_output__15__test_number = 0;
    CData/*1:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_mode;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_mode = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_enable;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_enable = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_serial_right;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_serial_right = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_serial_left;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_serial_left = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_parallel;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_parallel = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__17__expected;
    __Vtask_universal_shift_register_tb__DOT__check_output__17__expected = 0;
    IData/*31:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__17__test_number;
    __Vtask_universal_shift_register_tb__DOT__check_output__17__test_number = 0;
    CData/*7:0*/ __Vfunc_universal_shift_register_tb__DOT__create_alternating_pattern__18__Vfuncout;
    __Vfunc_universal_shift_register_tb__DOT__create_alternating_pattern__18__Vfuncout = 0;
    CData/*1:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_mode;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_mode = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_enable;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_enable = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_serial_right;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_serial_right = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_serial_left;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_serial_left = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_parallel;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_parallel = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__20__expected;
    __Vtask_universal_shift_register_tb__DOT__check_output__20__expected = 0;
    IData/*31:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__20__test_number;
    __Vtask_universal_shift_register_tb__DOT__check_output__20__test_number = 0;
    CData/*1:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_mode;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_mode = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_enable;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_enable = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_right;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_right = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_left;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_left = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_parallel;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_parallel = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__22__expected;
    __Vtask_universal_shift_register_tb__DOT__check_output__22__expected = 0;
    IData/*31:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__22__test_number;
    __Vtask_universal_shift_register_tb__DOT__check_output__22__test_number = 0;
    CData/*1:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_mode;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_mode = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_enable;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_enable = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_serial_right;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_serial_right = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_serial_left;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_serial_left = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_parallel;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_parallel = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__24__expected;
    __Vtask_universal_shift_register_tb__DOT__check_output__24__expected = 0;
    IData/*31:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__24__test_number;
    __Vtask_universal_shift_register_tb__DOT__check_output__24__test_number = 0;
    CData/*1:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_mode;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_mode = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_enable;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_enable = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_right;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_right = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_left;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_left = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_parallel;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_parallel = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__26__expected;
    __Vtask_universal_shift_register_tb__DOT__check_output__26__expected = 0;
    IData/*31:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__26__test_number;
    __Vtask_universal_shift_register_tb__DOT__check_output__26__test_number = 0;
    IData/*31:0*/ __Vfunc_universal_shift_register_tb__DOT__pseudo_random__27__Vfuncout;
    __Vfunc_universal_shift_register_tb__DOT__pseudo_random__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_universal_shift_register_tb__DOT__pseudo_random__28__Vfuncout;
    __Vfunc_universal_shift_register_tb__DOT__pseudo_random__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_universal_shift_register_tb__DOT__pseudo_random__29__Vfuncout;
    __Vfunc_universal_shift_register_tb__DOT__pseudo_random__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_universal_shift_register_tb__DOT__pseudo_random__30__Vfuncout;
    __Vfunc_universal_shift_register_tb__DOT__pseudo_random__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout;
    __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout = 0;
    CData/*1:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_mode;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_mode = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_enable;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_enable = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_serial_right;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_serial_right = 0;
    CData/*0:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_serial_left;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_serial_left = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_parallel;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_parallel = 0;
    CData/*7:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__33__expected;
    __Vtask_universal_shift_register_tb__DOT__check_output__33__expected = 0;
    IData/*31:0*/ __Vtask_universal_shift_register_tb__DOT__check_output__33__test_number;
    __Vtask_universal_shift_register_tb__DOT__check_output__33__test_number = 0;
    // Body
    VL_WRITEF_NX("Starting testbench for 8-bit Universal Shift Register\n",0);
    vlSelfRef.universal_shift_register_tb__DOT__test_case = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__error_count = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__rst_n = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__enable = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__mode = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 0U;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__expected_q = 0U;
    __Vtask_universal_shift_register_tb__DOT__check_output__1__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__1__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__1__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__1__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__1__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__1__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 0xffU;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_parallel 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_serial_left = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_serial_right = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_enable = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_mode = 3U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__2__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__expected_q = 0U;
    __Vtask_universal_shift_register_tb__DOT__check_output__3__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__3__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__3__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__3__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__3__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__3__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 0xffU;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_parallel 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_serial_left = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_serial_right = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_mode = 3U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__4__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__expected_q = 0xffU;
    __Vtask_universal_shift_register_tb__DOT__check_output__5__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__5__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__5__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__5__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__5__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__5__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_parallel = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_serial_left = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_serial_right = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_mode = 0U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__6__in_parallel;
    __Vtask_universal_shift_register_tb__DOT__check_output__7__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__7__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__7__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__7__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__7__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__7__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_parallel = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_serial_left = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_serial_right = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_mode = 1U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__8__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__expected_q = 0x7fU;
    __Vtask_universal_shift_register_tb__DOT__check_output__9__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__9__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__9__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__9__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__9__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__9__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_parallel = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_serial_left = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_serial_right = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_mode = 1U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__10__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__expected_q 
        = (0x80U | (0x7fU & ((IData)(vlSelfRef.universal_shift_register_tb__DOT__expected_q) 
                             >> 1U)));
    __Vtask_universal_shift_register_tb__DOT__check_output__11__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__11__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__11__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__11__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__11__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__11__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_parallel = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_serial_left = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_serial_right = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_mode = 2U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__12__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__expected_q 
        = (0xfeU & ((IData)(vlSelfRef.universal_shift_register_tb__DOT__expected_q) 
                    << 1U));
    __Vtask_universal_shift_register_tb__DOT__check_output__13__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__13__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__13__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__13__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__13__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__13__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_parallel = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_serial_left = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_serial_right = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_mode = 2U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__14__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__expected_q 
        = (1U | (0xfeU & ((IData)(vlSelfRef.universal_shift_register_tb__DOT__expected_q) 
                          << 1U)));
    __Vtask_universal_shift_register_tb__DOT__check_output__15__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__15__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__15__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__15__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__15__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__15__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_parallel 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_serial_left = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_serial_right = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_mode = 3U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__16__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__expected_q = 0U;
    __Vtask_universal_shift_register_tb__DOT__check_output__17__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__17__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__17__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__17__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__17__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__17__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__pattern = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__pattern 
        = (2U | (0xfcU & (IData)(vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__pattern)));
    vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__j = 2U;
    vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__pattern 
        = (8U | (0xf3U & (IData)(vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__pattern)));
    vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__j = 4U;
    vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__pattern 
        = (0x20U | (0xcfU & (IData)(vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__pattern)));
    vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__j = 6U;
    vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__pattern 
        = (0x80U | (0x3fU & (IData)(vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__pattern)));
    vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__j = 8U;
    __Vfunc_universal_shift_register_tb__DOT__create_alternating_pattern__18__Vfuncout 
        = vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__pattern;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vfunc_universal_shift_register_tb__DOT__create_alternating_pattern__18__Vfuncout;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_parallel 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_serial_left = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_serial_right = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_mode = 3U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__19__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__expected_q 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__check_output__20__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__20__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__20__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__20__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__20__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__20__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    vlSelfRef.universal_shift_register_tb__DOT__bit_val = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 0xffU;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_parallel 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_left 
        = (1U & (~ (IData)(vlSelfRef.universal_shift_register_tb__DOT__bit_val)));
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_right 
        = vlSelfRef.universal_shift_register_tb__DOT__bit_val;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_mode = 0U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_parallel;
    __Vtask_universal_shift_register_tb__DOT__check_output__22__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__22__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__22__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__22__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__22__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__22__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    vlSelfRef.universal_shift_register_tb__DOT__i = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__bit_val = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 0xffU;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_parallel 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_left 
        = (1U & (~ (IData)(vlSelfRef.universal_shift_register_tb__DOT__bit_val)));
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_right 
        = vlSelfRef.universal_shift_register_tb__DOT__bit_val;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_mode = 1U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__expected_q 
        = (((IData)(vlSelfRef.universal_shift_register_tb__DOT__bit_val) 
            << 7U) | (0x7fU & ((IData)(vlSelfRef.universal_shift_register_tb__DOT__expected_q) 
                               >> 1U)));
    __Vtask_universal_shift_register_tb__DOT__check_output__22__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__22__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__22__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__22__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__22__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__22__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    vlSelfRef.universal_shift_register_tb__DOT__i = 2U;
    vlSelfRef.universal_shift_register_tb__DOT__bit_val = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 0xffU;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_parallel 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_left 
        = (1U & (~ (IData)(vlSelfRef.universal_shift_register_tb__DOT__bit_val)));
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_right 
        = vlSelfRef.universal_shift_register_tb__DOT__bit_val;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_mode = 2U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__expected_q 
        = ((0xfeU & ((IData)(vlSelfRef.universal_shift_register_tb__DOT__expected_q) 
                     << 1U)) | (1U & (~ (IData)(vlSelfRef.universal_shift_register_tb__DOT__bit_val))));
    __Vtask_universal_shift_register_tb__DOT__check_output__22__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__22__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__22__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__22__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__22__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__22__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    vlSelfRef.universal_shift_register_tb__DOT__i = 3U;
    vlSelfRef.universal_shift_register_tb__DOT__bit_val = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 0xffU;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_parallel 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_left 
        = (1U & (~ (IData)(vlSelfRef.universal_shift_register_tb__DOT__bit_val)));
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_right 
        = vlSelfRef.universal_shift_register_tb__DOT__bit_val;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_mode = 3U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__21__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__expected_q 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__check_output__22__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__22__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__22__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__22__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__22__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__22__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    vlSelfRef.universal_shift_register_tb__DOT__i = 4U;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_parallel 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_serial_left = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_serial_right = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_mode = 3U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__23__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__expected_q 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__check_output__24__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__24__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__24__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__24__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__24__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__24__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_parallel = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_left = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_right = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_mode = 2U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = (2U | (IData)(vlSelfRef.universal_shift_register_tb__DOT__parallel_in));
    vlSelfRef.universal_shift_register_tb__DOT__expected_q 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__check_output__26__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__26__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__26__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__26__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__26__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__26__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    vlSelfRef.universal_shift_register_tb__DOT__i = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_parallel = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_left = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_right = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_mode = 2U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = (4U | (IData)(vlSelfRef.universal_shift_register_tb__DOT__parallel_in));
    vlSelfRef.universal_shift_register_tb__DOT__expected_q 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__check_output__26__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__26__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__26__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__26__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__26__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__26__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    vlSelfRef.universal_shift_register_tb__DOT__i = 2U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_parallel = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_left = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_right = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_mode = 2U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = (8U | (IData)(vlSelfRef.universal_shift_register_tb__DOT__parallel_in));
    vlSelfRef.universal_shift_register_tb__DOT__expected_q 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__check_output__26__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__26__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__26__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__26__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__26__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__26__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    vlSelfRef.universal_shift_register_tb__DOT__i = 3U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_parallel = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_left = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_right = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_mode = 2U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = (0x10U | (IData)(vlSelfRef.universal_shift_register_tb__DOT__parallel_in));
    vlSelfRef.universal_shift_register_tb__DOT__expected_q 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__check_output__26__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__26__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__26__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__26__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__26__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__26__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    vlSelfRef.universal_shift_register_tb__DOT__i = 4U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_parallel = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_left = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_right = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_mode = 2U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = (0x20U | (IData)(vlSelfRef.universal_shift_register_tb__DOT__parallel_in));
    vlSelfRef.universal_shift_register_tb__DOT__expected_q 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__check_output__26__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__26__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__26__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__26__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__26__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__26__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    vlSelfRef.universal_shift_register_tb__DOT__i = 5U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_parallel = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_left = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_right = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_mode = 2U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = (0x40U | (IData)(vlSelfRef.universal_shift_register_tb__DOT__parallel_in));
    vlSelfRef.universal_shift_register_tb__DOT__expected_q 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__check_output__26__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__26__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__26__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__26__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__26__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__26__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    vlSelfRef.universal_shift_register_tb__DOT__i = 6U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_parallel = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_left = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_right = 0U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_enable = 1U;
    __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_mode = 2U;
    co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.universal_shift_register_tb__DOT__mode 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_mode;
    vlSelfRef.universal_shift_register_tb__DOT__enable 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_enable;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_right;
    vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_serial_left;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = __Vtask_universal_shift_register_tb__DOT__apply_inputs__25__in_parallel;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 0U;
    vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
        = (0x80U | (IData)(vlSelfRef.universal_shift_register_tb__DOT__parallel_in));
    vlSelfRef.universal_shift_register_tb__DOT__expected_q 
        = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
    __Vtask_universal_shift_register_tb__DOT__check_output__26__test_number 
        = vlSelfRef.universal_shift_register_tb__DOT__test_case;
    __Vtask_universal_shift_register_tb__DOT__check_output__26__expected 
        = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
    co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge universal_shift_register_tb.clk)", 
                                                         "universal_shift_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "universal_shift_register_tb.v", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
         != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__26__expected))) {
        VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__26__test_number,
                     8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__26__expected),
                     8,vlSelfRef.universal_shift_register_tb__DOT__q);
        vlSelfRef.universal_shift_register_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                     32,__Vtask_universal_shift_register_tb__DOT__check_output__26__test_number,
                     8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
    }
    vlSelfRef.universal_shift_register_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__test_case);
    vlSelfRef.universal_shift_register_tb__DOT__i = 7U;
    if ((0U == vlSelfRef.universal_shift_register_tb__DOT__error_count)) {
        VL_WRITEF_NX("All %0d tests PASSED\n",0,32,
                     vlSelfRef.universal_shift_register_tb__DOT__test_case);
    } else {
        VL_WRITEF_NX("%0d out of %0d tests FAILED\n",0,
                     32,vlSelfRef.universal_shift_register_tb__DOT__error_count,
                     32,vlSelfRef.universal_shift_register_tb__DOT__test_case);
    }
    VL_WRITEF_NX("Starting random testing...\n",0);
    vlSelfRef.universal_shift_register_tb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x64U, vlSelfRef.universal_shift_register_tb__DOT__i)) {
        vlSelfRef.universal_shift_register_tb__DOT__mode 
            = (3U & ([&]() {
                    vlSelfRef.universal_shift_register_tb__DOT__seed 
                        = ((IData)(0x3039U) + ((IData)(0x41c64e6dU) 
                                               * vlSelfRef.universal_shift_register_tb__DOT__seed));
                    __Vfunc_universal_shift_register_tb__DOT__pseudo_random__27__Vfuncout 
                        = (0x7fffU & VL_SHIFTR_III(32,32,32, vlSelfRef.universal_shift_register_tb__DOT__seed, 0x10U));
                }(), __Vfunc_universal_shift_register_tb__DOT__pseudo_random__27__Vfuncout));
        vlSelfRef.universal_shift_register_tb__DOT__enable 
            = (1U & ([&]() {
                    vlSelfRef.universal_shift_register_tb__DOT__seed 
                        = ((IData)(0x3039U) + ((IData)(0x41c64e6dU) 
                                               * vlSelfRef.universal_shift_register_tb__DOT__seed));
                    __Vfunc_universal_shift_register_tb__DOT__pseudo_random__28__Vfuncout 
                        = (0x7fffU & VL_SHIFTR_III(32,32,32, vlSelfRef.universal_shift_register_tb__DOT__seed, 0x10U));
                }(), __Vfunc_universal_shift_register_tb__DOT__pseudo_random__28__Vfuncout));
        vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
            = (1U & ([&]() {
                    vlSelfRef.universal_shift_register_tb__DOT__seed 
                        = ((IData)(0x3039U) + ((IData)(0x41c64e6dU) 
                                               * vlSelfRef.universal_shift_register_tb__DOT__seed));
                    __Vfunc_universal_shift_register_tb__DOT__pseudo_random__29__Vfuncout 
                        = (0x7fffU & VL_SHIFTR_III(32,32,32, vlSelfRef.universal_shift_register_tb__DOT__seed, 0x10U));
                }(), __Vfunc_universal_shift_register_tb__DOT__pseudo_random__29__Vfuncout));
        vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
            = (1U & ([&]() {
                    vlSelfRef.universal_shift_register_tb__DOT__seed 
                        = ((IData)(0x3039U) + ((IData)(0x41c64e6dU) 
                                               * vlSelfRef.universal_shift_register_tb__DOT__seed));
                    __Vfunc_universal_shift_register_tb__DOT__pseudo_random__30__Vfuncout 
                        = (0x7fffU & VL_SHIFTR_III(32,32,32, vlSelfRef.universal_shift_register_tb__DOT__seed, 0x10U));
                }(), __Vfunc_universal_shift_register_tb__DOT__pseudo_random__30__Vfuncout));
        vlSelfRef.universal_shift_register_tb__DOT__parallel_in = 0U;
        VL_ASSIGNBIT_II(0U, vlSelfRef.universal_shift_register_tb__DOT__parallel_in, 
                        (0U != (1U & ([&]() {
                            vlSelfRef.universal_shift_register_tb__DOT__seed 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * vlSelfRef.universal_shift_register_tb__DOT__seed));
                            __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout 
                                = (0x7fffU & VL_SHIFTR_III(32,32,32, vlSelfRef.universal_shift_register_tb__DOT__seed, 0x10U));
                        }(), __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout))));
        vlSelfRef.universal_shift_register_tb__DOT__unnamedblk1__DOT__j = 1U;
        VL_ASSIGNBIT_II(1U, vlSelfRef.universal_shift_register_tb__DOT__parallel_in, 
                        (0U != (1U & ([&]() {
                            vlSelfRef.universal_shift_register_tb__DOT__seed 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * vlSelfRef.universal_shift_register_tb__DOT__seed));
                            __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout 
                                = (0x7fffU & VL_SHIFTR_III(32,32,32, vlSelfRef.universal_shift_register_tb__DOT__seed, 0x10U));
                        }(), __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout))));
        vlSelfRef.universal_shift_register_tb__DOT__unnamedblk1__DOT__j = 2U;
        VL_ASSIGNBIT_II(2U, vlSelfRef.universal_shift_register_tb__DOT__parallel_in, 
                        (0U != (1U & ([&]() {
                            vlSelfRef.universal_shift_register_tb__DOT__seed 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * vlSelfRef.universal_shift_register_tb__DOT__seed));
                            __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout 
                                = (0x7fffU & VL_SHIFTR_III(32,32,32, vlSelfRef.universal_shift_register_tb__DOT__seed, 0x10U));
                        }(), __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout))));
        vlSelfRef.universal_shift_register_tb__DOT__unnamedblk1__DOT__j = 3U;
        VL_ASSIGNBIT_II(3U, vlSelfRef.universal_shift_register_tb__DOT__parallel_in, 
                        (0U != (1U & ([&]() {
                            vlSelfRef.universal_shift_register_tb__DOT__seed 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * vlSelfRef.universal_shift_register_tb__DOT__seed));
                            __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout 
                                = (0x7fffU & VL_SHIFTR_III(32,32,32, vlSelfRef.universal_shift_register_tb__DOT__seed, 0x10U));
                        }(), __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout))));
        vlSelfRef.universal_shift_register_tb__DOT__unnamedblk1__DOT__j = 4U;
        VL_ASSIGNBIT_II(4U, vlSelfRef.universal_shift_register_tb__DOT__parallel_in, 
                        (0U != (1U & ([&]() {
                            vlSelfRef.universal_shift_register_tb__DOT__seed 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * vlSelfRef.universal_shift_register_tb__DOT__seed));
                            __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout 
                                = (0x7fffU & VL_SHIFTR_III(32,32,32, vlSelfRef.universal_shift_register_tb__DOT__seed, 0x10U));
                        }(), __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout))));
        vlSelfRef.universal_shift_register_tb__DOT__unnamedblk1__DOT__j = 5U;
        VL_ASSIGNBIT_II(5U, vlSelfRef.universal_shift_register_tb__DOT__parallel_in, 
                        (0U != (1U & ([&]() {
                            vlSelfRef.universal_shift_register_tb__DOT__seed 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * vlSelfRef.universal_shift_register_tb__DOT__seed));
                            __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout 
                                = (0x7fffU & VL_SHIFTR_III(32,32,32, vlSelfRef.universal_shift_register_tb__DOT__seed, 0x10U));
                        }(), __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout))));
        vlSelfRef.universal_shift_register_tb__DOT__unnamedblk1__DOT__j = 6U;
        VL_ASSIGNBIT_II(6U, vlSelfRef.universal_shift_register_tb__DOT__parallel_in, 
                        (0U != (1U & ([&]() {
                            vlSelfRef.universal_shift_register_tb__DOT__seed 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * vlSelfRef.universal_shift_register_tb__DOT__seed));
                            __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout 
                                = (0x7fffU & VL_SHIFTR_III(32,32,32, vlSelfRef.universal_shift_register_tb__DOT__seed, 0x10U));
                        }(), __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout))));
        vlSelfRef.universal_shift_register_tb__DOT__unnamedblk1__DOT__j = 7U;
        VL_ASSIGNBIT_II(7U, vlSelfRef.universal_shift_register_tb__DOT__parallel_in, 
                        (0U != (1U & ([&]() {
                            vlSelfRef.universal_shift_register_tb__DOT__seed 
                                = ((IData)(0x3039U) 
                                   + ((IData)(0x41c64e6dU) 
                                      * vlSelfRef.universal_shift_register_tb__DOT__seed));
                            __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout 
                                = (0x7fffU & VL_SHIFTR_III(32,32,32, vlSelfRef.universal_shift_register_tb__DOT__seed, 0x10U));
                        }(), __Vfunc_universal_shift_register_tb__DOT__pseudo_random__31__Vfuncout))));
        vlSelfRef.universal_shift_register_tb__DOT__unnamedblk1__DOT__j = 8U;
        __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_parallel 
            = vlSelfRef.universal_shift_register_tb__DOT__parallel_in;
        __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_serial_left 
            = vlSelfRef.universal_shift_register_tb__DOT__serial_in_left;
        __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_serial_right 
            = vlSelfRef.universal_shift_register_tb__DOT__serial_in_right;
        __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_enable 
            = vlSelfRef.universal_shift_register_tb__DOT__enable;
        __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_mode 
            = vlSelfRef.universal_shift_register_tb__DOT__mode;
        co_await vlSelfRef.__VtrigSched_haf2f7e59__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge universal_shift_register_tb.clk)", 
                                                             "universal_shift_register_tb.v", 
                                                             81);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.universal_shift_register_tb__DOT__mode 
            = __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_mode;
        vlSelfRef.universal_shift_register_tb__DOT__enable 
            = __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_enable;
        vlSelfRef.universal_shift_register_tb__DOT__serial_in_right 
            = __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_serial_right;
        vlSelfRef.universal_shift_register_tb__DOT__serial_in_left 
            = __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_serial_left;
        vlSelfRef.universal_shift_register_tb__DOT__parallel_in 
            = __Vtask_universal_shift_register_tb__DOT__apply_inputs__32__in_parallel;
        if (vlSelfRef.universal_shift_register_tb__DOT__enable) {
            if ((2U & (IData)(vlSelfRef.universal_shift_register_tb__DOT__mode))) {
                vlSelfRef.universal_shift_register_tb__DOT__expected_q 
                    = ((1U & (IData)(vlSelfRef.universal_shift_register_tb__DOT__mode))
                        ? (IData)(vlSelfRef.universal_shift_register_tb__DOT__parallel_in)
                        : ((0xfeU & ((IData)(vlSelfRef.universal_shift_register_tb__DOT__expected_q) 
                                     << 1U)) | (IData)(vlSelfRef.universal_shift_register_tb__DOT__serial_in_left)));
            } else if ((1U & (IData)(vlSelfRef.universal_shift_register_tb__DOT__mode))) {
                vlSelfRef.universal_shift_register_tb__DOT__expected_q 
                    = (((IData)(vlSelfRef.universal_shift_register_tb__DOT__serial_in_right) 
                        << 7U) | (0x7fU & ((IData)(vlSelfRef.universal_shift_register_tb__DOT__expected_q) 
                                           >> 1U)));
            }
        }
        __Vtask_universal_shift_register_tb__DOT__check_output__33__test_number 
            = (vlSelfRef.universal_shift_register_tb__DOT__test_case 
               + vlSelfRef.universal_shift_register_tb__DOT__i);
        __Vtask_universal_shift_register_tb__DOT__check_output__33__expected 
            = vlSelfRef.universal_shift_register_tb__DOT__expected_q;
        co_await vlSelfRef.__VtrigSched_haf2f7da8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge universal_shift_register_tb.clk)", 
                                                             "universal_shift_register_tb.v", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "universal_shift_register_tb.v", 
                                             95);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
             != (IData)(__Vtask_universal_shift_register_tb__DOT__check_output__33__expected))) {
            VL_WRITEF_NX("ERROR: Test case %0# failed! Expected: %b, Got: %b\n",0,
                         32,__Vtask_universal_shift_register_tb__DOT__check_output__33__test_number,
                         8,(IData)(__Vtask_universal_shift_register_tb__DOT__check_output__33__expected),
                         8,vlSelfRef.universal_shift_register_tb__DOT__q);
            vlSelfRef.universal_shift_register_tb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__error_count);
        } else {
            VL_WRITEF_NX("Test case %0# passed! Output: %b\n",0,
                         32,__Vtask_universal_shift_register_tb__DOT__check_output__33__test_number,
                         8,(IData)(vlSelfRef.universal_shift_register_tb__DOT__q));
        }
        vlSelfRef.universal_shift_register_tb__DOT__i 
            = ((IData)(1U) + vlSelfRef.universal_shift_register_tb__DOT__i);
    }
    if ((0U == vlSelfRef.universal_shift_register_tb__DOT__error_count)) {
        VL_WRITEF_NX("All tests PASSED\n",0);
    } else {
        VL_WRITEF_NX("%0d tests FAILED\n",0,32,vlSelfRef.universal_shift_register_tb__DOT__error_count);
    }
    VL_FINISH_MT("universal_shift_register_tb.v", 291, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vuniversal_shift_register_tb___024root___eval_act(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___eval_act\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vuniversal_shift_register_tb___024root___nba_sequent__TOP__0(Vuniversal_shift_register_tb___024root* vlSelf);

void Vuniversal_shift_register_tb___024root___eval_nba(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___eval_nba\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vuniversal_shift_register_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vuniversal_shift_register_tb___024root___nba_sequent__TOP__0(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___nba_sequent__TOP__0\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.universal_shift_register_tb__DOT__rst_n) {
        if (vlSelfRef.universal_shift_register_tb__DOT__enable) {
            vlSelfRef.universal_shift_register_tb__DOT__q 
                = ((2U & (IData)(vlSelfRef.universal_shift_register_tb__DOT__mode))
                    ? ((1U & (IData)(vlSelfRef.universal_shift_register_tb__DOT__mode))
                        ? (IData)(vlSelfRef.universal_shift_register_tb__DOT__parallel_in)
                        : ((0xfeU & ((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
                                     << 1U)) | (IData)(vlSelfRef.universal_shift_register_tb__DOT__serial_in_left)))
                    : ((1U & (IData)(vlSelfRef.universal_shift_register_tb__DOT__mode))
                        ? (((IData)(vlSelfRef.universal_shift_register_tb__DOT__serial_in_right) 
                            << 7U) | (0x7fU & ((IData)(vlSelfRef.universal_shift_register_tb__DOT__q) 
                                               >> 1U)))
                        : (IData)(vlSelfRef.universal_shift_register_tb__DOT__q)));
        }
    } else {
        vlSelfRef.universal_shift_register_tb__DOT__q = 0U;
    }
}

void Vuniversal_shift_register_tb___024root___timing_resume(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___timing_resume\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_haf2f7da8__0.resume(
                                                   "@(posedge universal_shift_register_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_haf2f7e59__0.resume(
                                                   "@(negedge universal_shift_register_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vuniversal_shift_register_tb___024root___timing_commit(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___timing_commit\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_haf2f7da8__0.commit(
                                                   "@(posedge universal_shift_register_tb.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_haf2f7e59__0.commit(
                                                   "@(negedge universal_shift_register_tb.clk)");
    }
}

void Vuniversal_shift_register_tb___024root___eval_triggers__act(Vuniversal_shift_register_tb___024root* vlSelf);

bool Vuniversal_shift_register_tb___024root___eval_phase__act(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___eval_phase__act\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vuniversal_shift_register_tb___024root___eval_triggers__act(vlSelf);
    Vuniversal_shift_register_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vuniversal_shift_register_tb___024root___timing_resume(vlSelf);
        Vuniversal_shift_register_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vuniversal_shift_register_tb___024root___eval_phase__nba(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___eval_phase__nba\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vuniversal_shift_register_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuniversal_shift_register_tb___024root___dump_triggers__nba(Vuniversal_shift_register_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vuniversal_shift_register_tb___024root___dump_triggers__act(Vuniversal_shift_register_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vuniversal_shift_register_tb___024root___eval(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___eval\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vuniversal_shift_register_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("universal_shift_register_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vuniversal_shift_register_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("universal_shift_register_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vuniversal_shift_register_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vuniversal_shift_register_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vuniversal_shift_register_tb___024root___eval_debug_assertions(Vuniversal_shift_register_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root___eval_debug_assertions\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
