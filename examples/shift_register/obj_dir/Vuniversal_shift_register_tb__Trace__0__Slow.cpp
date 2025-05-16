// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuniversal_shift_register_tb__Syms.h"


VL_ATTR_COLD void Vuniversal_shift_register_tb___024root__trace_init_sub__TOP__0(Vuniversal_shift_register_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root__trace_init_sub__TOP__0\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("universal_shift_register_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+4,0,"serial_in_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"serial_in_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"parallel_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"test_case",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+8,0,"error_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+9,0,"expected_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"seed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+12,0,"bit_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"create_alternating_pattern__Vstatic__pattern",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"create_alternating_pattern__Vstatic__j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+4,0,"serial_in_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"serial_in_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"parallel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"HOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+21,0,"SHIFT_RIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+22,0,"SHIFT_LEFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root__trace_init_top(Vuniversal_shift_register_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root__trace_init_top\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuniversal_shift_register_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vuniversal_shift_register_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vuniversal_shift_register_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vuniversal_shift_register_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root__trace_register(Vuniversal_shift_register_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root__trace_register\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vuniversal_shift_register_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vuniversal_shift_register_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vuniversal_shift_register_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vuniversal_shift_register_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root__trace_const_0_sub_0(Vuniversal_shift_register_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root__trace_const_0\n"); );
    // Init
    Vuniversal_shift_register_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuniversal_shift_register_tb___024root*>(voidSelf);
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vuniversal_shift_register_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root__trace_const_0_sub_0(Vuniversal_shift_register_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root__trace_const_0_sub_0\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+18,(8U),32);
    bufp->fullIData(oldp+19,(0xaU),32);
    bufp->fullCData(oldp+20,(0U),2);
    bufp->fullCData(oldp+21,(1U),2);
    bufp->fullCData(oldp+22,(2U),2);
    bufp->fullCData(oldp+23,(3U),2);
}

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root__trace_full_0_sub_0(Vuniversal_shift_register_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root__trace_full_0\n"); );
    // Init
    Vuniversal_shift_register_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuniversal_shift_register_tb___024root*>(voidSelf);
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vuniversal_shift_register_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vuniversal_shift_register_tb___024root__trace_full_0_sub_0(Vuniversal_shift_register_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root__trace_full_0_sub_0\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.universal_shift_register_tb__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.universal_shift_register_tb__DOT__enable));
    bufp->fullCData(oldp+3,(vlSelfRef.universal_shift_register_tb__DOT__mode),2);
    bufp->fullBit(oldp+4,(vlSelfRef.universal_shift_register_tb__DOT__serial_in_right));
    bufp->fullBit(oldp+5,(vlSelfRef.universal_shift_register_tb__DOT__serial_in_left));
    bufp->fullCData(oldp+6,(vlSelfRef.universal_shift_register_tb__DOT__parallel_in),8);
    bufp->fullIData(oldp+7,(vlSelfRef.universal_shift_register_tb__DOT__test_case),32);
    bufp->fullIData(oldp+8,(vlSelfRef.universal_shift_register_tb__DOT__error_count),32);
    bufp->fullCData(oldp+9,(vlSelfRef.universal_shift_register_tb__DOT__expected_q),8);
    bufp->fullIData(oldp+10,(vlSelfRef.universal_shift_register_tb__DOT__seed),32);
    bufp->fullIData(oldp+11,(vlSelfRef.universal_shift_register_tb__DOT__i),32);
    bufp->fullBit(oldp+12,(vlSelfRef.universal_shift_register_tb__DOT__bit_val));
    bufp->fullCData(oldp+13,(vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__pattern),8);
    bufp->fullIData(oldp+14,(vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__j),32);
    bufp->fullIData(oldp+15,(vlSelfRef.universal_shift_register_tb__DOT__unnamedblk1__DOT__j),32);
    bufp->fullBit(oldp+16,(vlSelfRef.universal_shift_register_tb__DOT__clk));
    bufp->fullCData(oldp+17,(vlSelfRef.universal_shift_register_tb__DOT__q),8);
}
