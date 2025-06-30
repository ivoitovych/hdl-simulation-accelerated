// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpwm_generator_tb.h for the primary calling header

#ifndef VERILATED_VPWM_GENERATOR_TB___024ROOT_H_
#define VERILATED_VPWM_GENERATOR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vpwm_generator_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpwm_generator_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ pwm_generator_tb__DOT__clk;
    CData/*0:0*/ pwm_generator_tb__DOT__rst_n;
    CData/*0:0*/ pwm_generator_tb__DOT__pwm_out;
    CData/*0:0*/ pwm_generator_tb__DOT__enable;
    CData/*7:0*/ pwm_generator_tb__DOT__duty;
    CData/*7:0*/ pwm_generator_tb__DOT__period;
    CData/*7:0*/ pwm_generator_tb__DOT__dut__DOT__pwm_counter;
    CData/*0:0*/ pwm_generator_tb__DOT__dut__DOT__clk_div_counter;
    CData/*0:0*/ __Vtrigprevexpr___TOP__pwm_generator_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__pwm_generator_tb__DOT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__pwm_generator_tb__DOT__pwm_out__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ pwm_generator_tb__DOT__test_case;
    IData/*31:0*/ pwm_generator_tb__DOT__i;
    IData/*31:0*/ pwm_generator_tb__DOT__j;
    IData/*31:0*/ pwm_generator_tb__DOT__high_count;
    IData/*31:0*/ pwm_generator_tb__DOT__low_count;
    IData/*31:0*/ pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    double pwm_generator_tb__DOT__measured_duty_cycle;
    double pwm_generator_tb__DOT__expected_duty_cycle;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h5d7703a5__0;
    VlTriggerScheduler __VtrigSched_h1f93b9e0__0;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpwm_generator_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpwm_generator_tb___024root(Vpwm_generator_tb__Syms* symsp, const char* v__name);
    ~Vpwm_generator_tb___024root();
    VL_UNCOPYABLE(Vpwm_generator_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
