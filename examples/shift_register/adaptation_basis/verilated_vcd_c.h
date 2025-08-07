// adaptation_basis/verilated_vcd_c.h
#ifndef ADAPTATION_VERILATED_VCD_C_H
#define ADAPTATION_VERILATED_VCD_C_H

#include "verilated_trace.h"

// VCD trace implementation (stubbed for now)
class VerilatedVcdC : public VerilatedTraceBaseC {
public:
    class Buffer {
    public:
        void chgBit(uint32_t* oldp, bool val) {}
        void chgCData(uint32_t* oldp, CData val, int bits) {}
        void chgIData(uint32_t* oldp, IData val, int bits) {}
        void chgQData(uint32_t* oldp, QData val, int bits) {}
        void fullBit(uint32_t* oldp, bool val) {}
        void fullCData(uint32_t* oldp, CData val, int bits) {}
        void fullIData(uint32_t* oldp, IData val, int bits) {}
        void fullQData(uint32_t* oldp, QData val, int bits) {}
        uint32_t* oldp(uint32_t code) { return nullptr; }
    };
    
    VerilatedVcdC() {}
    ~VerilatedVcdC() {}
    void open(const char* filename) {}
    void close() {}
    void dump(vluint64_t time) {}
    void pushPrefix(const char* str, VerilatedTracePrefixType type) {}
    void pushPrefix(const std::string& str, VerilatedTracePrefixType type) { pushPrefix(str.c_str(), type); }
    void popPrefix() {}
    
    void declBit(uint32_t code, int direction, const char* name, int arraynum, 
                 VerilatedTraceSigDirection dir, VerilatedTraceSigKind kind, 
                 VerilatedTraceSigType type, bool array, int msb) {}
    
    // Updated declBus with correct number of parameters (11)
    void declBus(uint32_t code, int direction, const char* name, int arraynum,
                 VerilatedTraceSigDirection dir, VerilatedTraceSigKind kind, 
                 VerilatedTraceSigType type, bool array, int msb, int lsb, int rsb = 0) {}
    
    void addConstCb(void (*cb)(void*, Buffer*), uint32_t code, void* user) {}
    void addFullCb(void (*cb)(void*, Buffer*), uint32_t code, void* user) {}
    void addChgCb(void (*cb)(void*, Buffer*), uint32_t code, void* user) {}
    void addCleanupCb(void (*cb)(void*, VerilatedVcdC*), void* user) {}
    void addModel(void* model) {}
    
    // Support both signatures for addInitCb
    void addInitCb(void (*cb)(void*, VerilatedVcdC*), void* user) {}
    void addInitCb(void (*cb)(void*, VerilatedVcdC*, uint32_t), void* user) {}
    
    VerilatedVcdC* spTrace() { return this; }
};

// Typedef for compatibility
typedef VerilatedVcdC VerilatedVcd;

#endif
