// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsimple_alu_tb.h for the primary calling header

#ifndef VERILATED_VSIMPLE_ALU_TB___024ROOT_H_
#define VERILATED_VSIMPLE_ALU_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsimple_alu_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsimple_alu_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ simple_alu_tb__DOT__clk;
    CData/*0:0*/ simple_alu_tb__DOT__rst_n;
    CData/*7:0*/ simple_alu_tb__DOT__a;
    CData/*7:0*/ simple_alu_tb__DOT__b;
    CData/*3:0*/ simple_alu_tb__DOT__opcode;
    CData/*0:0*/ simple_alu_tb__DOT__execute;
    CData/*7:0*/ simple_alu_tb__DOT__result;
    CData/*3:0*/ simple_alu_tb__DOT__flags;
    CData/*0:0*/ simple_alu_tb__DOT__done;
    CData/*7:0*/ simple_alu_tb__DOT__expected_result;
    CData/*3:0*/ simple_alu_tb__DOT__expected_flags;
    CData/*0:0*/ simple_alu_tb__DOT__dut__DOT__execute_prev;
    CData/*0:0*/ simple_alu_tb__DOT__dut__DOT__execute_edge;
    CData/*7:0*/ simple_alu_tb__DOT__dut__DOT__and_result;
    CData/*7:0*/ simple_alu_tb__DOT__dut__DOT__or_result;
    CData/*7:0*/ simple_alu_tb__DOT__dut__DOT__xor_result;
    CData/*7:0*/ simple_alu_tb__DOT__dut__DOT__mul_result;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__simple_alu_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__simple_alu_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ simple_alu_tb__DOT__dut__DOT__add_result;
    SData/*8:0*/ simple_alu_tb__DOT__dut__DOT__sub_result;
    IData/*31:0*/ simple_alu_tb__DOT__test_count;
    IData/*31:0*/ simple_alu_tb__DOT__error_count;
    IData/*31:0*/ simple_alu_tb__DOT__execute_op__Vstatic__timeout;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0c10e39c__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsimple_alu_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsimple_alu_tb___024root(Vsimple_alu_tb__Syms* symsp, const char* v__name);
    ~Vsimple_alu_tb___024root();
    VL_UNCOPYABLE(Vsimple_alu_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
