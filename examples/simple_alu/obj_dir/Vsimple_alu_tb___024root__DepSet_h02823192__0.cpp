// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_alu_tb.h for the primary calling header

#include "Vsimple_alu_tb__pch.h"
#include "Vsimple_alu_tb__Syms.h"
#include "Vsimple_alu_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vsimple_alu_tb___024root___eval_initial__TOP__Vtiming__1(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__1__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__1__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__1__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__1__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__1__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__1__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__2__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__2__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__2__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__2__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__2__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__3__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__3__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__3__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__3__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__3__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__3__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__4__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__4__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__4__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__4__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__4__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__5__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__5__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__5__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__5__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__5__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__5__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__6__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__6__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__6__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__6__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__6__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__7__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__7__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__7__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__7__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__7__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__7__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__8__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__8__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__8__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__8__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__8__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__9__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__9__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__9__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__9__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__9__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__9__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__10__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__10__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__10__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__10__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__10__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__11__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__11__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__11__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__11__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__11__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__11__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__12__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__12__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__12__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__12__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__12__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__13__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__13__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__13__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__13__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__13__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__13__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__14__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__14__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__14__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__14__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__14__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__15__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__15__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__15__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__15__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__15__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__15__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__16__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__16__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__16__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__16__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__16__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__17__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__17__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__17__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__17__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__17__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__17__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__18__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__18__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__18__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__18__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__18__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__19__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__19__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__19__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__19__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__19__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__19__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__20__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__20__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__20__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__20__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__20__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__21__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__21__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__21__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__21__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__21__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__21__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__22__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__22__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__22__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__22__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__22__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__23__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__23__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__23__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__23__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__23__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__23__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__24__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__24__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__24__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__24__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__24__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__25__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__25__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__25__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__25__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__25__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__25__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__26__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__26__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__26__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__26__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__26__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__27__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__27__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__27__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__27__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__27__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__27__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__28__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__28__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__28__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__28__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__28__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__29__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__29__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__29__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__29__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__29__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__29__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__30__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__30__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__30__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__30__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__30__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__31__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__31__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__31__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__31__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__31__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__31__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__32__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__32__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__32__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__32__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__32__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__33__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__33__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__33__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__33__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__33__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__33__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__34__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__34__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__34__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__34__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__34__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__35__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__35__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__35__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__35__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__35__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__35__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__36__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__36__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__36__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__36__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__36__op_name;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__37__op_a;
    __Vtask_simple_alu_tb__DOT__execute_op__37__op_a = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__execute_op__37__op_b;
    __Vtask_simple_alu_tb__DOT__execute_op__37__op_b = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__execute_op__37__op_code;
    __Vtask_simple_alu_tb__DOT__execute_op__37__op_code = 0;
    CData/*7:0*/ __Vtask_simple_alu_tb__DOT__check_result__38__exp_result;
    __Vtask_simple_alu_tb__DOT__check_result__38__exp_result = 0;
    CData/*3:0*/ __Vtask_simple_alu_tb__DOT__check_result__38__exp_flags;
    __Vtask_simple_alu_tb__DOT__check_result__38__exp_flags = 0;
    std::string __Vtask_simple_alu_tb__DOT__check_result__38__op_name;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("Starting Simple ALU Testbench\n=============================\n",0);
    vlSelfRef.simple_alu_tb__DOT__test_count = 0U;
    vlSelfRef.simple_alu_tb__DOT__error_count = 0U;
    vlSelfRef.simple_alu_tb__DOT__rst_n = 0U;
    vlSelfRef.simple_alu_tb__DOT__a = 0U;
    vlSelfRef.simple_alu_tb__DOT__b = 0U;
    vlSelfRef.simple_alu_tb__DOT__opcode = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("After reset: result=%x, flags=%b, done=%b\n\nTesting ADD operations:\n",0,
                 8,vlSelfRef.simple_alu_tb__DOT__result,
                 4,(IData)(vlSelfRef.simple_alu_tb__DOT__flags),
                 1,vlSelfRef.simple_alu_tb__DOT__done);
    __Vtask_simple_alu_tb__DOT__execute_op__1__op_code = 0U;
    __Vtask_simple_alu_tb__DOT__execute_op__1__op_b = 3U;
    __Vtask_simple_alu_tb__DOT__execute_op__1__op_a = 5U;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__1__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__1__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__1__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__1__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__1__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__1__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__2__op_name = 
        std::string{"ADD 5+3"};
    __Vtask_simple_alu_tb__DOT__check_result__2__exp_flags = 0U;
    __Vtask_simple_alu_tb__DOT__check_result__2__exp_result = 8U;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__2__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__2__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__2__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__2__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__2__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__2__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    __Vtask_simple_alu_tb__DOT__execute_op__3__op_code = 0U;
    __Vtask_simple_alu_tb__DOT__execute_op__3__op_b = 1U;
    __Vtask_simple_alu_tb__DOT__execute_op__3__op_a = 0xffU;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__3__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__3__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__3__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__3__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__3__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__3__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__4__op_name = 
        std::string{"ADD FF+1 (carry)"};
    __Vtask_simple_alu_tb__DOT__check_result__4__exp_flags = 0xaU;
    __Vtask_simple_alu_tb__DOT__check_result__4__exp_result = 0U;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__4__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__4__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__4__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__4__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__4__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__4__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    __Vtask_simple_alu_tb__DOT__execute_op__5__op_code = 0U;
    __Vtask_simple_alu_tb__DOT__execute_op__5__op_b = 1U;
    __Vtask_simple_alu_tb__DOT__execute_op__5__op_a = 0x7fU;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__5__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__5__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__5__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__5__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__5__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__5__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__6__op_name = 
        std::string{"ADD 7F+1 (overflow)"};
    __Vtask_simple_alu_tb__DOT__check_result__6__exp_flags = 5U;
    __Vtask_simple_alu_tb__DOT__check_result__6__exp_result = 0x80U;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__6__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__6__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__6__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__6__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__6__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__6__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    VL_WRITEF_NX("\nTesting SUB operations:\n",0);
    __Vtask_simple_alu_tb__DOT__execute_op__7__op_code = 1U;
    __Vtask_simple_alu_tb__DOT__execute_op__7__op_b = 3U;
    __Vtask_simple_alu_tb__DOT__execute_op__7__op_a = 8U;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__7__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__7__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__7__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__7__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__7__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__7__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__8__op_name = 
        std::string{"SUB 8-3"};
    __Vtask_simple_alu_tb__DOT__check_result__8__exp_flags = 0U;
    __Vtask_simple_alu_tb__DOT__check_result__8__exp_result = 5U;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__8__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__8__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__8__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__8__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__8__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__8__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    __Vtask_simple_alu_tb__DOT__execute_op__9__op_code = 1U;
    __Vtask_simple_alu_tb__DOT__execute_op__9__op_b = 8U;
    __Vtask_simple_alu_tb__DOT__execute_op__9__op_a = 3U;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__9__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__9__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__9__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__9__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__9__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__9__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__10__op_name = 
        std::string{"SUB 3-8 (negative)"};
    __Vtask_simple_alu_tb__DOT__check_result__10__exp_flags = 6U;
    __Vtask_simple_alu_tb__DOT__check_result__10__exp_result = 0xfbU;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__10__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__10__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__10__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__10__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__10__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__10__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    __Vtask_simple_alu_tb__DOT__execute_op__11__op_code = 1U;
    __Vtask_simple_alu_tb__DOT__execute_op__11__op_b = 1U;
    __Vtask_simple_alu_tb__DOT__execute_op__11__op_a = 0U;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__11__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__11__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__11__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__11__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__11__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__11__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__12__op_name = 
        std::string{"SUB 0-1 (borrow)"};
    __Vtask_simple_alu_tb__DOT__check_result__12__exp_flags = 6U;
    __Vtask_simple_alu_tb__DOT__check_result__12__exp_result = 0xffU;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__12__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__12__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__12__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__12__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__12__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__12__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    VL_WRITEF_NX("\nTesting logical operations:\n",0);
    __Vtask_simple_alu_tb__DOT__execute_op__13__op_code = 2U;
    __Vtask_simple_alu_tb__DOT__execute_op__13__op_b = 0xfU;
    __Vtask_simple_alu_tb__DOT__execute_op__13__op_a = 0xf0U;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__13__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__13__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__13__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__13__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__13__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__13__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__14__op_name = 
        std::string{"AND F0&0F"};
    __Vtask_simple_alu_tb__DOT__check_result__14__exp_flags = 8U;
    __Vtask_simple_alu_tb__DOT__check_result__14__exp_result = 0U;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__14__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__14__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__14__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__14__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__14__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__14__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    __Vtask_simple_alu_tb__DOT__execute_op__15__op_code = 3U;
    __Vtask_simple_alu_tb__DOT__execute_op__15__op_b = 0xfU;
    __Vtask_simple_alu_tb__DOT__execute_op__15__op_a = 0xf0U;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__15__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__15__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__15__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__15__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__15__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__15__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__16__op_name = 
        std::string{"OR F0|0F"};
    __Vtask_simple_alu_tb__DOT__check_result__16__exp_flags = 4U;
    __Vtask_simple_alu_tb__DOT__check_result__16__exp_result = 0xffU;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__16__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__16__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__16__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__16__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__16__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__16__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    __Vtask_simple_alu_tb__DOT__execute_op__17__op_code = 4U;
    __Vtask_simple_alu_tb__DOT__execute_op__17__op_b = 0x55U;
    __Vtask_simple_alu_tb__DOT__execute_op__17__op_a = 0xaaU;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__17__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__17__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__17__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__17__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__17__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__17__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__18__op_name = 
        std::string{"XOR AA^55"};
    __Vtask_simple_alu_tb__DOT__check_result__18__exp_flags = 4U;
    __Vtask_simple_alu_tb__DOT__check_result__18__exp_result = 0xffU;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__18__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__18__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__18__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__18__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__18__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__18__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    __Vtask_simple_alu_tb__DOT__execute_op__19__op_code = 5U;
    __Vtask_simple_alu_tb__DOT__execute_op__19__op_b = 0U;
    __Vtask_simple_alu_tb__DOT__execute_op__19__op_a = 0x55U;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__19__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__19__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__19__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__19__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__19__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__19__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__20__op_name = 
        std::string{"NOT ~55"};
    __Vtask_simple_alu_tb__DOT__check_result__20__exp_flags = 4U;
    __Vtask_simple_alu_tb__DOT__check_result__20__exp_result = 0xaaU;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__20__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__20__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__20__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__20__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__20__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__20__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    VL_WRITEF_NX("\nTesting shift operations:\n",0);
    __Vtask_simple_alu_tb__DOT__execute_op__21__op_code = 6U;
    __Vtask_simple_alu_tb__DOT__execute_op__21__op_b = 0U;
    __Vtask_simple_alu_tb__DOT__execute_op__21__op_a = 0x81U;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__21__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__21__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__21__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__21__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__21__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__21__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__22__op_name = 
        std::string{"SHL 81<<1"};
    __Vtask_simple_alu_tb__DOT__check_result__22__exp_flags = 2U;
    __Vtask_simple_alu_tb__DOT__check_result__22__exp_result = 2U;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__22__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__22__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__22__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__22__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__22__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__22__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    __Vtask_simple_alu_tb__DOT__execute_op__23__op_code = 7U;
    __Vtask_simple_alu_tb__DOT__execute_op__23__op_b = 0U;
    __Vtask_simple_alu_tb__DOT__execute_op__23__op_a = 0x81U;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__23__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__23__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__23__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__23__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__23__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__23__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__24__op_name = 
        std::string{"SHR 81>>1"};
    __Vtask_simple_alu_tb__DOT__check_result__24__exp_flags = 2U;
    __Vtask_simple_alu_tb__DOT__check_result__24__exp_result = 0x40U;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__24__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__24__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__24__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__24__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__24__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__24__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    VL_WRITEF_NX("\nTesting compare operations:\n",0);
    __Vtask_simple_alu_tb__DOT__execute_op__25__op_code = 8U;
    __Vtask_simple_alu_tb__DOT__execute_op__25__op_b = 5U;
    __Vtask_simple_alu_tb__DOT__execute_op__25__op_a = 5U;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__25__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__25__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__25__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__25__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__25__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__25__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__26__op_name = 
        std::string{"CMP 5==5"};
    __Vtask_simple_alu_tb__DOT__check_result__26__exp_flags = 8U;
    __Vtask_simple_alu_tb__DOT__check_result__26__exp_result = 0x40U;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__26__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__26__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__26__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__26__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__26__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__26__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    __Vtask_simple_alu_tb__DOT__execute_op__27__op_code = 8U;
    __Vtask_simple_alu_tb__DOT__execute_op__27__op_b = 8U;
    __Vtask_simple_alu_tb__DOT__execute_op__27__op_a = 5U;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__27__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__27__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__27__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__27__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__27__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__27__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__28__op_name = 
        std::string{"CMP 5<8"};
    __Vtask_simple_alu_tb__DOT__check_result__28__exp_flags = 6U;
    __Vtask_simple_alu_tb__DOT__check_result__28__exp_result = 0x40U;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__28__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__28__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__28__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__28__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__28__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__28__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    __Vtask_simple_alu_tb__DOT__execute_op__29__op_code = 8U;
    __Vtask_simple_alu_tb__DOT__execute_op__29__op_b = 5U;
    __Vtask_simple_alu_tb__DOT__execute_op__29__op_a = 8U;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__29__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__29__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__29__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__29__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__29__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__29__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__30__op_name = 
        std::string{"CMP 8>5"};
    __Vtask_simple_alu_tb__DOT__check_result__30__exp_flags = 0U;
    __Vtask_simple_alu_tb__DOT__check_result__30__exp_result = 0x40U;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__30__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__30__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__30__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__30__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__30__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__30__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    VL_WRITEF_NX("\nTesting multiply operations:\n",0);
    __Vtask_simple_alu_tb__DOT__execute_op__31__op_code = 9U;
    __Vtask_simple_alu_tb__DOT__execute_op__31__op_b = 5U;
    __Vtask_simple_alu_tb__DOT__execute_op__31__op_a = 4U;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__31__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__31__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__31__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__31__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__31__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__31__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__32__op_name = 
        std::string{"MUL 4*5"};
    __Vtask_simple_alu_tb__DOT__check_result__32__exp_flags = 0U;
    __Vtask_simple_alu_tb__DOT__check_result__32__exp_result = 0x14U;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__32__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__32__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__32__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__32__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__32__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__32__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    __Vtask_simple_alu_tb__DOT__execute_op__33__op_code = 9U;
    __Vtask_simple_alu_tb__DOT__execute_op__33__op_b = 0x10U;
    __Vtask_simple_alu_tb__DOT__execute_op__33__op_a = 0x10U;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__33__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__33__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__33__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__33__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__33__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__33__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__34__op_name = 
        std::string{"MUL 16*16 (overflow)"};
    __Vtask_simple_alu_tb__DOT__check_result__34__exp_flags = 9U;
    __Vtask_simple_alu_tb__DOT__check_result__34__exp_result = 0U;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__34__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__34__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__34__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__34__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__34__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__34__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    VL_WRITEF_NX("\nTesting edge cases:\n",0);
    __Vtask_simple_alu_tb__DOT__execute_op__35__op_code = 0U;
    __Vtask_simple_alu_tb__DOT__execute_op__35__op_b = 0U;
    __Vtask_simple_alu_tb__DOT__execute_op__35__op_a = 0U;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__35__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__35__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__35__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__35__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__35__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__35__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__36__op_name = 
        std::string{"ADD 0+0"};
    __Vtask_simple_alu_tb__DOT__check_result__36__exp_flags = 8U;
    __Vtask_simple_alu_tb__DOT__check_result__36__exp_result = 0U;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__36__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__36__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__36__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__36__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__36__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__36__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    __Vtask_simple_alu_tb__DOT__execute_op__37__op_code = 2U;
    __Vtask_simple_alu_tb__DOT__execute_op__37__op_b = 0xffU;
    __Vtask_simple_alu_tb__DOT__execute_op__37__op_a = 0xffU;
    vlSelfRef.simple_alu_tb__DOT__a = __Vtask_simple_alu_tb__DOT__execute_op__37__op_a;
    vlSelfRef.simple_alu_tb__DOT__b = __Vtask_simple_alu_tb__DOT__execute_op__37__op_b;
    vlSelfRef.simple_alu_tb__DOT__opcode = __Vtask_simple_alu_tb__DOT__execute_op__37__op_code;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 1U;
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_alu_tb__DOT__execute = 0U;
    vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout = 0U;
    while (((~ (IData)(vlSelfRef.simple_alu_tb__DOT__done)) 
            & VL_GTS_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout))) {
        co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge simple_alu_tb.clk)", 
                                                             "simple_alu_tb.v", 
                                                             102);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout 
            = ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout);
    }
    if (VL_UNLIKELY((VL_LTES_III(32, 0xaU, vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout)))) {
        VL_WRITEF_NX("ERROR: Timeout waiting for done signal!\n  Operation: %0#, A=%x, B=%x\n  Current state: result=%x, flags=%b, done=%b\n",0,
                     4,__Vtask_simple_alu_tb__DOT__execute_op__37__op_code,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__execute_op__37__op_a),
                     8,__Vtask_simple_alu_tb__DOT__execute_op__37__op_b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags,
                     1,(IData)(vlSelfRef.simple_alu_tb__DOT__done));
        VL_FINISH_MT("simple_alu_tb.v", 110, "");
    }
    co_await vlSelfRef.__VtrigSched_h0c10e39c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge simple_alu_tb.clk)", 
                                                         "simple_alu_tb.v", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_simple_alu_tb__DOT__check_result__38__op_name = 
        std::string{"AND FF&FF"};
    __Vtask_simple_alu_tb__DOT__check_result__38__exp_flags = 4U;
    __Vtask_simple_alu_tb__DOT__check_result__38__exp_result = 0xffU;
    if ((((IData)(vlSelfRef.simple_alu_tb__DOT__result) 
          != (IData)(__Vtask_simple_alu_tb__DOT__check_result__38__exp_result)) 
         | ((IData)(vlSelfRef.simple_alu_tb__DOT__flags) 
            != (IData)(__Vtask_simple_alu_tb__DOT__check_result__38__exp_flags)))) {
        VL_WRITEF_NX("ERROR: %@ operation failed!\n  Inputs: A=%x, B=%x\n  Expected: result=%x, flags=%b\n  Got:      result=%x, flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__38__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(__Vtask_simple_alu_tb__DOT__check_result__38__exp_result),
                     4,__Vtask_simple_alu_tb__DOT__check_result__38__exp_flags,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
        vlSelfRef.simple_alu_tb__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.simple_alu_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("PASS: %@ - A=%x, B=%x, Result=%x, Flags=%b\n",0,
                     -1,&(__Vtask_simple_alu_tb__DOT__check_result__38__op_name),
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__a),
                     8,vlSelfRef.simple_alu_tb__DOT__b,
                     8,(IData)(vlSelfRef.simple_alu_tb__DOT__result),
                     4,vlSelfRef.simple_alu_tb__DOT__flags);
    }
    vlSelfRef.simple_alu_tb__DOT__test_count = ((IData)(1U) 
                                                + vlSelfRef.simple_alu_tb__DOT__test_count);
    VL_WRITEF_NX("\n=============================\nTest Summary:\nTotal tests: %0d\nErrors: %0d\n",0,
                 32,vlSelfRef.simple_alu_tb__DOT__test_count,
                 32,vlSelfRef.simple_alu_tb__DOT__error_count);
    if ((0U == vlSelfRef.simple_alu_tb__DOT__error_count)) {
        VL_WRITEF_NX("All tests PASSED!\n",0);
    } else {
        VL_WRITEF_NX("Some tests FAILED!\n",0);
    }
    VL_WRITEF_NX("=============================\n\n",0);
    VL_FINISH_MT("simple_alu_tb.v", 235, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_alu_tb___024root___dump_triggers__act(Vsimple_alu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimple_alu_tb___024root___eval_triggers__act(Vsimple_alu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root___eval_triggers__act\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.simple_alu_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__simple_alu_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.simple_alu_tb__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__simple_alu_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__simple_alu_tb__DOT__clk__0 
        = vlSelfRef.simple_alu_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__simple_alu_tb__DOT__rst_n__0 
        = vlSelfRef.simple_alu_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple_alu_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
