// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vedge_detector_test.h for the primary calling header

#ifndef VERILATED_VEDGE_DETECTOR_TEST___024ROOT_H_
#define VERILATED_VEDGE_DETECTOR_TEST___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vedge_detector_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vedge_detector_test___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ edge_detector_test__DOT__clk;
    CData/*0:0*/ edge_detector_test__DOT__rst;
    CData/*0:0*/ edge_detector_test__DOT__signal_in;
    CData/*0:0*/ edge_detector_test__DOT__rising_edge;
    CData/*0:0*/ edge_detector_test__DOT__falling_edge;
    CData/*0:0*/ edge_detector_test__DOT__any_edge;
    CData/*0:0*/ edge_detector_test__DOT__dut__DOT__signal_prev;
    CData/*0:0*/ __Vtrigprevexpr___TOP__edge_detector_test__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ edge_detector_test__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vedge_detector_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vedge_detector_test___024root(Vedge_detector_test__Syms* symsp, const char* v__name);
    ~Vedge_detector_test___024root();
    VL_UNCOPYABLE(Vedge_detector_test___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
