// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vminimal_divider_sim__Syms.h"


void Vminimal_divider_sim___024root__trace_chg_0_sub_0(Vminimal_divider_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vminimal_divider_sim___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root__trace_chg_0\n"); );
    // Init
    Vminimal_divider_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminimal_divider_sim___024root*>(voidSelf);
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vminimal_divider_sim___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vminimal_divider_sim___024root__trace_chg_0_sub_0(Vminimal_divider_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root__trace_chg_0_sub_0\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.minimal_divider_sim__DOT__div1));
        bufp->chgBit(oldp+1,(vlSelfRef.minimal_divider_sim__DOT__div2));
        bufp->chgBit(oldp+2,(vlSelfRef.minimal_divider_sim__DOT__div3));
        bufp->chgBit(oldp+3,(vlSelfRef.minimal_divider_sim__DOT__div4));
        bufp->chgIData(oldp+4,(vlSelfRef.minimal_divider_sim__DOT__i),32);
    }
    bufp->chgBit(oldp+5,(vlSelfRef.minimal_divider_sim__DOT__clk));
    bufp->chgBit(oldp+6,(vlSelfRef.minimal_divider_sim__DOT__rst));
}

void Vminimal_divider_sim___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root__trace_cleanup\n"); );
    // Init
    Vminimal_divider_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminimal_divider_sim___024root*>(voidSelf);
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
