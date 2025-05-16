// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuniversal_shift_register_tb.h for the primary calling header

#ifndef VERILATED_VUNIVERSAL_SHIFT_REGISTER_TB___024ROOT_H_
#define VERILATED_VUNIVERSAL_SHIFT_REGISTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vuniversal_shift_register_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuniversal_shift_register_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ universal_shift_register_tb__DOT__clk;
    CData/*0:0*/ universal_shift_register_tb__DOT__rst_n;
    CData/*0:0*/ universal_shift_register_tb__DOT__enable;
    CData/*1:0*/ universal_shift_register_tb__DOT__mode;
    CData/*0:0*/ universal_shift_register_tb__DOT__serial_in_right;
    CData/*0:0*/ universal_shift_register_tb__DOT__serial_in_left;
    CData/*7:0*/ universal_shift_register_tb__DOT__parallel_in;
    CData/*7:0*/ universal_shift_register_tb__DOT__q;
    CData/*7:0*/ universal_shift_register_tb__DOT__expected_q;
    CData/*0:0*/ universal_shift_register_tb__DOT__bit_val;
    CData/*7:0*/ universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__pattern;
    CData/*0:0*/ __Vtrigprevexpr___TOP__universal_shift_register_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__universal_shift_register_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ universal_shift_register_tb__DOT__test_case;
    IData/*31:0*/ universal_shift_register_tb__DOT__error_count;
    IData/*31:0*/ universal_shift_register_tb__DOT__seed;
    IData/*31:0*/ universal_shift_register_tb__DOT__i;
    IData/*31:0*/ universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__j;
    IData/*31:0*/ universal_shift_register_tb__DOT__unnamedblk1__DOT__j;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_haf2f7da8__0;
    VlTriggerScheduler __VtrigSched_haf2f7e59__0;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vuniversal_shift_register_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuniversal_shift_register_tb___024root(Vuniversal_shift_register_tb__Syms* symsp, const char* v__name);
    ~Vuniversal_shift_register_tb___024root();
    VL_UNCOPYABLE(Vuniversal_shift_register_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
