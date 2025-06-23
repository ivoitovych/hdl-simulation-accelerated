// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vedge_detector_test__Syms.h"


VL_ATTR_COLD void Vedge_detector_test___024root__trace_init_sub__TOP__0(Vedge_detector_test___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root__trace_init_sub__TOP__0\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("edge_detector_test", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+5,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"signal_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rising_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"falling_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"any_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+5,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"signal_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rising_edge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"falling_edge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"any_edge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"signal_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vedge_detector_test___024root__trace_init_top(Vedge_detector_test___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root__trace_init_top\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vedge_detector_test___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vedge_detector_test___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vedge_detector_test___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vedge_detector_test___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vedge_detector_test___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vedge_detector_test___024root__trace_register(Vedge_detector_test___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root__trace_register\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vedge_detector_test___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vedge_detector_test___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vedge_detector_test___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vedge_detector_test___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vedge_detector_test___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root__trace_const_0\n"); );
    // Init
    Vedge_detector_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vedge_detector_test___024root*>(voidSelf);
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vedge_detector_test___024root__trace_full_0_sub_0(Vedge_detector_test___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vedge_detector_test___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root__trace_full_0\n"); );
    // Init
    Vedge_detector_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vedge_detector_test___024root*>(voidSelf);
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vedge_detector_test___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vedge_detector_test___024root__trace_full_0_sub_0(Vedge_detector_test___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_detector_test___024root__trace_full_0_sub_0\n"); );
    Vedge_detector_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.edge_detector_test__DOT__rising_edge));
    bufp->fullBit(oldp+2,(vlSelfRef.edge_detector_test__DOT__falling_edge));
    bufp->fullBit(oldp+3,(vlSelfRef.edge_detector_test__DOT__any_edge));
    bufp->fullBit(oldp+4,(vlSelfRef.edge_detector_test__DOT__dut__DOT__signal_prev));
    bufp->fullBit(oldp+5,(vlSelfRef.edge_detector_test__DOT__clk));
    bufp->fullBit(oldp+6,(vlSelfRef.edge_detector_test__DOT__rst));
    bufp->fullBit(oldp+7,(vlSelfRef.edge_detector_test__DOT__signal_in));
    bufp->fullIData(oldp+8,(vlSelfRef.edge_detector_test__DOT__i),32);
}
