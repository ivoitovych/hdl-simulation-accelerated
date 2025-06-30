// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuart_tx_basic_tb__Syms.h"


void Vuart_tx_basic_tb___024root__trace_chg_0_sub_0(Vuart_tx_basic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vuart_tx_basic_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root__trace_chg_0\n"); );
    // Init
    Vuart_tx_basic_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tx_basic_tb___024root*>(voidSelf);
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vuart_tx_basic_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vuart_tx_basic_tb___024root__trace_chg_0_sub_0(Vuart_tx_basic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root__trace_chg_0_sub_0\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.uart_tx_basic_tb__DOT__tx));
        bufp->chgBit(oldp+1,(vlSelfRef.uart_tx_basic_tb__DOT__busy));
        bufp->chgCData(oldp+2,(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__state),3);
        bufp->chgSData(oldp+3,(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__clk_counter),9);
        bufp->chgCData(oldp+4,(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__bit_index),3);
        bufp->chgCData(oldp+5,(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__data_reg),8);
        bufp->chgBit(oldp+6,((0x1b1U == (IData)(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__clk_counter))));
    }
    bufp->chgBit(oldp+7,(vlSelfRef.uart_tx_basic_tb__DOT__clk));
    bufp->chgBit(oldp+8,(vlSelfRef.uart_tx_basic_tb__DOT__rst_n));
    bufp->chgCData(oldp+9,(vlSelfRef.uart_tx_basic_tb__DOT__data_in),8);
    bufp->chgBit(oldp+10,(vlSelfRef.uart_tx_basic_tb__DOT__start));
    bufp->chgIData(oldp+11,(vlSelfRef.uart_tx_basic_tb__DOT__test_num),32);
    bufp->chgCData(oldp+12,(vlSelfRef.uart_tx_basic_tb__DOT__received_data),8);
    bufp->chgIData(oldp+13,(vlSelfRef.uart_tx_basic_tb__DOT__bit_count),32);
    bufp->chgIData(oldp+14,(vlSelfRef.uart_tx_basic_tb__DOT__i),32);
}

void Vuart_tx_basic_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root__trace_cleanup\n"); );
    // Init
    Vuart_tx_basic_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tx_basic_tb___024root*>(voidSelf);
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
