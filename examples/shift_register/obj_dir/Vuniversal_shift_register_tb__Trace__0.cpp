// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuniversal_shift_register_tb__Syms.h"


void Vuniversal_shift_register_tb___024root__trace_chg_0_sub_0(Vuniversal_shift_register_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vuniversal_shift_register_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root__trace_chg_0\n"); );
    // Init
    Vuniversal_shift_register_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuniversal_shift_register_tb___024root*>(voidSelf);
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vuniversal_shift_register_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vuniversal_shift_register_tb___024root__trace_chg_0_sub_0(Vuniversal_shift_register_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root__trace_chg_0_sub_0\n"); );
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.universal_shift_register_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.universal_shift_register_tb__DOT__enable));
        bufp->chgCData(oldp+2,(vlSelfRef.universal_shift_register_tb__DOT__mode),2);
        bufp->chgBit(oldp+3,(vlSelfRef.universal_shift_register_tb__DOT__serial_in_right));
        bufp->chgBit(oldp+4,(vlSelfRef.universal_shift_register_tb__DOT__serial_in_left));
        bufp->chgCData(oldp+5,(vlSelfRef.universal_shift_register_tb__DOT__parallel_in),8);
        bufp->chgIData(oldp+6,(vlSelfRef.universal_shift_register_tb__DOT__test_case),32);
        bufp->chgIData(oldp+7,(vlSelfRef.universal_shift_register_tb__DOT__error_count),32);
        bufp->chgCData(oldp+8,(vlSelfRef.universal_shift_register_tb__DOT__expected_q),8);
        bufp->chgIData(oldp+9,(vlSelfRef.universal_shift_register_tb__DOT__seed),32);
        bufp->chgIData(oldp+10,(vlSelfRef.universal_shift_register_tb__DOT__i),32);
        bufp->chgBit(oldp+11,(vlSelfRef.universal_shift_register_tb__DOT__bit_val));
        bufp->chgCData(oldp+12,(vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__pattern),8);
        bufp->chgIData(oldp+13,(vlSelfRef.universal_shift_register_tb__DOT__create_alternating_pattern__Vstatic__j),32);
        bufp->chgIData(oldp+14,(vlSelfRef.universal_shift_register_tb__DOT__unnamedblk1__DOT__j),32);
    }
    bufp->chgBit(oldp+15,(vlSelfRef.universal_shift_register_tb__DOT__clk));
    bufp->chgCData(oldp+16,(vlSelfRef.universal_shift_register_tb__DOT__q),8);
}

void Vuniversal_shift_register_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register_tb___024root__trace_cleanup\n"); );
    // Init
    Vuniversal_shift_register_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuniversal_shift_register_tb___024root*>(voidSelf);
    Vuniversal_shift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
