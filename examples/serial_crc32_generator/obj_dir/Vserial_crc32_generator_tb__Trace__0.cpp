// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vserial_crc32_generator_tb__Syms.h"


void Vserial_crc32_generator_tb___024root__trace_chg_0_sub_0(Vserial_crc32_generator_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vserial_crc32_generator_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root__trace_chg_0\n"); );
    // Init
    Vserial_crc32_generator_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vserial_crc32_generator_tb___024root*>(voidSelf);
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vserial_crc32_generator_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vserial_crc32_generator_tb___024root__trace_chg_0_sub_0(Vserial_crc32_generator_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root__trace_chg_0_sub_0\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.serial_crc32_generator_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.serial_crc32_generator_tb__DOT__enable));
        bufp->chgBit(oldp+2,(vlSelfRef.serial_crc32_generator_tb__DOT__data_in));
        bufp->chgBit(oldp+3,(vlSelfRef.serial_crc32_generator_tb__DOT__new_message));
        bufp->chgIData(oldp+4,(vlSelfRef.serial_crc32_generator_tb__DOT__test_case),32);
        bufp->chgIData(oldp+5,(vlSelfRef.serial_crc32_generator_tb__DOT__error_count),32);
        bufp->chgIData(oldp+6,(vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc),32);
        bufp->chgCData(oldp+7,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[0]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[1]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[2]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[3]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[4]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[5]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[6]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[7]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[8]),8);
        bufp->chgCData(oldp+16,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[9]),8);
        bufp->chgCData(oldp+17,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[10]),8);
        bufp->chgCData(oldp+18,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[11]),8);
        bufp->chgCData(oldp+19,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[12]),8);
        bufp->chgCData(oldp+20,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[13]),8);
        bufp->chgCData(oldp+21,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[14]),8);
        bufp->chgCData(oldp+22,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[15]),8);
        bufp->chgIData(oldp+23,(vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes),32);
        bufp->chgIData(oldp+24,(vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx),32);
        bufp->chgIData(oldp+25,(vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx),32);
        bufp->chgIData(oldp+26,(vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i),32);
    }
    bufp->chgBit(oldp+27,(vlSelfRef.serial_crc32_generator_tb__DOT__clk));
    bufp->chgIData(oldp+28,(vlSelfRef.serial_crc32_generator_tb__DOT__crc_out),32);
    bufp->chgIData(oldp+29,(vlSelfRef.serial_crc32_generator_tb__DOT__dut__DOT__crc_reg),32);
}

void Vserial_crc32_generator_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root__trace_cleanup\n"); );
    // Init
    Vserial_crc32_generator_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vserial_crc32_generator_tb___024root*>(voidSelf);
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
