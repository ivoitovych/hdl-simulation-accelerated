// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vled_blinker_test.h for the primary calling header

#ifndef VERILATED_VLED_BLINKER_TEST___024ROOT_H_
#define VERILATED_VLED_BLINKER_TEST___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vled_blinker_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vled_blinker_test___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ led_blinker_test__DOT__clk;
    CData/*0:0*/ led_blinker_test__DOT__rst;
    CData/*0:0*/ led_blinker_test__DOT__led;
    CData/*1:0*/ led_blinker_test__DOT__dut__DOT__counter;
    CData/*0:0*/ __Vtrigprevexpr___TOP__led_blinker_test__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vled_blinker_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vled_blinker_test___024root(Vled_blinker_test__Syms* symsp, const char* v__name);
    ~Vled_blinker_test___024root();
    VL_UNCOPYABLE(Vled_blinker_test___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
