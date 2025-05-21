// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vminimal_divider_sim.h for the primary calling header

#ifndef VERILATED_VMINIMAL_DIVIDER_SIM___024ROOT_H_
#define VERILATED_VMINIMAL_DIVIDER_SIM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vminimal_divider_sim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vminimal_divider_sim___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ minimal_divider_sim__DOT__clk;
    CData/*0:0*/ minimal_divider_sim__DOT__rst;
    CData/*0:0*/ minimal_divider_sim__DOT__div1;
    CData/*0:0*/ minimal_divider_sim__DOT__div2;
    CData/*0:0*/ minimal_divider_sim__DOT__div3;
    CData/*0:0*/ minimal_divider_sim__DOT__div4;
    CData/*0:0*/ __Vtrigprevexpr___TOP__minimal_divider_sim__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ minimal_divider_sim__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vminimal_divider_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vminimal_divider_sim___024root(Vminimal_divider_sim__Syms* symsp, const char* v__name);
    ~Vminimal_divider_sim___024root();
    VL_UNCOPYABLE(Vminimal_divider_sim___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
