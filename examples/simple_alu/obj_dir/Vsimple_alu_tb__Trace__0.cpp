// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimple_alu_tb__Syms.h"


void Vsimple_alu_tb___024root__trace_chg_0_sub_0(Vsimple_alu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsimple_alu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root__trace_chg_0\n"); );
    // Init
    Vsimple_alu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_alu_tb___024root*>(voidSelf);
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsimple_alu_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsimple_alu_tb___024root__trace_chg_0_sub_0(Vsimple_alu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root__trace_chg_0_sub_0\n"); );
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.simple_alu_tb__DOT__rst_n));
        bufp->chgCData(oldp+1,(vlSelfRef.simple_alu_tb__DOT__a),8);
        bufp->chgCData(oldp+2,(vlSelfRef.simple_alu_tb__DOT__b),8);
        bufp->chgCData(oldp+3,(vlSelfRef.simple_alu_tb__DOT__opcode),4);
        bufp->chgBit(oldp+4,(vlSelfRef.simple_alu_tb__DOT__execute));
        bufp->chgIData(oldp+5,(vlSelfRef.simple_alu_tb__DOT__test_count),32);
        bufp->chgIData(oldp+6,(vlSelfRef.simple_alu_tb__DOT__error_count),32);
        bufp->chgIData(oldp+7,(vlSelfRef.simple_alu_tb__DOT__execute_op__Vstatic__timeout),32);
        bufp->chgCData(oldp+8,((0xffU & (~ (IData)(vlSelfRef.simple_alu_tb__DOT__a)))),8);
        bufp->chgCData(oldp+9,((0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.simple_alu_tb__DOT__a), 1U))),8);
        bufp->chgCData(oldp+10,((0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.simple_alu_tb__DOT__a), 1U))),8);
        bufp->chgSData(oldp+11,((0xffffU & ((IData)(vlSelfRef.simple_alu_tb__DOT__a) 
                                            * (IData)(vlSelfRef.simple_alu_tb__DOT__b)))),16);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgSData(oldp+12,(vlSelfRef.simple_alu_tb__DOT__dut__DOT__add_result),9);
        bufp->chgSData(oldp+13,(vlSelfRef.simple_alu_tb__DOT__dut__DOT__sub_result),9);
        bufp->chgCData(oldp+14,(vlSelfRef.simple_alu_tb__DOT__dut__DOT__and_result),8);
        bufp->chgCData(oldp+15,(vlSelfRef.simple_alu_tb__DOT__dut__DOT__or_result),8);
        bufp->chgCData(oldp+16,(vlSelfRef.simple_alu_tb__DOT__dut__DOT__xor_result),8);
        bufp->chgCData(oldp+17,(vlSelfRef.simple_alu_tb__DOT__dut__DOT__mul_result),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+18,(vlSelfRef.simple_alu_tb__DOT__result),8);
        bufp->chgCData(oldp+19,(vlSelfRef.simple_alu_tb__DOT__flags),4);
        bufp->chgBit(oldp+20,(vlSelfRef.simple_alu_tb__DOT__done));
        bufp->chgBit(oldp+21,(vlSelfRef.simple_alu_tb__DOT__dut__DOT__execute_prev));
    }
    bufp->chgBit(oldp+22,(vlSelfRef.simple_alu_tb__DOT__clk));
    bufp->chgBit(oldp+23,(vlSelfRef.simple_alu_tb__DOT__dut__DOT__execute_edge));
}

void Vsimple_alu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_alu_tb___024root__trace_cleanup\n"); );
    // Init
    Vsimple_alu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_alu_tb___024root*>(voidSelf);
    Vsimple_alu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
