// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcounter_8bit_test__Syms.h"


void Vcounter_8bit_test___024root__trace_chg_0_sub_0(Vcounter_8bit_test___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcounter_8bit_test___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root__trace_chg_0\n"); );
    // Init
    Vcounter_8bit_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter_8bit_test___024root*>(voidSelf);
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcounter_8bit_test___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcounter_8bit_test___024root__trace_chg_0_sub_0(Vcounter_8bit_test___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root__trace_chg_0_sub_0\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.counter_8bit_test__DOT__clk));
        bufp->chgBit(oldp+1,(vlSelfRef.counter_8bit_test__DOT__rst));
        bufp->chgBit(oldp+2,(vlSelfRef.counter_8bit_test__DOT__enable));
        bufp->chgBit(oldp+3,(vlSelfRef.counter_8bit_test__DOT__load));
        bufp->chgCData(oldp+4,(vlSelfRef.counter_8bit_test__DOT__load_value),8);
        bufp->chgIData(oldp+5,(vlSelfRef.counter_8bit_test__DOT__i),32);
    }
    bufp->chgCData(oldp+6,(vlSelfRef.counter_8bit_test__DOT__count),8);
    bufp->chgBit(oldp+7,(((IData)(vlSelfRef.counter_8bit_test__DOT__enable) 
                          & ((~ (IData)(vlSelfRef.counter_8bit_test__DOT__load)) 
                             & (0xffU == (IData)(vlSelfRef.counter_8bit_test__DOT__count))))));
    bufp->chgBit(oldp+8,(((IData)(vlSelfRef.counter_8bit_test__DOT__enable) 
                          & ((~ (IData)(vlSelfRef.counter_8bit_test__DOT__load)) 
                             & (0U == (IData)(vlSelfRef.counter_8bit_test__DOT__count))))));
}

void Vcounter_8bit_test___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root__trace_cleanup\n"); );
    // Init
    Vcounter_8bit_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter_8bit_test___024root*>(voidSelf);
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
