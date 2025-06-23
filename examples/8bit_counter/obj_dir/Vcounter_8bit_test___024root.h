// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter_8bit_test.h for the primary calling header

#ifndef VERILATED_VCOUNTER_8BIT_TEST___024ROOT_H_
#define VERILATED_VCOUNTER_8BIT_TEST___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcounter_8bit_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcounter_8bit_test___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ counter_8bit_test__DOT__clk;
    CData/*0:0*/ counter_8bit_test__DOT__rst;
    CData/*0:0*/ counter_8bit_test__DOT__enable;
    CData/*0:0*/ counter_8bit_test__DOT__load;
    CData/*7:0*/ counter_8bit_test__DOT__load_value;
    CData/*7:0*/ counter_8bit_test__DOT__count;
    CData/*0:0*/ counter_8bit_test__DOT__overflow;
    CData/*0:0*/ counter_8bit_test__DOT__underflow;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__counter_8bit_test__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ counter_8bit_test__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcounter_8bit_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcounter_8bit_test___024root(Vcounter_8bit_test__Syms* symsp, const char* v__name);
    ~Vcounter_8bit_test___024root();
    VL_UNCOPYABLE(Vcounter_8bit_test___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
