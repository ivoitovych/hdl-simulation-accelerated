// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuniversal_shift_register__Syms.h"


void Vuniversal_shift_register___024root__trace_chg_0_sub_0(Vuniversal_shift_register___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vuniversal_shift_register___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root__trace_chg_0\n"); );
    // Init
    Vuniversal_shift_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuniversal_shift_register___024root*>(voidSelf);
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vuniversal_shift_register___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vuniversal_shift_register___024root__trace_chg_0_sub_0(Vuniversal_shift_register___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root__trace_chg_0_sub_0\n"); );
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+2,(vlSelfRef.enable));
    bufp->chgCData(oldp+3,(vlSelfRef.mode),2);
    bufp->chgBit(oldp+4,(vlSelfRef.serial_in_right));
    bufp->chgBit(oldp+5,(vlSelfRef.serial_in_left));
    bufp->chgCData(oldp+6,(vlSelfRef.parallel_in),8);
    bufp->chgCData(oldp+7,(vlSelfRef.q),8);
}

void Vuniversal_shift_register___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuniversal_shift_register___024root__trace_cleanup\n"); );
    // Init
    Vuniversal_shift_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuniversal_shift_register___024root*>(voidSelf);
    Vuniversal_shift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
