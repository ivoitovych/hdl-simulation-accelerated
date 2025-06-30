// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tx_basic_tb.h for the primary calling header

#include "Vuart_tx_basic_tb__pch.h"
#include "Vuart_tx_basic_tb___024root.h"

VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_tx_basic_tb___024root* vlSelf);
VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1(Vuart_tx_basic_tb___024root* vlSelf);

void Vuart_tx_basic_tb___024root___eval_initial(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_tx_basic_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "uart_tx_basic_tb.v", 
                                             43);
        vlSelfRef.uart_tx_basic_tb__DOT__clk = (1U 
                                                & (~ (IData)(vlSelfRef.uart_tx_basic_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_7__1(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_7__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_7__1\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data = 0U;
    co_await vlSelfRef.__VtrigSched_h690aa6f8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.tx)", 
                                                         "uart_tx_basic_tb.v", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x423920ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         56);
    if (VL_UNLIKELY((vlSelfRef.uart_tx_basic_tb__DOT__tx))) {
        VL_WRITEF_NX("ERROR: Invalid start bit!\n",0);
    }
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         64);
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xfeU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | (IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 1U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xfdU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 1U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 2U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xfbU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 2U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 3U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xf7U & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 3U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 4U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xefU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 4U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 5U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xdfU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 5U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 6U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xbfU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 6U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 7U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0x7fU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 7U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 8U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx)))))) {
        VL_WRITEF_NX("ERROR: Invalid stop bit!\n",0);
    }
    vlSelfRef.uart_tx_basic_tb__DOT__received_data 
        = vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data;
    __Vfork_7__sync.done("uart_tx_basic_tb.v", 156);
}

VL_INLINE_OPT VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_7__0(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_7__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_7__0\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__send_byte__4__byte_to_send 
        = vlSelfRef.uart_tx_basic_tb__DOT__data_in;
    vlSelfRef.uart_tx_basic_tb__DOT__data_in = vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__send_byte__4__byte_to_send;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         84);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         86);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 0U;
    co_await vlSelfRef.__VtrigSched_h23a82dfd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.busy)", 
                                                         "uart_tx_basic_tb.v", 
                                                         90);
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         91);
    __Vfork_7__sync.done("uart_tx_basic_tb.v", 155);
}

VL_INLINE_OPT VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_6__1(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_6__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_6__1\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data = 0U;
    co_await vlSelfRef.__VtrigSched_h690aa6f8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.tx)", 
                                                         "uart_tx_basic_tb.v", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x423920ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         56);
    if (VL_UNLIKELY((vlSelfRef.uart_tx_basic_tb__DOT__tx))) {
        VL_WRITEF_NX("ERROR: Invalid start bit!\n",0);
    }
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         64);
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xfeU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | (IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 1U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xfdU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 1U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 2U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xfbU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 2U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 3U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xf7U & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 3U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 4U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xefU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 4U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 5U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xdfU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 5U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 6U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xbfU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 6U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 7U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0x7fU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 7U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 8U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx)))))) {
        VL_WRITEF_NX("ERROR: Invalid stop bit!\n",0);
    }
    vlSelfRef.uart_tx_basic_tb__DOT__received_data 
        = vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data;
    __Vfork_6__sync.done("uart_tx_basic_tb.v", 156);
}

VL_INLINE_OPT VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_6__0(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_6__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_6__0\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__send_byte__4__byte_to_send 
        = vlSelfRef.uart_tx_basic_tb__DOT__data_in;
    vlSelfRef.uart_tx_basic_tb__DOT__data_in = vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__send_byte__4__byte_to_send;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         84);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         86);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 0U;
    co_await vlSelfRef.__VtrigSched_h23a82dfd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.busy)", 
                                                         "uart_tx_basic_tb.v", 
                                                         90);
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         91);
    __Vfork_6__sync.done("uart_tx_basic_tb.v", 155);
}

VL_INLINE_OPT VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_5__1(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_5__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_5__1\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data = 0U;
    co_await vlSelfRef.__VtrigSched_h690aa6f8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.tx)", 
                                                         "uart_tx_basic_tb.v", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x423920ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         56);
    if (VL_UNLIKELY((vlSelfRef.uart_tx_basic_tb__DOT__tx))) {
        VL_WRITEF_NX("ERROR: Invalid start bit!\n",0);
    }
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         64);
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xfeU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | (IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 1U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xfdU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 1U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 2U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xfbU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 2U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 3U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xf7U & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 3U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 4U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xefU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 4U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 5U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xdfU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 5U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 6U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xbfU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 6U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 7U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0x7fU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 7U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 8U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx)))))) {
        VL_WRITEF_NX("ERROR: Invalid stop bit!\n",0);
    }
    vlSelfRef.uart_tx_basic_tb__DOT__received_data 
        = vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data;
    __Vfork_5__sync.done("uart_tx_basic_tb.v", 156);
}

VL_INLINE_OPT VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_5__0(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_5__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_5__0\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__send_byte__4__byte_to_send 
        = vlSelfRef.uart_tx_basic_tb__DOT__data_in;
    vlSelfRef.uart_tx_basic_tb__DOT__data_in = vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__send_byte__4__byte_to_send;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         84);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         86);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 0U;
    co_await vlSelfRef.__VtrigSched_h23a82dfd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.busy)", 
                                                         "uart_tx_basic_tb.v", 
                                                         90);
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         91);
    __Vfork_5__sync.done("uart_tx_basic_tb.v", 155);
}

VL_INLINE_OPT VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_4__1(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_4__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_4__1\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data = 0U;
    co_await vlSelfRef.__VtrigSched_h690aa6f8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.tx)", 
                                                         "uart_tx_basic_tb.v", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x423920ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         56);
    if (VL_UNLIKELY((vlSelfRef.uart_tx_basic_tb__DOT__tx))) {
        VL_WRITEF_NX("ERROR: Invalid start bit!\n",0);
    }
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         64);
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xfeU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | (IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 1U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xfdU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 1U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 2U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xfbU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 2U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 3U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xf7U & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 3U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 4U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xefU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 4U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 5U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xdfU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 5U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 6U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xbfU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 6U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 7U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0x7fU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 7U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 8U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx)))))) {
        VL_WRITEF_NX("ERROR: Invalid stop bit!\n",0);
    }
    vlSelfRef.uart_tx_basic_tb__DOT__received_data 
        = vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data;
    __Vfork_4__sync.done("uart_tx_basic_tb.v", 156);
}

VL_INLINE_OPT VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_4__0(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_4__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_4__0\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__send_byte__4__byte_to_send 
        = vlSelfRef.uart_tx_basic_tb__DOT__data_in;
    vlSelfRef.uart_tx_basic_tb__DOT__data_in = vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__send_byte__4__byte_to_send;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         84);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         86);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 0U;
    co_await vlSelfRef.__VtrigSched_h23a82dfd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.busy)", 
                                                         "uart_tx_basic_tb.v", 
                                                         90);
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         91);
    __Vfork_4__sync.done("uart_tx_basic_tb.v", 155);
}

VL_INLINE_OPT VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_3__1(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_3__1\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data = 0U;
    co_await vlSelfRef.__VtrigSched_h690aa6f8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.tx)", 
                                                         "uart_tx_basic_tb.v", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x423920ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         56);
    if (VL_UNLIKELY((vlSelfRef.uart_tx_basic_tb__DOT__tx))) {
        VL_WRITEF_NX("ERROR: Invalid start bit!\n",0);
    }
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         64);
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xfeU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | (IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 1U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xfdU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 1U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 2U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xfbU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 2U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 3U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xf7U & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 3U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 4U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xefU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 4U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 5U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xdfU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 5U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 6U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0xbfU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 6U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 7U;
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data 
        = ((0x7fU & (IData)(vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 7U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 8U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx)))))) {
        VL_WRITEF_NX("ERROR: Invalid stop bit!\n",0);
    }
    vlSelfRef.uart_tx_basic_tb__DOT__received_data 
        = vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__5__rx_data;
    __Vfork_3__sync.done("uart_tx_basic_tb.v", 156);
}

VL_INLINE_OPT VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_3__0(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_3__0\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__send_byte__4__byte_to_send 
        = vlSelfRef.uart_tx_basic_tb__DOT__data_in;
    vlSelfRef.uart_tx_basic_tb__DOT__data_in = vlSelfRef.__Vtask_uart_tx_basic_tb__DOT__send_byte__4__byte_to_send;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         84);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         86);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 0U;
    co_await vlSelfRef.__VtrigSched_h23a82dfd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.busy)", 
                                                         "uart_tx_basic_tb.v", 
                                                         90);
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         91);
    __Vfork_3__sync.done("uart_tx_basic_tb.v", 155);
}

VL_INLINE_OPT VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_2__1(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_2__1\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data;
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data = 0;
    // Body
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data = 0U;
    co_await vlSelfRef.__VtrigSched_h690aa6f8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.tx)", 
                                                         "uart_tx_basic_tb.v", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x423920ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         56);
    if (VL_UNLIKELY((vlSelfRef.uart_tx_basic_tb__DOT__tx))) {
        VL_WRITEF_NX("ERROR: Invalid start bit!\n",0);
    }
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         64);
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data 
        = ((0xfeU & (IData)(__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data)) 
           | (IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 1U;
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data 
        = ((0xfdU & (IData)(__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 1U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 2U;
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data 
        = ((0xfbU & (IData)(__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 2U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 3U;
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data 
        = ((0xf7U & (IData)(__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 3U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 4U;
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data 
        = ((0xefU & (IData)(__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 4U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 5U;
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data 
        = ((0xdfU & (IData)(__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 5U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 6U;
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data 
        = ((0xbfU & (IData)(__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 6U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 7U;
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data 
        = ((0x7fU & (IData)(__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 7U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 8U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx)))))) {
        VL_WRITEF_NX("ERROR: Invalid stop bit!\n",0);
    }
    vlSelfRef.uart_tx_basic_tb__DOT__received_data 
        = __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__3__rx_data;
    __Vfork_2__sync.done("uart_tx_basic_tb.v", 133);
}

VL_INLINE_OPT VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_2__0(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_2__0\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_uart_tx_basic_tb__DOT__send_byte__2__byte_to_send;
    __Vtask_uart_tx_basic_tb__DOT__send_byte__2__byte_to_send = 0;
    // Body
    __Vtask_uart_tx_basic_tb__DOT__send_byte__2__byte_to_send = 0xaaU;
    vlSelfRef.uart_tx_basic_tb__DOT__data_in = __Vtask_uart_tx_basic_tb__DOT__send_byte__2__byte_to_send;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         84);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         86);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 0U;
    co_await vlSelfRef.__VtrigSched_h23a82dfd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.busy)", 
                                                         "uart_tx_basic_tb.v", 
                                                         90);
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         91);
    __Vfork_2__sync.done("uart_tx_basic_tb.v", 132);
}

VL_INLINE_OPT VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data;
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data = 0;
    // Body
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data = 0U;
    co_await vlSelfRef.__VtrigSched_h690aa6f8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.tx)", 
                                                         "uart_tx_basic_tb.v", 
                                                         53);
    co_await vlSelfRef.__VdlySched.delay(0x423920ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         56);
    if (VL_UNLIKELY((vlSelfRef.uart_tx_basic_tb__DOT__tx))) {
        VL_WRITEF_NX("ERROR: Invalid start bit!\n",0);
    }
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         64);
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data 
        = ((0xfeU & (IData)(__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data)) 
           | (IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 1U;
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data 
        = ((0xfdU & (IData)(__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 1U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 2U;
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data 
        = ((0xfbU & (IData)(__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 2U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 3U;
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data 
        = ((0xf7U & (IData)(__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 3U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 4U;
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data 
        = ((0xefU & (IData)(__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 4U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 5U;
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data 
        = ((0xdfU & (IData)(__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 5U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 6U;
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data 
        = ((0xbfU & (IData)(__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 6U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 7U;
    __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data 
        = ((0x7fU & (IData)(__Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data)) 
           | ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx) 
              << 7U));
    co_await vlSelfRef.__VdlySched.delay(0x847240ULL, 
                                         nullptr, "uart_tx_basic_tb.v", 
                                         69);
    vlSelfRef.uart_tx_basic_tb__DOT__bit_count = 8U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.uart_tx_basic_tb__DOT__tx)))))) {
        VL_WRITEF_NX("ERROR: Invalid stop bit!\n",0);
    }
    vlSelfRef.uart_tx_basic_tb__DOT__received_data 
        = __Vtask_uart_tx_basic_tb__DOT__receive_uart_byte__1__rx_data;
    __Vfork_1__sync.done("uart_tx_basic_tb.v", 119);
}

VL_INLINE_OPT VlCoroutine Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(Vuart_tx_basic_tb___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_uart_tx_basic_tb__DOT__send_byte__0__byte_to_send;
    __Vtask_uart_tx_basic_tb__DOT__send_byte__0__byte_to_send = 0;
    // Body
    __Vtask_uart_tx_basic_tb__DOT__send_byte__0__byte_to_send = 0x55U;
    vlSelfRef.uart_tx_basic_tb__DOT__data_in = __Vtask_uart_tx_basic_tb__DOT__send_byte__0__byte_to_send;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         84);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         86);
    vlSelfRef.uart_tx_basic_tb__DOT__start = 0U;
    co_await vlSelfRef.__VtrigSched_h23a82dfd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge uart_tx_basic_tb.busy)", 
                                                         "uart_tx_basic_tb.v", 
                                                         90);
    co_await vlSelfRef.__VtrigSched_h6ee15b6a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_tx_basic_tb.clk)", 
                                                         "uart_tx_basic_tb.v", 
                                                         91);
    __Vfork_1__sync.done("uart_tx_basic_tb.v", 118);
}

void Vuart_tx_basic_tb___024root___eval_act(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_act\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vuart_tx_basic_tb___024root___nba_sequent__TOP__0(Vuart_tx_basic_tb___024root* vlSelf);

void Vuart_tx_basic_tb___024root___eval_nba(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_nba\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vuart_tx_basic_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vuart_tx_basic_tb___024root___nba_sequent__TOP__0(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___nba_sequent__TOP__0\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__uart_tx_basic_tb__DOT__dut__DOT__state;
    __Vdly__uart_tx_basic_tb__DOT__dut__DOT__state = 0;
    SData/*8:0*/ __Vdly__uart_tx_basic_tb__DOT__dut__DOT__clk_counter;
    __Vdly__uart_tx_basic_tb__DOT__dut__DOT__clk_counter = 0;
    CData/*2:0*/ __Vdly__uart_tx_basic_tb__DOT__dut__DOT__bit_index;
    __Vdly__uart_tx_basic_tb__DOT__dut__DOT__bit_index = 0;
    // Body
    __Vdly__uart_tx_basic_tb__DOT__dut__DOT__state 
        = vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__state;
    __Vdly__uart_tx_basic_tb__DOT__dut__DOT__bit_index 
        = vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__bit_index;
    __Vdly__uart_tx_basic_tb__DOT__dut__DOT__clk_counter 
        = vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__clk_counter;
    if (vlSelfRef.uart_tx_basic_tb__DOT__rst_n) {
        if ((4U & (IData)(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__state))) {
            __Vdly__uart_tx_basic_tb__DOT__dut__DOT__state = 0U;
        } else if ((2U & (IData)(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__state))) {
                vlSelfRef.uart_tx_basic_tb__DOT__tx = 1U;
                if (vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__baud_clk_en) {
                    __Vdly__uart_tx_basic_tb__DOT__dut__DOT__clk_counter = 0U;
                    __Vdly__uart_tx_basic_tb__DOT__dut__DOT__state = 0U;
                    vlSelfRef.uart_tx_basic_tb__DOT__busy = 0U;
                } else {
                    __Vdly__uart_tx_basic_tb__DOT__dut__DOT__clk_counter 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__clk_counter)));
                }
            } else {
                vlSelfRef.uart_tx_basic_tb__DOT__tx 
                    = (1U & ((IData)(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__data_reg) 
                             >> (IData)(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__bit_index)));
                if (vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__baud_clk_en) {
                    __Vdly__uart_tx_basic_tb__DOT__dut__DOT__clk_counter = 0U;
                    if ((7U == (IData)(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__bit_index))) {
                        __Vdly__uart_tx_basic_tb__DOT__dut__DOT__bit_index = 0U;
                        __Vdly__uart_tx_basic_tb__DOT__dut__DOT__state = 3U;
                    } else {
                        __Vdly__uart_tx_basic_tb__DOT__dut__DOT__bit_index 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__bit_index)));
                    }
                } else {
                    __Vdly__uart_tx_basic_tb__DOT__dut__DOT__clk_counter 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__clk_counter)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__state))) {
            vlSelfRef.uart_tx_basic_tb__DOT__tx = 0U;
            if (vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__baud_clk_en) {
                __Vdly__uart_tx_basic_tb__DOT__dut__DOT__clk_counter = 0U;
                __Vdly__uart_tx_basic_tb__DOT__dut__DOT__state = 2U;
            } else {
                __Vdly__uart_tx_basic_tb__DOT__dut__DOT__clk_counter 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__clk_counter)));
            }
        } else {
            __Vdly__uart_tx_basic_tb__DOT__dut__DOT__clk_counter = 0U;
            __Vdly__uart_tx_basic_tb__DOT__dut__DOT__bit_index = 0U;
            vlSelfRef.uart_tx_basic_tb__DOT__tx = 1U;
            if (vlSelfRef.uart_tx_basic_tb__DOT__start) {
                vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__data_reg 
                    = vlSelfRef.uart_tx_basic_tb__DOT__data_in;
                vlSelfRef.uart_tx_basic_tb__DOT__busy = 1U;
                __Vdly__uart_tx_basic_tb__DOT__dut__DOT__state = 1U;
            } else {
                vlSelfRef.uart_tx_basic_tb__DOT__busy = 0U;
            }
        }
    } else {
        __Vdly__uart_tx_basic_tb__DOT__dut__DOT__clk_counter = 0U;
        __Vdly__uart_tx_basic_tb__DOT__dut__DOT__bit_index = 0U;
        __Vdly__uart_tx_basic_tb__DOT__dut__DOT__state = 0U;
        vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__data_reg = 0U;
        vlSelfRef.uart_tx_basic_tb__DOT__tx = 1U;
        vlSelfRef.uart_tx_basic_tb__DOT__busy = 0U;
    }
    vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__state 
        = __Vdly__uart_tx_basic_tb__DOT__dut__DOT__state;
    vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__bit_index 
        = __Vdly__uart_tx_basic_tb__DOT__dut__DOT__bit_index;
    vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__clk_counter 
        = __Vdly__uart_tx_basic_tb__DOT__dut__DOT__clk_counter;
    vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__baud_clk_en 
        = (0x1b1U == (IData)(vlSelfRef.uart_tx_basic_tb__DOT__dut__DOT__clk_counter));
}

void Vuart_tx_basic_tb___024root___timing_resume(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___timing_resume\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h6ee15b6a__0.resume(
                                                   "@(posedge uart_tx_basic_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h23a82dfd__0.resume(
                                                   "@(negedge uart_tx_basic_tb.busy)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h690aa6f8__0.resume(
                                                   "@(negedge uart_tx_basic_tb.tx)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vuart_tx_basic_tb___024root___timing_commit(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___timing_commit\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h6ee15b6a__0.commit(
                                                   "@(posedge uart_tx_basic_tb.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h23a82dfd__0.commit(
                                                   "@(negedge uart_tx_basic_tb.busy)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h690aa6f8__0.commit(
                                                   "@(negedge uart_tx_basic_tb.tx)");
    }
}

void Vuart_tx_basic_tb___024root___eval_triggers__act(Vuart_tx_basic_tb___024root* vlSelf);

bool Vuart_tx_basic_tb___024root___eval_phase__act(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_phase__act\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vuart_tx_basic_tb___024root___eval_triggers__act(vlSelf);
    Vuart_tx_basic_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vuart_tx_basic_tb___024root___timing_resume(vlSelf);
        Vuart_tx_basic_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vuart_tx_basic_tb___024root___eval_phase__nba(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_phase__nba\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vuart_tx_basic_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tx_basic_tb___024root___dump_triggers__nba(Vuart_tx_basic_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tx_basic_tb___024root___dump_triggers__act(Vuart_tx_basic_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vuart_tx_basic_tb___024root___eval(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vuart_tx_basic_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("uart_tx_basic_tb.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vuart_tx_basic_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("uart_tx_basic_tb.v", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vuart_tx_basic_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vuart_tx_basic_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vuart_tx_basic_tb___024root___eval_debug_assertions(Vuart_tx_basic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx_basic_tb___024root___eval_debug_assertions\n"); );
    Vuart_tx_basic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
