// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vserial_crc32_generator_tb__Syms.h"


VL_ATTR_COLD void Vserial_crc32_generator_tb___024root__trace_init_sub__TOP__0(Vserial_crc32_generator_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root__trace_init_sub__TOP__0\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("serial_crc32_generator_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"new_message",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"crc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"test_case",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+6,0,"error_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+7,0,"expected_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("test_data_bytes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+24,0,"total_test_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+25,0,"send_byte__Vstatic__bit_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+26,0,"send_test_message__Vstatic__byte_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+27,0,"initialize_test_data__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"new_message",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"CRC_POLY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"crc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vserial_crc32_generator_tb___024root__trace_init_top(Vserial_crc32_generator_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root__trace_init_top\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vserial_crc32_generator_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vserial_crc32_generator_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vserial_crc32_generator_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vserial_crc32_generator_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vserial_crc32_generator_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vserial_crc32_generator_tb___024root__trace_register(Vserial_crc32_generator_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root__trace_register\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vserial_crc32_generator_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vserial_crc32_generator_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vserial_crc32_generator_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vserial_crc32_generator_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vserial_crc32_generator_tb___024root__trace_const_0_sub_0(Vserial_crc32_generator_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vserial_crc32_generator_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root__trace_const_0\n"); );
    // Init
    Vserial_crc32_generator_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vserial_crc32_generator_tb___024root*>(voidSelf);
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vserial_crc32_generator_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vserial_crc32_generator_tb___024root__trace_const_0_sub_0(Vserial_crc32_generator_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root__trace_const_0_sub_0\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+31,(0xaU),32);
    bufp->fullIData(oldp+32,(0xedb88320U),32);
}

VL_ATTR_COLD void Vserial_crc32_generator_tb___024root__trace_full_0_sub_0(Vserial_crc32_generator_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vserial_crc32_generator_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root__trace_full_0\n"); );
    // Init
    Vserial_crc32_generator_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vserial_crc32_generator_tb___024root*>(voidSelf);
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vserial_crc32_generator_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vserial_crc32_generator_tb___024root__trace_full_0_sub_0(Vserial_crc32_generator_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root__trace_full_0_sub_0\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.serial_crc32_generator_tb__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.serial_crc32_generator_tb__DOT__enable));
    bufp->fullBit(oldp+3,(vlSelfRef.serial_crc32_generator_tb__DOT__data_in));
    bufp->fullBit(oldp+4,(vlSelfRef.serial_crc32_generator_tb__DOT__new_message));
    bufp->fullIData(oldp+5,(vlSelfRef.serial_crc32_generator_tb__DOT__test_case),32);
    bufp->fullIData(oldp+6,(vlSelfRef.serial_crc32_generator_tb__DOT__error_count),32);
    bufp->fullIData(oldp+7,(vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc),32);
    bufp->fullCData(oldp+8,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[0]),8);
    bufp->fullCData(oldp+9,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[1]),8);
    bufp->fullCData(oldp+10,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[2]),8);
    bufp->fullCData(oldp+11,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[3]),8);
    bufp->fullCData(oldp+12,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[4]),8);
    bufp->fullCData(oldp+13,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[5]),8);
    bufp->fullCData(oldp+14,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[6]),8);
    bufp->fullCData(oldp+15,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[7]),8);
    bufp->fullCData(oldp+16,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[8]),8);
    bufp->fullCData(oldp+17,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[9]),8);
    bufp->fullCData(oldp+18,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[10]),8);
    bufp->fullCData(oldp+19,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[11]),8);
    bufp->fullCData(oldp+20,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[12]),8);
    bufp->fullCData(oldp+21,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[13]),8);
    bufp->fullCData(oldp+22,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[14]),8);
    bufp->fullCData(oldp+23,(vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[15]),8);
    bufp->fullIData(oldp+24,(vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes),32);
    bufp->fullIData(oldp+25,(vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx),32);
    bufp->fullIData(oldp+26,(vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx),32);
    bufp->fullIData(oldp+27,(vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i),32);
    bufp->fullBit(oldp+28,(vlSelfRef.serial_crc32_generator_tb__DOT__clk));
    bufp->fullIData(oldp+29,(vlSelfRef.serial_crc32_generator_tb__DOT__crc_out),32);
    bufp->fullIData(oldp+30,(vlSelfRef.serial_crc32_generator_tb__DOT__dut__DOT__crc_reg),32);
}
