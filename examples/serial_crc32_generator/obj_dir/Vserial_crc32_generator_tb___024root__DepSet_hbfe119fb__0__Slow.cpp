// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vserial_crc32_generator_tb.h for the primary calling header

#include "Vserial_crc32_generator_tb__pch.h"
#include "Vserial_crc32_generator_tb__Syms.h"
#include "Vserial_crc32_generator_tb___024root.h"

VL_ATTR_COLD void Vserial_crc32_generator_tb___024root___eval_initial__TOP(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___eval_initial__TOP\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    if (VL_TESTPLUSARGS_I(std::string{"trace"})) {
        __Vtemp_1[0U] = 0x2e766364U;
        __Vtemp_1[1U] = 0x666f726dU;
        __Vtemp_1[2U] = 0x77617665U;
        vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
        vlSymsp->_traceDumpOpen();
    }
}
