// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm_generator_tb.h for the primary calling header

#include "Vpwm_generator_tb__pch.h"
#include "Vpwm_generator_tb__Syms.h"
#include "Vpwm_generator_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vpwm_generator_tb___024root___eval_initial__TOP__Vtiming__1(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ pwm_generator_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    pwm_generator_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5;
    pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6;
    pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    double __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__duty_cycle_percent;
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__duty_cycle_percent = 0;
    IData/*31:0*/ __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    double __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__duty_cycle_percent;
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__duty_cycle_percent = 0;
    IData/*31:0*/ __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    double __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent;
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent = 0;
    IData/*31:0*/ __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("Starting PWM Generator Testbench\n=================================\n",0);
    vlSelfRef.pwm_generator_tb__DOT__test_case = 0U;
    VL_WRITEF_NX("\nTest 0: Reset behavior\n",0);
    vlSelfRef.pwm_generator_tb__DOT__rst_n = 0U;
    vlSelfRef.pwm_generator_tb__DOT__enable = 0U;
    vlSelfRef.pwm_generator_tb__DOT__duty = 0U;
    vlSelfRef.pwm_generator_tb__DOT__period = 0xffU;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.pwm_generator_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSelfRef.pwm_generator_tb__DOT__pwm_out) {
        VL_WRITEF_NX("ERROR: PWM output not 0 after reset!\n",0);
    } else {
        VL_WRITEF_NX("PASS: PWM output correctly reset to 0\n",0);
    }
    vlSelfRef.pwm_generator_tb__DOT__test_case = ((IData)(1U) 
                                                  + vlSelfRef.pwm_generator_tb__DOT__test_case);
    VL_WRITEF_NX("\nTest %0d: 50%% duty cycle\n",0,
                 32,vlSelfRef.pwm_generator_tb__DOT__test_case);
    vlSelfRef.pwm_generator_tb__DOT__period = 0x63U;
    vlSelfRef.pwm_generator_tb__DOT__duty = 0x32U;
    vlSelfRef.pwm_generator_tb__DOT__enable = 1U;
    pwm_generator_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x12cU;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (pwm_generator_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    {
        vlSelfRef.pwm_generator_tb__DOT__high_count = 0U;
        vlSelfRef.pwm_generator_tb__DOT__low_count = 0U;
        vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout = 0U;
        if ((0U == (IData)(vlSelfRef.pwm_generator_tb__DOT__duty))) {
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = ((IData)(1U) + (IData)(vlSelfRef.pwm_generator_tb__DOT__period));
            while (VL_LTS_III(32, 0U, __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge pwm_generator_tb.clk)", 
                                                                     "pwm_generator_tb.v", 
                                                                     70);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                if ((1U & (~ (IData)(vlSelfRef.pwm_generator_tb__DOT__pwm_out)))) {
                    vlSelfRef.pwm_generator_tb__DOT__low_count 
                        = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__low_count);
                }
                __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__duty_cycle_percent = 0.0;
            goto __Vlabel1;
        }
        if (((IData)(vlSelfRef.pwm_generator_tb__DOT__duty) 
             > (IData)(vlSelfRef.pwm_generator_tb__DOT__period))) {
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = ((IData)(1U) + (IData)(vlSelfRef.pwm_generator_tb__DOT__period));
            while (VL_LTS_III(32, 0U, __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge pwm_generator_tb.clk)", 
                                                                     "pwm_generator_tb.v", 
                                                                     81);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                if (vlSelfRef.pwm_generator_tb__DOT__pwm_out) {
                    vlSelfRef.pwm_generator_tb__DOT__high_count 
                        = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__high_count);
                }
                __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                    = (__Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                       - (IData)(1U));
            }
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__duty_cycle_percent = 100.0;
            goto __Vlabel1;
        }
        while (((IData)(vlSelfRef.pwm_generator_tb__DOT__pwm_out) 
                & VL_GTS_III(32, 0x3e8U, vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout))) {
            co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge pwm_generator_tb.clk)", 
                                                                 "pwm_generator_tb.v", 
                                                                 91);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout 
                = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout);
        }
        if (VL_UNLIKELY((VL_LTES_III(32, 0x3e8U, vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout)))) {
            VL_WRITEF_NX("WARNING: Timeout waiting for PWM low\n",0);
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__duty_cycle_percent = -1.0;
            goto __Vlabel1;
        }
        co_await vlSelfRef.__VtrigSched_h1f93b9e0__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.pwm_out)", 
                                                             "pwm_generator_tb.v", 
                                                             100);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.pwm_generator_tb__DOT__i = 0U;
        while ((vlSelfRef.pwm_generator_tb__DOT__i 
                <= (IData)(vlSelfRef.pwm_generator_tb__DOT__period))) {
            co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge pwm_generator_tb.clk)", 
                                                                 "pwm_generator_tb.v", 
                                                                 104);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            if (vlSelfRef.pwm_generator_tb__DOT__pwm_out) {
                vlSelfRef.pwm_generator_tb__DOT__high_count 
                    = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__high_count);
            } else {
                vlSelfRef.pwm_generator_tb__DOT__low_count 
                    = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__low_count);
            }
            vlSelfRef.pwm_generator_tb__DOT__i = ((IData)(1U) 
                                                  + vlSelfRef.pwm_generator_tb__DOT__i);
        }
        __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__duty_cycle_percent 
            = (100.0 * (VL_ISTOR_D_I(32, vlSelfRef.pwm_generator_tb__DOT__high_count) 
                        / VL_ISTOR_D_I(32, (vlSelfRef.pwm_generator_tb__DOT__high_count 
                                            + vlSelfRef.pwm_generator_tb__DOT__low_count))));
        __Vlabel1: ;
    }
    vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle 
        = __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__1__duty_cycle_percent;
    vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle = 50.0;
    VL_WRITEF_NX("Expected: %0.1f%%, Measured: %0.1f%%\n",0,
                 64,vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle,
                 64,vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle);
    if (((vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle 
          > (vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle 
             - 2.0)) & (vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle 
                        < (2.0 + vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle)))) {
        VL_WRITEF_NX("PASS: Duty cycle within tolerance\n",0);
    } else {
        VL_WRITEF_NX("ERROR: Duty cycle out of range!\n",0);
    }
    vlSelfRef.pwm_generator_tb__DOT__test_case = ((IData)(1U) 
                                                  + vlSelfRef.pwm_generator_tb__DOT__test_case);
    VL_WRITEF_NX("\nTest %0d: Various duty cycles\n",0,
                 32,vlSelfRef.pwm_generator_tb__DOT__test_case);
    vlSelfRef.pwm_generator_tb__DOT__duty = 0U;
    VL_WRITEF_NX("\n  Testing 0%% duty cycle...\n",0);
    pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x12cU;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             162);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    {
        vlSelfRef.pwm_generator_tb__DOT__high_count = 0U;
        vlSelfRef.pwm_generator_tb__DOT__low_count = 0U;
        vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout = 0U;
        if ((0U == (IData)(vlSelfRef.pwm_generator_tb__DOT__duty))) {
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = ((IData)(1U) + (IData)(vlSelfRef.pwm_generator_tb__DOT__period));
            while (VL_LTS_III(32, 0U, __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge pwm_generator_tb.clk)", 
                                                                     "pwm_generator_tb.v", 
                                                                     70);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                if ((1U & (~ (IData)(vlSelfRef.pwm_generator_tb__DOT__pwm_out)))) {
                    vlSelfRef.pwm_generator_tb__DOT__low_count 
                        = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__low_count);
                }
                __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__duty_cycle_percent = 0.0;
            goto __Vlabel2;
        }
        if (((IData)(vlSelfRef.pwm_generator_tb__DOT__duty) 
             > (IData)(vlSelfRef.pwm_generator_tb__DOT__period))) {
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = ((IData)(1U) + (IData)(vlSelfRef.pwm_generator_tb__DOT__period));
            while (VL_LTS_III(32, 0U, __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge pwm_generator_tb.clk)", 
                                                                     "pwm_generator_tb.v", 
                                                                     81);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                if (vlSelfRef.pwm_generator_tb__DOT__pwm_out) {
                    vlSelfRef.pwm_generator_tb__DOT__high_count 
                        = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__high_count);
                }
                __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                    = (__Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                       - (IData)(1U));
            }
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__duty_cycle_percent = 100.0;
            goto __Vlabel2;
        }
        while (((IData)(vlSelfRef.pwm_generator_tb__DOT__pwm_out) 
                & VL_GTS_III(32, 0x3e8U, vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout))) {
            co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge pwm_generator_tb.clk)", 
                                                                 "pwm_generator_tb.v", 
                                                                 91);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout 
                = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout);
        }
        if (VL_UNLIKELY((VL_LTES_III(32, 0x3e8U, vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout)))) {
            VL_WRITEF_NX("WARNING: Timeout waiting for PWM low\n",0);
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__duty_cycle_percent = -1.0;
            goto __Vlabel2;
        }
        co_await vlSelfRef.__VtrigSched_h1f93b9e0__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.pwm_out)", 
                                                             "pwm_generator_tb.v", 
                                                             100);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.pwm_generator_tb__DOT__i = 0U;
        while ((vlSelfRef.pwm_generator_tb__DOT__i 
                <= (IData)(vlSelfRef.pwm_generator_tb__DOT__period))) {
            co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge pwm_generator_tb.clk)", 
                                                                 "pwm_generator_tb.v", 
                                                                 104);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            if (vlSelfRef.pwm_generator_tb__DOT__pwm_out) {
                vlSelfRef.pwm_generator_tb__DOT__high_count 
                    = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__high_count);
            } else {
                vlSelfRef.pwm_generator_tb__DOT__low_count 
                    = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__low_count);
            }
            vlSelfRef.pwm_generator_tb__DOT__i = ((IData)(1U) 
                                                  + vlSelfRef.pwm_generator_tb__DOT__i);
        }
        __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__duty_cycle_percent 
            = (100.0 * (VL_ISTOR_D_I(32, vlSelfRef.pwm_generator_tb__DOT__high_count) 
                        / VL_ISTOR_D_I(32, (vlSelfRef.pwm_generator_tb__DOT__high_count 
                                            + vlSelfRef.pwm_generator_tb__DOT__low_count))));
        __Vlabel2: ;
    }
    vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle 
        = __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__duty_cycle_percent;
    vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle = 0.0;
    VL_WRITEF_NX("  Expected: %0.1f%%, Measured: %0.1f%%\n  PASS\n",0,
                 64,vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle,
                 64,vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle);
    vlSelfRef.pwm_generator_tb__DOT__j = 0x19U;
    vlSelfRef.pwm_generator_tb__DOT__duty = 0x19U;
    VL_WRITEF_NX("\n  Testing 25%% duty cycle...\n",0);
    pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x12cU;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             162);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    {
        vlSelfRef.pwm_generator_tb__DOT__high_count = 0U;
        vlSelfRef.pwm_generator_tb__DOT__low_count = 0U;
        vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout = 0U;
        if ((0U == (IData)(vlSelfRef.pwm_generator_tb__DOT__duty))) {
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = ((IData)(1U) + (IData)(vlSelfRef.pwm_generator_tb__DOT__period));
            while (VL_LTS_III(32, 0U, __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge pwm_generator_tb.clk)", 
                                                                     "pwm_generator_tb.v", 
                                                                     70);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                if ((1U & (~ (IData)(vlSelfRef.pwm_generator_tb__DOT__pwm_out)))) {
                    vlSelfRef.pwm_generator_tb__DOT__low_count 
                        = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__low_count);
                }
                __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent = 0.0;
            goto __Vlabel3;
        }
        if (((IData)(vlSelfRef.pwm_generator_tb__DOT__duty) 
             > (IData)(vlSelfRef.pwm_generator_tb__DOT__period))) {
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = ((IData)(1U) + (IData)(vlSelfRef.pwm_generator_tb__DOT__period));
            while (VL_LTS_III(32, 0U, __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge pwm_generator_tb.clk)", 
                                                                     "pwm_generator_tb.v", 
                                                                     81);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                if (vlSelfRef.pwm_generator_tb__DOT__pwm_out) {
                    vlSelfRef.pwm_generator_tb__DOT__high_count 
                        = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__high_count);
                }
                __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                    = (__Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                       - (IData)(1U));
            }
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent = 100.0;
            goto __Vlabel3;
        }
        while (((IData)(vlSelfRef.pwm_generator_tb__DOT__pwm_out) 
                & VL_GTS_III(32, 0x3e8U, vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout))) {
            co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge pwm_generator_tb.clk)", 
                                                                 "pwm_generator_tb.v", 
                                                                 91);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout 
                = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout);
        }
        if (VL_UNLIKELY((VL_LTES_III(32, 0x3e8U, vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout)))) {
            VL_WRITEF_NX("WARNING: Timeout waiting for PWM low\n",0);
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent = -1.0;
            goto __Vlabel3;
        }
        co_await vlSelfRef.__VtrigSched_h1f93b9e0__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.pwm_out)", 
                                                             "pwm_generator_tb.v", 
                                                             100);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.pwm_generator_tb__DOT__i = 0U;
        while ((vlSelfRef.pwm_generator_tb__DOT__i 
                <= (IData)(vlSelfRef.pwm_generator_tb__DOT__period))) {
            co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge pwm_generator_tb.clk)", 
                                                                 "pwm_generator_tb.v", 
                                                                 104);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            if (vlSelfRef.pwm_generator_tb__DOT__pwm_out) {
                vlSelfRef.pwm_generator_tb__DOT__high_count 
                    = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__high_count);
            } else {
                vlSelfRef.pwm_generator_tb__DOT__low_count 
                    = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__low_count);
            }
            vlSelfRef.pwm_generator_tb__DOT__i = ((IData)(1U) 
                                                  + vlSelfRef.pwm_generator_tb__DOT__i);
        }
        __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent 
            = (100.0 * (VL_ISTOR_D_I(32, vlSelfRef.pwm_generator_tb__DOT__high_count) 
                        / VL_ISTOR_D_I(32, (vlSelfRef.pwm_generator_tb__DOT__high_count 
                                            + vlSelfRef.pwm_generator_tb__DOT__low_count))));
        __Vlabel3: ;
    }
    vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle 
        = __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent;
    vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle = 25.0;
    VL_WRITEF_NX("  Expected: %0.1f%%, Measured: %0.1f%%\n",0,
                 64,vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle,
                 64,vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle);
    if (((vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle 
          > (vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle 
             - 3.0)) & (vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle 
                        < (3.0 + vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle)))) {
        VL_WRITEF_NX("  PASS\n",0);
    } else {
        VL_WRITEF_NX("  ERROR: Out of tolerance!\n",0);
    }
    vlSelfRef.pwm_generator_tb__DOT__j = 0x32U;
    vlSelfRef.pwm_generator_tb__DOT__duty = 0x32U;
    VL_WRITEF_NX("\n  Testing 50%% duty cycle...\n",0);
    pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x12cU;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             162);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    {
        vlSelfRef.pwm_generator_tb__DOT__high_count = 0U;
        vlSelfRef.pwm_generator_tb__DOT__low_count = 0U;
        vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout = 0U;
        if ((0U == (IData)(vlSelfRef.pwm_generator_tb__DOT__duty))) {
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = ((IData)(1U) + (IData)(vlSelfRef.pwm_generator_tb__DOT__period));
            while (VL_LTS_III(32, 0U, __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge pwm_generator_tb.clk)", 
                                                                     "pwm_generator_tb.v", 
                                                                     70);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                if ((1U & (~ (IData)(vlSelfRef.pwm_generator_tb__DOT__pwm_out)))) {
                    vlSelfRef.pwm_generator_tb__DOT__low_count 
                        = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__low_count);
                }
                __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent = 0.0;
            goto __Vlabel4;
        }
        if (((IData)(vlSelfRef.pwm_generator_tb__DOT__duty) 
             > (IData)(vlSelfRef.pwm_generator_tb__DOT__period))) {
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = ((IData)(1U) + (IData)(vlSelfRef.pwm_generator_tb__DOT__period));
            while (VL_LTS_III(32, 0U, __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge pwm_generator_tb.clk)", 
                                                                     "pwm_generator_tb.v", 
                                                                     81);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                if (vlSelfRef.pwm_generator_tb__DOT__pwm_out) {
                    vlSelfRef.pwm_generator_tb__DOT__high_count 
                        = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__high_count);
                }
                __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                    = (__Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                       - (IData)(1U));
            }
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent = 100.0;
            goto __Vlabel4;
        }
        while (((IData)(vlSelfRef.pwm_generator_tb__DOT__pwm_out) 
                & VL_GTS_III(32, 0x3e8U, vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout))) {
            co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge pwm_generator_tb.clk)", 
                                                                 "pwm_generator_tb.v", 
                                                                 91);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout 
                = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout);
        }
        if (VL_UNLIKELY((VL_LTES_III(32, 0x3e8U, vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout)))) {
            VL_WRITEF_NX("WARNING: Timeout waiting for PWM low\n",0);
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent = -1.0;
            goto __Vlabel4;
        }
        co_await vlSelfRef.__VtrigSched_h1f93b9e0__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.pwm_out)", 
                                                             "pwm_generator_tb.v", 
                                                             100);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.pwm_generator_tb__DOT__i = 0U;
        while ((vlSelfRef.pwm_generator_tb__DOT__i 
                <= (IData)(vlSelfRef.pwm_generator_tb__DOT__period))) {
            co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge pwm_generator_tb.clk)", 
                                                                 "pwm_generator_tb.v", 
                                                                 104);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            if (vlSelfRef.pwm_generator_tb__DOT__pwm_out) {
                vlSelfRef.pwm_generator_tb__DOT__high_count 
                    = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__high_count);
            } else {
                vlSelfRef.pwm_generator_tb__DOT__low_count 
                    = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__low_count);
            }
            vlSelfRef.pwm_generator_tb__DOT__i = ((IData)(1U) 
                                                  + vlSelfRef.pwm_generator_tb__DOT__i);
        }
        __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent 
            = (100.0 * (VL_ISTOR_D_I(32, vlSelfRef.pwm_generator_tb__DOT__high_count) 
                        / VL_ISTOR_D_I(32, (vlSelfRef.pwm_generator_tb__DOT__high_count 
                                            + vlSelfRef.pwm_generator_tb__DOT__low_count))));
        __Vlabel4: ;
    }
    vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle 
        = __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent;
    vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle = 50.0;
    VL_WRITEF_NX("  Expected: %0.1f%%, Measured: %0.1f%%\n",0,
                 64,vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle,
                 64,vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle);
    if (((vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle 
          > (vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle 
             - 3.0)) & (vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle 
                        < (3.0 + vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle)))) {
        VL_WRITEF_NX("  PASS\n",0);
    } else {
        VL_WRITEF_NX("  ERROR: Out of tolerance!\n",0);
    }
    vlSelfRef.pwm_generator_tb__DOT__j = 0x4bU;
    vlSelfRef.pwm_generator_tb__DOT__duty = 0x4bU;
    VL_WRITEF_NX("\n  Testing 75%% duty cycle...\n",0);
    pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x12cU;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             162);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    {
        vlSelfRef.pwm_generator_tb__DOT__high_count = 0U;
        vlSelfRef.pwm_generator_tb__DOT__low_count = 0U;
        vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout = 0U;
        if ((0U == (IData)(vlSelfRef.pwm_generator_tb__DOT__duty))) {
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = ((IData)(1U) + (IData)(vlSelfRef.pwm_generator_tb__DOT__period));
            while (VL_LTS_III(32, 0U, __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge pwm_generator_tb.clk)", 
                                                                     "pwm_generator_tb.v", 
                                                                     70);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                if ((1U & (~ (IData)(vlSelfRef.pwm_generator_tb__DOT__pwm_out)))) {
                    vlSelfRef.pwm_generator_tb__DOT__low_count 
                        = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__low_count);
                }
                __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent = 0.0;
            goto __Vlabel5;
        }
        if (((IData)(vlSelfRef.pwm_generator_tb__DOT__duty) 
             > (IData)(vlSelfRef.pwm_generator_tb__DOT__period))) {
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = ((IData)(1U) + (IData)(vlSelfRef.pwm_generator_tb__DOT__period));
            while (VL_LTS_III(32, 0U, __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge pwm_generator_tb.clk)", 
                                                                     "pwm_generator_tb.v", 
                                                                     81);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                if (vlSelfRef.pwm_generator_tb__DOT__pwm_out) {
                    vlSelfRef.pwm_generator_tb__DOT__high_count 
                        = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__high_count);
                }
                __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                    = (__Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                       - (IData)(1U));
            }
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent = 100.0;
            goto __Vlabel5;
        }
        while (((IData)(vlSelfRef.pwm_generator_tb__DOT__pwm_out) 
                & VL_GTS_III(32, 0x3e8U, vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout))) {
            co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge pwm_generator_tb.clk)", 
                                                                 "pwm_generator_tb.v", 
                                                                 91);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout 
                = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout);
        }
        if (VL_UNLIKELY((VL_LTES_III(32, 0x3e8U, vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout)))) {
            VL_WRITEF_NX("WARNING: Timeout waiting for PWM low\n",0);
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent = -1.0;
            goto __Vlabel5;
        }
        co_await vlSelfRef.__VtrigSched_h1f93b9e0__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.pwm_out)", 
                                                             "pwm_generator_tb.v", 
                                                             100);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.pwm_generator_tb__DOT__i = 0U;
        while ((vlSelfRef.pwm_generator_tb__DOT__i 
                <= (IData)(vlSelfRef.pwm_generator_tb__DOT__period))) {
            co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge pwm_generator_tb.clk)", 
                                                                 "pwm_generator_tb.v", 
                                                                 104);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            if (vlSelfRef.pwm_generator_tb__DOT__pwm_out) {
                vlSelfRef.pwm_generator_tb__DOT__high_count 
                    = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__high_count);
            } else {
                vlSelfRef.pwm_generator_tb__DOT__low_count 
                    = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__low_count);
            }
            vlSelfRef.pwm_generator_tb__DOT__i = ((IData)(1U) 
                                                  + vlSelfRef.pwm_generator_tb__DOT__i);
        }
        __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent 
            = (100.0 * (VL_ISTOR_D_I(32, vlSelfRef.pwm_generator_tb__DOT__high_count) 
                        / VL_ISTOR_D_I(32, (vlSelfRef.pwm_generator_tb__DOT__high_count 
                                            + vlSelfRef.pwm_generator_tb__DOT__low_count))));
        __Vlabel5: ;
    }
    vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle 
        = __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__3__duty_cycle_percent;
    vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle = 75.0;
    VL_WRITEF_NX("  Expected: %0.1f%%, Measured: %0.1f%%\n",0,
                 64,vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle,
                 64,vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle);
    if (((vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle 
          > (vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle 
             - 3.0)) & (vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle 
                        < (3.0 + vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle)))) {
        VL_WRITEF_NX("  PASS\n",0);
    } else {
        VL_WRITEF_NX("  ERROR: Out of tolerance!\n",0);
    }
    vlSelfRef.pwm_generator_tb__DOT__j = 0x64U;
    vlSelfRef.pwm_generator_tb__DOT__duty = 0x64U;
    VL_WRITEF_NX("\n  Testing 100%% duty cycle...\n",0);
    pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x12cU;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             162);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (pwm_generator_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    {
        vlSelfRef.pwm_generator_tb__DOT__high_count = 0U;
        vlSelfRef.pwm_generator_tb__DOT__low_count = 0U;
        vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout = 0U;
        if ((0U == (IData)(vlSelfRef.pwm_generator_tb__DOT__duty))) {
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = ((IData)(1U) + (IData)(vlSelfRef.pwm_generator_tb__DOT__period));
            while (VL_LTS_III(32, 0U, __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge pwm_generator_tb.clk)", 
                                                                     "pwm_generator_tb.v", 
                                                                     70);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                if ((1U & (~ (IData)(vlSelfRef.pwm_generator_tb__DOT__pwm_out)))) {
                    vlSelfRef.pwm_generator_tb__DOT__low_count 
                        = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__low_count);
                }
                __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__duty_cycle_percent = 0.0;
            goto __Vlabel6;
        }
        if (((IData)(vlSelfRef.pwm_generator_tb__DOT__duty) 
             > (IData)(vlSelfRef.pwm_generator_tb__DOT__period))) {
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = ((IData)(1U) + (IData)(vlSelfRef.pwm_generator_tb__DOT__period));
            while (VL_LTS_III(32, 0U, __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge pwm_generator_tb.clk)", 
                                                                     "pwm_generator_tb.v", 
                                                                     81);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                if (vlSelfRef.pwm_generator_tb__DOT__pwm_out) {
                    vlSelfRef.pwm_generator_tb__DOT__high_count 
                        = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__high_count);
                }
                __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                    = (__Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__pwm_generator_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
                       - (IData)(1U));
            }
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__duty_cycle_percent = 100.0;
            goto __Vlabel6;
        }
        while (((IData)(vlSelfRef.pwm_generator_tb__DOT__pwm_out) 
                & VL_GTS_III(32, 0x3e8U, vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout))) {
            co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge pwm_generator_tb.clk)", 
                                                                 "pwm_generator_tb.v", 
                                                                 91);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout 
                = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout);
        }
        if (VL_UNLIKELY((VL_LTES_III(32, 0x3e8U, vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout)))) {
            VL_WRITEF_NX("WARNING: Timeout waiting for PWM low\n",0);
            __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__duty_cycle_percent = -1.0;
            goto __Vlabel6;
        }
        co_await vlSelfRef.__VtrigSched_h1f93b9e0__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.pwm_out)", 
                                                             "pwm_generator_tb.v", 
                                                             100);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.pwm_generator_tb__DOT__i = 0U;
        while ((vlSelfRef.pwm_generator_tb__DOT__i 
                <= (IData)(vlSelfRef.pwm_generator_tb__DOT__period))) {
            co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge pwm_generator_tb.clk)", 
                                                                 "pwm_generator_tb.v", 
                                                                 104);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            if (vlSelfRef.pwm_generator_tb__DOT__pwm_out) {
                vlSelfRef.pwm_generator_tb__DOT__high_count 
                    = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__high_count);
            } else {
                vlSelfRef.pwm_generator_tb__DOT__low_count 
                    = ((IData)(1U) + vlSelfRef.pwm_generator_tb__DOT__low_count);
            }
            vlSelfRef.pwm_generator_tb__DOT__i = ((IData)(1U) 
                                                  + vlSelfRef.pwm_generator_tb__DOT__i);
        }
        __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__duty_cycle_percent 
            = (100.0 * (VL_ISTOR_D_I(32, vlSelfRef.pwm_generator_tb__DOT__high_count) 
                        / VL_ISTOR_D_I(32, (vlSelfRef.pwm_generator_tb__DOT__high_count 
                                            + vlSelfRef.pwm_generator_tb__DOT__low_count))));
        __Vlabel6: ;
    }
    vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle 
        = __Vtask_pwm_generator_tb__DOT__measure_duty_cycle__2__duty_cycle_percent;
    vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle = 100.0;
    VL_WRITEF_NX("  Expected: %0.1f%%, Measured: %0.1f%%\n  PASS\n",0,
                 64,vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle,
                 64,vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle);
    vlSelfRef.pwm_generator_tb__DOT__j = 0x7dU;
    vlSelfRef.pwm_generator_tb__DOT__test_case = ((IData)(1U) 
                                                  + vlSelfRef.pwm_generator_tb__DOT__test_case);
    VL_WRITEF_NX("\nTest %0d: Disable PWM\n",0,32,vlSelfRef.pwm_generator_tb__DOT__test_case);
    vlSelfRef.pwm_generator_tb__DOT__enable = 0U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge pwm_generator_tb.clk)", 
                                                         "pwm_generator_tb.v", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSelfRef.pwm_generator_tb__DOT__pwm_out) {
        VL_WRITEF_NX("ERROR: PWM output not 0 when disabled!\n",0);
    } else {
        VL_WRITEF_NX("PASS: PWM output correctly disabled\n",0);
    }
    vlSelfRef.pwm_generator_tb__DOT__test_case = ((IData)(1U) 
                                                  + vlSelfRef.pwm_generator_tb__DOT__test_case);
    VL_WRITEF_NX("\nTest %0d: Dynamic duty cycle changes\n",0,
                 32,vlSelfRef.pwm_generator_tb__DOT__test_case);
    vlSelfRef.pwm_generator_tb__DOT__enable = 1U;
    vlSelfRef.pwm_generator_tb__DOT__period = 0xffU;
    VL_WRITEF_NX("  Ramping up duty cycle...\n",0);
    vlSelfRef.pwm_generator_tb__DOT__duty = 0U;
    pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x200U;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             206);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    vlSelfRef.pwm_generator_tb__DOT__i = 0x33U;
    vlSelfRef.pwm_generator_tb__DOT__duty = 0x33U;
    pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x200U;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             206);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    vlSelfRef.pwm_generator_tb__DOT__i = 0x66U;
    vlSelfRef.pwm_generator_tb__DOT__duty = 0x66U;
    pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x200U;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             206);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    vlSelfRef.pwm_generator_tb__DOT__i = 0x99U;
    vlSelfRef.pwm_generator_tb__DOT__duty = 0x99U;
    pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x200U;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             206);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    vlSelfRef.pwm_generator_tb__DOT__i = 0xccU;
    vlSelfRef.pwm_generator_tb__DOT__duty = 0xccU;
    pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x200U;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             206);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    vlSelfRef.pwm_generator_tb__DOT__i = 0xffU;
    vlSelfRef.pwm_generator_tb__DOT__duty = 0xffU;
    pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x200U;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             206);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (pwm_generator_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    vlSelfRef.pwm_generator_tb__DOT__i = 0x132U;
    VL_WRITEF_NX("  Ramping down duty cycle...\n",0);
    vlSelfRef.pwm_generator_tb__DOT__duty = 0xffU;
    pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0x200U;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             213);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    vlSelfRef.pwm_generator_tb__DOT__i = 0xccU;
    vlSelfRef.pwm_generator_tb__DOT__duty = 0xccU;
    pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0x200U;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             213);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    vlSelfRef.pwm_generator_tb__DOT__i = 0x99U;
    vlSelfRef.pwm_generator_tb__DOT__duty = 0x99U;
    pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0x200U;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             213);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    vlSelfRef.pwm_generator_tb__DOT__i = 0x66U;
    vlSelfRef.pwm_generator_tb__DOT__duty = 0x66U;
    pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0x200U;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             213);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    vlSelfRef.pwm_generator_tb__DOT__i = 0x33U;
    vlSelfRef.pwm_generator_tb__DOT__duty = 0x33U;
    pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0x200U;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             213);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    vlSelfRef.pwm_generator_tb__DOT__i = 0U;
    vlSelfRef.pwm_generator_tb__DOT__duty = 0U;
    pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0x200U;
    while (VL_LTS_III(32, 0U, pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        co_await vlSelfRef.__VtrigSched_h5d7703a5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge pwm_generator_tb.clk)", 
                                                             "pwm_generator_tb.v", 
                                                             213);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (pwm_generator_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    vlSelfRef.pwm_generator_tb__DOT__i = 0xffffffcdU;
    VL_WRITEF_NX("PASS: Dynamic duty cycle test completed\n",0);
    vlSelfRef.pwm_generator_tb__DOT__test_case = ((IData)(1U) 
                                                  + vlSelfRef.pwm_generator_tb__DOT__test_case);
    VL_WRITEF_NX("\n=================================\nPWM Generator Tests Completed\nTotal test cases: %0d\n=================================\n\n",0,
                 32,vlSelfRef.pwm_generator_tb__DOT__test_case);
    VL_FINISH_MT("pwm_generator_tb.v", 224, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpwm_generator_tb___024root___dump_triggers__act(Vpwm_generator_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vpwm_generator_tb___024root___eval_triggers__act(Vpwm_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root___eval_triggers__act\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.pwm_generator_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pwm_generator_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.pwm_generator_tb__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pwm_generator_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.pwm_generator_tb__DOT__pwm_out) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pwm_generator_tb__DOT__pwm_out__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__pwm_generator_tb__DOT__clk__0 
        = vlSelfRef.pwm_generator_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__pwm_generator_tb__DOT__rst_n__0 
        = vlSelfRef.pwm_generator_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__pwm_generator_tb__DOT__pwm_out__0 
        = vlSelfRef.pwm_generator_tb__DOT__pwm_out;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpwm_generator_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
