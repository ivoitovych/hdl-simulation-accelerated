// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpwm_generator_tb__Syms.h"


VL_ATTR_COLD void Vpwm_generator_tb___024root__trace_init_sub__TOP__0(Vpwm_generator_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root__trace_init_sub__TOP__0\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("pwm_generator_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"duty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+16,0,"pwm_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"test_case",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+6,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+7,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+8,0,"high_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+9,0,"low_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declDouble(c+10,0,"measured_duty_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+12,0,"expected_duty_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+14,0,"measure_duty_cycle__Vstatic__timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"CLK_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"duty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"period",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+16,0,"pwm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"pwm_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"clk_div_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+22,0,"pwm_clk_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpwm_generator_tb___024root__trace_init_top(Vpwm_generator_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root__trace_init_top\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpwm_generator_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpwm_generator_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vpwm_generator_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpwm_generator_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpwm_generator_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpwm_generator_tb___024root__trace_register(Vpwm_generator_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root__trace_register\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vpwm_generator_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vpwm_generator_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vpwm_generator_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vpwm_generator_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpwm_generator_tb___024root__trace_const_0_sub_0(Vpwm_generator_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpwm_generator_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root__trace_const_0\n"); );
    // Init
    Vpwm_generator_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpwm_generator_tb___024root*>(voidSelf);
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpwm_generator_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpwm_generator_tb___024root__trace_const_0_sub_0(Vpwm_generator_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root__trace_const_0_sub_0\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+18,(8U),32);
    bufp->fullIData(oldp+19,(1U),32);
    bufp->fullIData(oldp+20,(0xaU),32);
    bufp->fullBit(oldp+21,(vlSelfRef.pwm_generator_tb__DOT__dut__DOT__clk_div_counter));
    bufp->fullBit(oldp+22,(1U));
}

VL_ATTR_COLD void Vpwm_generator_tb___024root__trace_full_0_sub_0(Vpwm_generator_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpwm_generator_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root__trace_full_0\n"); );
    // Init
    Vpwm_generator_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpwm_generator_tb___024root*>(voidSelf);
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpwm_generator_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpwm_generator_tb___024root__trace_full_0_sub_0(Vpwm_generator_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm_generator_tb___024root__trace_full_0_sub_0\n"); );
    Vpwm_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.pwm_generator_tb__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.pwm_generator_tb__DOT__enable));
    bufp->fullCData(oldp+3,(vlSelfRef.pwm_generator_tb__DOT__duty),8);
    bufp->fullCData(oldp+4,(vlSelfRef.pwm_generator_tb__DOT__period),8);
    bufp->fullIData(oldp+5,(vlSelfRef.pwm_generator_tb__DOT__test_case),32);
    bufp->fullIData(oldp+6,(vlSelfRef.pwm_generator_tb__DOT__i),32);
    bufp->fullIData(oldp+7,(vlSelfRef.pwm_generator_tb__DOT__j),32);
    bufp->fullIData(oldp+8,(vlSelfRef.pwm_generator_tb__DOT__high_count),32);
    bufp->fullIData(oldp+9,(vlSelfRef.pwm_generator_tb__DOT__low_count),32);
    bufp->fullDouble(oldp+10,(vlSelfRef.pwm_generator_tb__DOT__measured_duty_cycle));
    bufp->fullDouble(oldp+12,(vlSelfRef.pwm_generator_tb__DOT__expected_duty_cycle));
    bufp->fullIData(oldp+14,(vlSelfRef.pwm_generator_tb__DOT__measure_duty_cycle__Vstatic__timeout),32);
    bufp->fullBit(oldp+15,(vlSelfRef.pwm_generator_tb__DOT__clk));
    bufp->fullBit(oldp+16,(vlSelfRef.pwm_generator_tb__DOT__pwm_out));
    bufp->fullCData(oldp+17,(vlSelfRef.pwm_generator_tb__DOT__dut__DOT__pwm_counter),8);
}
