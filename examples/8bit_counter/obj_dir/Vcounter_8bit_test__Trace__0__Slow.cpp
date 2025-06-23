// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcounter_8bit_test__Syms.h"


VL_ATTR_COLD void Vcounter_8bit_test___024root__trace_init_sub__TOP__0(Vcounter_8bit_test___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root__trace_init_sub__TOP__0\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("counter_8bit_test", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"load_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+8,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"underflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"load_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+8,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"underflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcounter_8bit_test___024root__trace_init_top(Vcounter_8bit_test___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root__trace_init_top\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcounter_8bit_test___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcounter_8bit_test___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcounter_8bit_test___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcounter_8bit_test___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcounter_8bit_test___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcounter_8bit_test___024root__trace_register(Vcounter_8bit_test___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root__trace_register\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcounter_8bit_test___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcounter_8bit_test___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcounter_8bit_test___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcounter_8bit_test___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcounter_8bit_test___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root__trace_const_0\n"); );
    // Init
    Vcounter_8bit_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter_8bit_test___024root*>(voidSelf);
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vcounter_8bit_test___024root__trace_full_0_sub_0(Vcounter_8bit_test___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcounter_8bit_test___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root__trace_full_0\n"); );
    // Init
    Vcounter_8bit_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter_8bit_test___024root*>(voidSelf);
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcounter_8bit_test___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcounter_8bit_test___024root__trace_full_0_sub_0(Vcounter_8bit_test___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_8bit_test___024root__trace_full_0_sub_0\n"); );
    Vcounter_8bit_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.counter_8bit_test__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelfRef.counter_8bit_test__DOT__rst));
    bufp->fullBit(oldp+3,(vlSelfRef.counter_8bit_test__DOT__enable));
    bufp->fullBit(oldp+4,(vlSelfRef.counter_8bit_test__DOT__load));
    bufp->fullCData(oldp+5,(vlSelfRef.counter_8bit_test__DOT__load_value),8);
    bufp->fullIData(oldp+6,(vlSelfRef.counter_8bit_test__DOT__i),32);
    bufp->fullCData(oldp+7,(vlSelfRef.counter_8bit_test__DOT__count),8);
    bufp->fullBit(oldp+8,(((IData)(vlSelfRef.counter_8bit_test__DOT__enable) 
                           & ((~ (IData)(vlSelfRef.counter_8bit_test__DOT__load)) 
                              & (0xffU == (IData)(vlSelfRef.counter_8bit_test__DOT__count))))));
    bufp->fullBit(oldp+9,(((IData)(vlSelfRef.counter_8bit_test__DOT__enable) 
                           & ((~ (IData)(vlSelfRef.counter_8bit_test__DOT__load)) 
                              & (0U == (IData)(vlSelfRef.counter_8bit_test__DOT__count))))));
}
