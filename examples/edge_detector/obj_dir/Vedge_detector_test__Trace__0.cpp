// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vedge_detector_test__Syms.h"


void Vedge_detector_test___024root__trace_chg_0_sub_0(Vedge_detector_test___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vedge_detector_test___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root__trace_chg_0\n"); );
    // Init
    Vedge_detector_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vedge_detector_test___024root*>(voidSelf);
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vedge_detector_test___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vedge_detector_test___024root__trace_chg_0_sub_0(Vedge_detector_test___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root__trace_chg_0_sub_0\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.edge_detector_test__DOT__rising_edge));
        bufp->chgBit(oldp+1,(vlSelfRef.edge_detector_test__DOT__falling_edge));
        bufp->chgBit(oldp+2,(vlSelfRef.edge_detector_test__DOT__any_edge));
        bufp->chgBit(oldp+3,(vlSelfRef.edge_detector_test__DOT__dut__DOT__signal_prev));
    }
    bufp->chgBit(oldp+4,(vlSelfRef.edge_detector_test__DOT__clk));
    bufp->chgBit(oldp+5,(vlSelfRef.edge_detector_test__DOT__rst));
    bufp->chgBit(oldp+6,(vlSelfRef.edge_detector_test__DOT__signal_in));
    bufp->chgIData(oldp+7,(vlSelfRef.edge_detector_test__DOT__i),32);
}

void Vedge_detector_test___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root__trace_cleanup\n"); );
    // Init
    Vedge_detector_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vedge_detector_test___024root*>(voidSelf);
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
