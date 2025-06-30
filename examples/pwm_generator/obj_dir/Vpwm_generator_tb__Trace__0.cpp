// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpwm_generator_tb__Syms.h"


void Vpwm_generator_tb___024root__trace_chg_0_sub_0(Vpwm_generator_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpwm_generator_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root__trace_chg_0\n"); );
    // Init
    Vpwm_generator_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpwm_generator_tb___024root*>(voidSelf);
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpwm_generator_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpwm_generator_tb___024root__trace_chg_0_sub_0(Vpwm_generator_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root__trace_chg_0_sub_0\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.pwm_generator_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.pwm_generator_tb__DOT__enable));
        bufp->chgCData(oldp+2,(vlSelfRef.pwm_generator_tb__DOT__duty),8);
        bufp->chgCData(oldp+3,(vlSelfRef.pwm_generator_tb__DOT__period),8);
        bufp->chgIData(oldp+4,(vlSelfRef.pwm_generator_tb__DOT__test_case),32);
        bufp->chgIData(oldp+5,(vlSelfRef.pwm_generator_tb__DOT__i),32);
        bufp->chgIData(oldp+6,(vlSelfRef.pwm_generator_tb__DOT__j),32);
        bufp->chgIData(oldp+7,(vlSelfRef.pwm_generator_tb__DOT__high_count),32);
        bufp->chgIData(oldp+8,(vlSelfRef.pwm_generator_tb__DOT__low_count),32);
        bufp->chgDouble(oldp+9,(vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle));
        bufp->chgDouble(oldp+11,(vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle));
        bufp->chgIData(oldp+13,(vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout),32);
    }
    bufp->chgBit(oldp+14,(vlSelfRef.pwm_generator_tb__DOT__clk));
    bufp->chgBit(oldp+15,(vlSelfRef.pwm_generator_tb__DOT__pwm_out));
    bufp->chgCData(oldp+16,(vlSelfRef.pwm_generator_tb__DOT__dut__DOT__pwm_counter),8);
}

void Vpwm_generator_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root__trace_cleanup\n"); );
    // Init
    Vpwm_generator_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpwm_generator_tb___024root*>(voidSelf);
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
