// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vserial_crc32_generator_tb.h for the primary calling header

#include "Vserial_crc32_generator_tb__pch.h"
#include "Vserial_crc32_generator_tb___024root.h"

VL_ATTR_COLD void Vserial_crc32_generator_tb___024root___eval_initial__TOP(Vserial_crc32_generator_tb___024root* vlSelf);
VlCoroutine Vserial_crc32_generator_tb___024root___eval_initial__TOP__Vtiming__0(Vserial_crc32_generator_tb___024root* vlSelf);
VlCoroutine Vserial_crc32_generator_tb___024root___eval_initial__TOP__Vtiming__1(Vserial_crc32_generator_tb___024root* vlSelf);

void Vserial_crc32_generator_tb___024root___eval_initial(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___eval_initial\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vserial_crc32_generator_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vserial_crc32_generator_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vserial_crc32_generator_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vserial_crc32_generator_tb___024root___eval_initial__TOP__Vtiming__0(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.serial_crc32_generator_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             37);
        vlSelfRef.serial_crc32_generator_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.serial_crc32_generator_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vserial_crc32_generator_tb___024root___eval_initial__TOP__Vtiming__1(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__1__pattern_type;
    __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__1__pattern_type = 0;
    IData/*31:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_test_message__2__expected_result;
    __Vtask_serial_crc32_generator_tb__DOT__send_test_message__2__expected_result = 0;
    CData/*7:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_byte__3__byte_value;
    __Vtask_serial_crc32_generator_tb__DOT__send_byte__3__byte_value = 0;
    CData/*0:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value;
    __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value = 0;
    CData/*7:0*/ __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__5__pattern_type;
    __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__5__pattern_type = 0;
    IData/*31:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_test_message__6__expected_result;
    __Vtask_serial_crc32_generator_tb__DOT__send_test_message__6__expected_result = 0;
    CData/*7:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_byte__7__byte_value;
    __Vtask_serial_crc32_generator_tb__DOT__send_byte__7__byte_value = 0;
    CData/*0:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value;
    __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value = 0;
    CData/*7:0*/ __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__9__pattern_type;
    __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__9__pattern_type = 0;
    IData/*31:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_test_message__10__expected_result;
    __Vtask_serial_crc32_generator_tb__DOT__send_test_message__10__expected_result = 0;
    CData/*7:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_byte__11__byte_value;
    __Vtask_serial_crc32_generator_tb__DOT__send_byte__11__byte_value = 0;
    CData/*0:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value;
    __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value = 0;
    CData/*7:0*/ __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__13__pattern_type;
    __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__13__pattern_type = 0;
    IData/*31:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_test_message__14__expected_result;
    __Vtask_serial_crc32_generator_tb__DOT__send_test_message__14__expected_result = 0;
    CData/*7:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_byte__15__byte_value;
    __Vtask_serial_crc32_generator_tb__DOT__send_byte__15__byte_value = 0;
    CData/*0:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value;
    __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value = 0;
    CData/*7:0*/ __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__17__pattern_type;
    __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__17__pattern_type = 0;
    IData/*31:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_test_message__18__expected_result;
    __Vtask_serial_crc32_generator_tb__DOT__send_test_message__18__expected_result = 0;
    CData/*7:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_byte__19__byte_value;
    __Vtask_serial_crc32_generator_tb__DOT__send_byte__19__byte_value = 0;
    CData/*0:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value;
    __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value = 0;
    CData/*7:0*/ __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__21__pattern_type;
    __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__21__pattern_type = 0;
    IData/*31:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_test_message__22__expected_result;
    __Vtask_serial_crc32_generator_tb__DOT__send_test_message__22__expected_result = 0;
    CData/*7:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_byte__23__byte_value;
    __Vtask_serial_crc32_generator_tb__DOT__send_byte__23__byte_value = 0;
    CData/*0:0*/ __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value;
    __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value = 0;
    // Body
    VL_WRITEF_NX("Starting CRC-32 Generator Testbench\n",0);
    vlSelfRef.serial_crc32_generator_tb__DOT__test_case = 0U;
    vlSelfRef.serial_crc32_generator_tb__DOT__error_count = 0U;
    vlSelfRef.serial_crc32_generator_tb__DOT__rst_n = 0U;
    vlSelfRef.serial_crc32_generator_tb__DOT__enable = 0U;
    vlSelfRef.serial_crc32_generator_tb__DOT__data_in = 0U;
    vlSelfRef.serial_crc32_generator_tb__DOT__new_message = 0U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         47);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         48);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         50);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__1__pattern_type = 0U;
    if ((0U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__1__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 9U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[0U] = 0x31U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[1U] = 0x32U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[2U] = 0x33U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[3U] = 0x34U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[4U] = 0x35U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[5U] = 0x36U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[6U] = 0x37U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[7U] = 0x38U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[8U] = 0x39U;
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xcbf43926U;
    } else if ((1U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__1__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0U;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0x2144df1cU;
    } else if ((2U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__1__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0xffU;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xffffffffU;
    } else if ((3U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__1__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0x55U;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0x6b2dc0bdU;
    } else if ((4U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__1__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0xaaU;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xb596e05eU;
    } else if ((5U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__1__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[0U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[1U] = 2U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[2U] = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[3U] = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[4U] = 0x10U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[5U] = 0x20U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[6U] = 0x40U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[7U] = 0x80U;
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xe0631a53U;
    }
    __Vtask_serial_crc32_generator_tb__DOT__send_test_message__2__expected_result 
        = vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc;
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         83);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__new_message = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__enable = 0U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__new_message = 0U;
    vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx = 0U;
    while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
        __Vtask_serial_crc32_generator_tb__DOT__send_byte__3__byte_value 
            = vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes
            [(0xfU & vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx)];
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value 
            = (1U & (IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__3__byte_value));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 1U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__3__byte_value) 
                     >> 1U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 2U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__3__byte_value) 
                     >> 2U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 3U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__3__byte_value) 
                     >> 3U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 4U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__3__byte_value) 
                     >> 4U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 5U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__3__byte_value) 
                     >> 5U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 6U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__3__byte_value) 
                     >> 6U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 7U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__3__byte_value) 
                     >> 7U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__4__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx 
            = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx);
    }
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__enable = 0U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.serial_crc32_generator_tb__DOT__crc_out 
         != __Vtask_serial_crc32_generator_tb__DOT__send_test_message__2__expected_result)) {
        VL_WRITEF_NX("ERROR: Test case %0d failed! Expected CRC: %x, Got: %x\n",0,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__test_case,
                     32,__Vtask_serial_crc32_generator_tb__DOT__send_test_message__2__expected_result,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__crc_out);
        vlSelfRef.serial_crc32_generator_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0d passed! CRC: %x\n",0,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__test_case,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__crc_out);
    }
    vlSelfRef.serial_crc32_generator_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__test_case);
    __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__5__pattern_type = 1U;
    if ((0U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__5__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 9U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[0U] = 0x31U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[1U] = 0x32U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[2U] = 0x33U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[3U] = 0x34U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[4U] = 0x35U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[5U] = 0x36U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[6U] = 0x37U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[7U] = 0x38U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[8U] = 0x39U;
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xcbf43926U;
    } else if ((1U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__5__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0U;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0x2144df1cU;
    } else if ((2U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__5__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0xffU;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xffffffffU;
    } else if ((3U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__5__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0x55U;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0x6b2dc0bdU;
    } else if ((4U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__5__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0xaaU;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xb596e05eU;
    } else if ((5U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__5__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[0U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[1U] = 2U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[2U] = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[3U] = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[4U] = 0x10U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[5U] = 0x20U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[6U] = 0x40U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[7U] = 0x80U;
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xe0631a53U;
    }
    __Vtask_serial_crc32_generator_tb__DOT__send_test_message__6__expected_result 
        = vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc;
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         83);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__new_message = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__enable = 0U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__new_message = 0U;
    vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx = 0U;
    while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
        __Vtask_serial_crc32_generator_tb__DOT__send_byte__7__byte_value 
            = vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes
            [(0xfU & vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx)];
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value 
            = (1U & (IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__7__byte_value));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 1U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__7__byte_value) 
                     >> 1U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 2U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__7__byte_value) 
                     >> 2U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 3U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__7__byte_value) 
                     >> 3U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 4U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__7__byte_value) 
                     >> 4U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 5U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__7__byte_value) 
                     >> 5U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 6U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__7__byte_value) 
                     >> 6U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 7U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__7__byte_value) 
                     >> 7U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__8__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx 
            = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx);
    }
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__enable = 0U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.serial_crc32_generator_tb__DOT__crc_out 
         != __Vtask_serial_crc32_generator_tb__DOT__send_test_message__6__expected_result)) {
        VL_WRITEF_NX("ERROR: Test case %0d failed! Expected CRC: %x, Got: %x\n",0,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__test_case,
                     32,__Vtask_serial_crc32_generator_tb__DOT__send_test_message__6__expected_result,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__crc_out);
        vlSelfRef.serial_crc32_generator_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0d passed! CRC: %x\n",0,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__test_case,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__crc_out);
    }
    vlSelfRef.serial_crc32_generator_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__test_case);
    __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__9__pattern_type = 2U;
    if ((0U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__9__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 9U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[0U] = 0x31U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[1U] = 0x32U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[2U] = 0x33U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[3U] = 0x34U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[4U] = 0x35U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[5U] = 0x36U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[6U] = 0x37U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[7U] = 0x38U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[8U] = 0x39U;
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xcbf43926U;
    } else if ((1U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__9__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0U;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0x2144df1cU;
    } else if ((2U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__9__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0xffU;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xffffffffU;
    } else if ((3U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__9__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0x55U;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0x6b2dc0bdU;
    } else if ((4U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__9__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0xaaU;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xb596e05eU;
    } else if ((5U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__9__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[0U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[1U] = 2U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[2U] = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[3U] = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[4U] = 0x10U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[5U] = 0x20U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[6U] = 0x40U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[7U] = 0x80U;
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xe0631a53U;
    }
    __Vtask_serial_crc32_generator_tb__DOT__send_test_message__10__expected_result 
        = vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc;
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         83);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__new_message = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__enable = 0U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__new_message = 0U;
    vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx = 0U;
    while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
        __Vtask_serial_crc32_generator_tb__DOT__send_byte__11__byte_value 
            = vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes
            [(0xfU & vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx)];
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value 
            = (1U & (IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__11__byte_value));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 1U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__11__byte_value) 
                     >> 1U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 2U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__11__byte_value) 
                     >> 2U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 3U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__11__byte_value) 
                     >> 3U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 4U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__11__byte_value) 
                     >> 4U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 5U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__11__byte_value) 
                     >> 5U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 6U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__11__byte_value) 
                     >> 6U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 7U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__11__byte_value) 
                     >> 7U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__12__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx 
            = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx);
    }
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__enable = 0U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.serial_crc32_generator_tb__DOT__crc_out 
         != __Vtask_serial_crc32_generator_tb__DOT__send_test_message__10__expected_result)) {
        VL_WRITEF_NX("ERROR: Test case %0d failed! Expected CRC: %x, Got: %x\n",0,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__test_case,
                     32,__Vtask_serial_crc32_generator_tb__DOT__send_test_message__10__expected_result,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__crc_out);
        vlSelfRef.serial_crc32_generator_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0d passed! CRC: %x\n",0,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__test_case,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__crc_out);
    }
    vlSelfRef.serial_crc32_generator_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__test_case);
    __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__13__pattern_type = 3U;
    if ((0U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__13__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 9U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[0U] = 0x31U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[1U] = 0x32U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[2U] = 0x33U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[3U] = 0x34U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[4U] = 0x35U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[5U] = 0x36U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[6U] = 0x37U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[7U] = 0x38U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[8U] = 0x39U;
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xcbf43926U;
    } else if ((1U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__13__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0U;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0x2144df1cU;
    } else if ((2U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__13__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0xffU;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xffffffffU;
    } else if ((3U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__13__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0x55U;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0x6b2dc0bdU;
    } else if ((4U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__13__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0xaaU;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xb596e05eU;
    } else if ((5U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__13__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[0U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[1U] = 2U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[2U] = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[3U] = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[4U] = 0x10U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[5U] = 0x20U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[6U] = 0x40U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[7U] = 0x80U;
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xe0631a53U;
    }
    __Vtask_serial_crc32_generator_tb__DOT__send_test_message__14__expected_result 
        = vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc;
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         83);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__new_message = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__enable = 0U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__new_message = 0U;
    vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx = 0U;
    while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
        __Vtask_serial_crc32_generator_tb__DOT__send_byte__15__byte_value 
            = vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes
            [(0xfU & vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx)];
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value 
            = (1U & (IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__15__byte_value));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 1U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__15__byte_value) 
                     >> 1U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 2U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__15__byte_value) 
                     >> 2U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 3U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__15__byte_value) 
                     >> 3U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 4U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__15__byte_value) 
                     >> 4U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 5U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__15__byte_value) 
                     >> 5U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 6U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__15__byte_value) 
                     >> 6U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 7U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__15__byte_value) 
                     >> 7U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__16__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx 
            = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx);
    }
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__enable = 0U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.serial_crc32_generator_tb__DOT__crc_out 
         != __Vtask_serial_crc32_generator_tb__DOT__send_test_message__14__expected_result)) {
        VL_WRITEF_NX("ERROR: Test case %0d failed! Expected CRC: %x, Got: %x\n",0,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__test_case,
                     32,__Vtask_serial_crc32_generator_tb__DOT__send_test_message__14__expected_result,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__crc_out);
        vlSelfRef.serial_crc32_generator_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0d passed! CRC: %x\n",0,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__test_case,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__crc_out);
    }
    vlSelfRef.serial_crc32_generator_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__test_case);
    __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__17__pattern_type = 4U;
    if ((0U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__17__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 9U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[0U] = 0x31U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[1U] = 0x32U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[2U] = 0x33U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[3U] = 0x34U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[4U] = 0x35U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[5U] = 0x36U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[6U] = 0x37U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[7U] = 0x38U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[8U] = 0x39U;
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xcbf43926U;
    } else if ((1U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__17__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0U;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0x2144df1cU;
    } else if ((2U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__17__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0xffU;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xffffffffU;
    } else if ((3U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__17__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0x55U;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0x6b2dc0bdU;
    } else if ((4U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__17__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0xaaU;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xb596e05eU;
    } else if ((5U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__17__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[0U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[1U] = 2U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[2U] = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[3U] = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[4U] = 0x10U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[5U] = 0x20U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[6U] = 0x40U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[7U] = 0x80U;
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xe0631a53U;
    }
    __Vtask_serial_crc32_generator_tb__DOT__send_test_message__18__expected_result 
        = vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc;
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         83);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__new_message = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__enable = 0U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__new_message = 0U;
    vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx = 0U;
    while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
        __Vtask_serial_crc32_generator_tb__DOT__send_byte__19__byte_value 
            = vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes
            [(0xfU & vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx)];
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value 
            = (1U & (IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__19__byte_value));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 1U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__19__byte_value) 
                     >> 1U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 2U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__19__byte_value) 
                     >> 2U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 3U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__19__byte_value) 
                     >> 3U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 4U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__19__byte_value) 
                     >> 4U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 5U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__19__byte_value) 
                     >> 5U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 6U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__19__byte_value) 
                     >> 6U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 7U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__19__byte_value) 
                     >> 7U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__20__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx 
            = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx);
    }
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__enable = 0U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.serial_crc32_generator_tb__DOT__crc_out 
         != __Vtask_serial_crc32_generator_tb__DOT__send_test_message__18__expected_result)) {
        VL_WRITEF_NX("ERROR: Test case %0d failed! Expected CRC: %x, Got: %x\n",0,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__test_case,
                     32,__Vtask_serial_crc32_generator_tb__DOT__send_test_message__18__expected_result,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__crc_out);
        vlSelfRef.serial_crc32_generator_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0d passed! CRC: %x\n",0,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__test_case,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__crc_out);
    }
    vlSelfRef.serial_crc32_generator_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__test_case);
    __Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__21__pattern_type = 5U;
    if ((0U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__21__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 9U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[0U] = 0x31U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[1U] = 0x32U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[2U] = 0x33U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[3U] = 0x34U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[4U] = 0x35U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[5U] = 0x36U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[6U] = 0x37U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[7U] = 0x38U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[8U] = 0x39U;
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xcbf43926U;
    } else if ((1U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__21__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0U;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0x2144df1cU;
    } else if ((2U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__21__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0xffU;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xffffffffU;
    } else if ((3U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__21__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0x55U;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0x6b2dc0bdU;
    } else if ((4U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__21__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
            vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[(0xfU 
                                                                       & vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i)] = 0xaaU;
            vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i 
                = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__initialize_test_data__Vstatic__i);
        }
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xb596e05eU;
    } else if ((5U == (IData)(__Vtask_serial_crc32_generator_tb__DOT__initialize_test_data__21__pattern_type))) {
        vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[0U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[1U] = 2U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[2U] = 4U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[3U] = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[4U] = 0x10U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[5U] = 0x20U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[6U] = 0x40U;
        vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes[7U] = 0x80U;
        vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc = 0xe0631a53U;
    }
    __Vtask_serial_crc32_generator_tb__DOT__send_test_message__22__expected_result 
        = vlSelfRef.serial_crc32_generator_tb__DOT__expected_crc;
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         83);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__new_message = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__enable = 0U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__new_message = 0U;
    vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx = 0U;
    while (VL_LTS_III(32, vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx, vlSelfRef.serial_crc32_generator_tb__DOT__total_test_bytes)) {
        __Vtask_serial_crc32_generator_tb__DOT__send_byte__23__byte_value 
            = vlSelfRef.serial_crc32_generator_tb__DOT__test_data_bytes
            [(0xfU & vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx)];
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value 
            = (1U & (IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__23__byte_value));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 1U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__23__byte_value) 
                     >> 1U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 2U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__23__byte_value) 
                     >> 2U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 3U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__23__byte_value) 
                     >> 3U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 4U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__23__byte_value) 
                     >> 4U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 5U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__23__byte_value) 
                     >> 5U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 6U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__23__byte_value) 
                     >> 6U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 7U;
        __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value 
            = (1U & ((IData)(__Vtask_serial_crc32_generator_tb__DOT__send_byte__23__byte_value) 
                     >> 7U));
        co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             58);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__data_in 
            = __Vtask_serial_crc32_generator_tb__DOT__send_bit__24__bit_value;
        vlSelfRef.serial_crc32_generator_tb__DOT__enable = 1U;
        co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge serial_crc32_generator_tb.clk)", 
                                                             "serial_crc32_generator_tb.v", 
                                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "serial_crc32_generator_tb.v", 
                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_byte__Vstatic__bit_idx = 8U;
        vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx 
            = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__send_test_message__Vstatic__byte_idx);
    }
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.serial_crc32_generator_tb__DOT__enable = 0U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he20acd38__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he20acd69__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge serial_crc32_generator_tb.clk)", 
                                                         "serial_crc32_generator_tb.v", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "serial_crc32_generator_tb.v", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.serial_crc32_generator_tb__DOT__crc_out 
         != __Vtask_serial_crc32_generator_tb__DOT__send_test_message__22__expected_result)) {
        VL_WRITEF_NX("ERROR: Test case %0d failed! Expected CRC: %x, Got: %x\n",0,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__test_case,
                     32,__Vtask_serial_crc32_generator_tb__DOT__send_test_message__22__expected_result,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__crc_out);
        vlSelfRef.serial_crc32_generator_tb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__error_count);
    } else {
        VL_WRITEF_NX("Test case %0d passed! CRC: %x\n",0,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__test_case,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__crc_out);
    }
    vlSelfRef.serial_crc32_generator_tb__DOT__test_case 
        = ((IData)(1U) + vlSelfRef.serial_crc32_generator_tb__DOT__test_case);
    if ((0U == vlSelfRef.serial_crc32_generator_tb__DOT__error_count)) {
        VL_WRITEF_NX("All %0d test cases PASSED\n",0,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__test_case);
    } else {
        VL_WRITEF_NX("%0d out of %0d test cases FAILED\n",0,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__error_count,
                     32,vlSelfRef.serial_crc32_generator_tb__DOT__test_case);
    }
    VL_FINISH_MT("serial_crc32_generator_tb.v", 223, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vserial_crc32_generator_tb___024root___eval_act(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___eval_act\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vserial_crc32_generator_tb___024root___nba_sequent__TOP__0(Vserial_crc32_generator_tb___024root* vlSelf);

void Vserial_crc32_generator_tb___024root___eval_nba(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___eval_nba\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vserial_crc32_generator_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vserial_crc32_generator_tb___024root___nba_sequent__TOP__0(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___nba_sequent__TOP__0\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__serial_crc32_generator_tb__DOT__dut__DOT__crc_reg;
    __Vdly__serial_crc32_generator_tb__DOT__dut__DOT__crc_reg = 0;
    // Body
    __Vdly__serial_crc32_generator_tb__DOT__dut__DOT__crc_reg 
        = vlSelfRef.serial_crc32_generator_tb__DOT__dut__DOT__crc_reg;
    if (vlSelfRef.serial_crc32_generator_tb__DOT__rst_n) {
        if (vlSelfRef.serial_crc32_generator_tb__DOT__new_message) {
            __Vdly__serial_crc32_generator_tb__DOT__dut__DOT__crc_reg = 0xffffffffU;
            vlSelfRef.serial_crc32_generator_tb__DOT__crc_out = 0U;
        } else {
            if (vlSelfRef.serial_crc32_generator_tb__DOT__enable) {
                __Vdly__serial_crc32_generator_tb__DOT__dut__DOT__crc_reg 
                    = (VL_SHIFTR_III(32,32,32, vlSelfRef.serial_crc32_generator_tb__DOT__dut__DOT__crc_reg, 1U) 
                       ^ (0xedb88320U & (- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.serial_crc32_generator_tb__DOT__dut__DOT__crc_reg 
                                                       ^ (IData)(vlSelfRef.serial_crc32_generator_tb__DOT__data_in)))))));
            }
            vlSelfRef.serial_crc32_generator_tb__DOT__crc_out 
                = (~ vlSelfRef.serial_crc32_generator_tb__DOT__dut__DOT__crc_reg);
        }
    } else {
        __Vdly__serial_crc32_generator_tb__DOT__dut__DOT__crc_reg = 0xffffffffU;
        vlSelfRef.serial_crc32_generator_tb__DOT__crc_out = 0U;
    }
    vlSelfRef.serial_crc32_generator_tb__DOT__dut__DOT__crc_reg 
        = __Vdly__serial_crc32_generator_tb__DOT__dut__DOT__crc_reg;
}

void Vserial_crc32_generator_tb___024root___timing_resume(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___timing_resume\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he20acd69__0.resume(
                                                   "@(posedge serial_crc32_generator_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he20acd38__0.resume(
                                                   "@(negedge serial_crc32_generator_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vserial_crc32_generator_tb___024root___timing_commit(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___timing_commit\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he20acd69__0.commit(
                                                   "@(posedge serial_crc32_generator_tb.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he20acd38__0.commit(
                                                   "@(negedge serial_crc32_generator_tb.clk)");
    }
}

void Vserial_crc32_generator_tb___024root___eval_triggers__act(Vserial_crc32_generator_tb___024root* vlSelf);

bool Vserial_crc32_generator_tb___024root___eval_phase__act(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___eval_phase__act\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vserial_crc32_generator_tb___024root___eval_triggers__act(vlSelf);
    Vserial_crc32_generator_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vserial_crc32_generator_tb___024root___timing_resume(vlSelf);
        Vserial_crc32_generator_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vserial_crc32_generator_tb___024root___eval_phase__nba(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___eval_phase__nba\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vserial_crc32_generator_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vserial_crc32_generator_tb___024root___dump_triggers__nba(Vserial_crc32_generator_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vserial_crc32_generator_tb___024root___dump_triggers__act(Vserial_crc32_generator_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vserial_crc32_generator_tb___024root___eval(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___eval\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vserial_crc32_generator_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("serial_crc32_generator_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vserial_crc32_generator_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("serial_crc32_generator_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vserial_crc32_generator_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vserial_crc32_generator_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vserial_crc32_generator_tb___024root___eval_debug_assertions(Vserial_crc32_generator_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vserial_crc32_generator_tb___024root___eval_debug_assertions\n"); );
    Vserial_crc32_generator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
