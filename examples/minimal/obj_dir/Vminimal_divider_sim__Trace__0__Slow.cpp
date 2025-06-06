// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vminimal_divider_sim__Syms.h"


VL_ATTR_COLD void Vminimal_divider_sim___024root__trace_init_sub__TOP__0(Vminimal_divider_sim___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root__trace_init_sub__TOP__0\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("minimal_divider_sim", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+6,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"div1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"div2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"div3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"div4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vminimal_divider_sim___024root__trace_init_top(Vminimal_divider_sim___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root__trace_init_top\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vminimal_divider_sim___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vminimal_divider_sim___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vminimal_divider_sim___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vminimal_divider_sim___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vminimal_divider_sim___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vminimal_divider_sim___024root__trace_register(Vminimal_divider_sim___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root__trace_register\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vminimal_divider_sim___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vminimal_divider_sim___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vminimal_divider_sim___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vminimal_divider_sim___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vminimal_divider_sim___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root__trace_const_0\n"); );
    // Init
    Vminimal_divider_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminimal_divider_sim___024root*>(voidSelf);
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vminimal_divider_sim___024root__trace_full_0_sub_0(Vminimal_divider_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vminimal_divider_sim___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root__trace_full_0\n"); );
    // Init
    Vminimal_divider_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminimal_divider_sim___024root*>(voidSelf);
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vminimal_divider_sim___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vminimal_divider_sim___024root__trace_full_0_sub_0(Vminimal_divider_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminimal_divider_sim___024root__trace_full_0_sub_0\n"); );
    Vminimal_divider_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.minimal_divider_sim__DOT__div1));
    bufp->fullBit(oldp+2,(vlSelfRef.minimal_divider_sim__DOT__div2));
    bufp->fullBit(oldp+3,(vlSelfRef.minimal_divider_sim__DOT__div3));
    bufp->fullBit(oldp+4,(vlSelfRef.minimal_divider_sim__DOT__div4));
    bufp->fullIData(oldp+5,(vlSelfRef.minimal_divider_sim__DOT__i),32);
    bufp->fullBit(oldp+6,(vlSelfRef.minimal_divider_sim__DOT__clk));
    bufp->fullBit(oldp+7,(vlSelfRef.minimal_divider_sim__DOT__rst));
}
