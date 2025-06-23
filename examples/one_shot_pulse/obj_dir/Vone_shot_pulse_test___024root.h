// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vone_shot_pulse_test.h for the primary calling header

#ifndef VERILATED_VONE_SHOT_PULSE_TEST___024ROOT_H_
#define VERILATED_VONE_SHOT_PULSE_TEST___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vone_shot_pulse_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vone_shot_pulse_test___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ one_shot_pulse_test__DOT__clk;
    CData/*0:0*/ one_shot_pulse_test__DOT__rst;
    CData/*0:0*/ one_shot_pulse_test__DOT__enable;
    CData/*0:0*/ one_shot_pulse_test__DOT__pulse;
    CData/*2:0*/ one_shot_pulse_test__DOT__dut__DOT__counter;
    CData/*0:0*/ one_shot_pulse_test__DOT__dut__DOT__pulse_counter;
    CData/*0:0*/ one_shot_pulse_test__DOT__dut__DOT__counting;
    CData/*0:0*/ one_shot_pulse_test__DOT__dut__DOT__pulse_active;
    CData/*0:0*/ one_shot_pulse_test__DOT__dut__DOT__pulse_done;
    CData/*0:0*/ __Vtrigprevexpr___TOP__one_shot_pulse_test__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vone_shot_pulse_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vone_shot_pulse_test___024root(Vone_shot_pulse_test__Syms* symsp, const char* v__name);
    ~Vone_shot_pulse_test___024root();
    VL_UNCOPYABLE(Vone_shot_pulse_test___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
