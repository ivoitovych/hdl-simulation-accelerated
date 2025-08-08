// adaptation_basis/verilated.h
#ifndef ADAPTATION_VERILATED_H
#define ADAPTATION_VERILATED_H

#include "verilated_config.h"
#include "verilated_types.h"
#include "verilated_funcs.h"

// Forward declarations
class VerilatedContext;
class VerilatedSyms;
class VerilatedVcdC;
class VerilatedTraceBaseC;

// Trace configuration - moved before its use
struct VerilatedTraceConfig {
    bool m_a, m_b, m_c;
    VerilatedTraceConfig(bool a, bool b, bool c) : m_a(a), m_b(b), m_c(c) {}
};

// Simple unique_ptr replacement for no-STL environments
template<typename T>
class unique_ptr {
    T* ptr;
public:
    unique_ptr() : ptr(nullptr) {}
    explicit unique_ptr(T* p) : ptr(p) {}
    ~unique_ptr() { delete ptr; }
    T* operator->() { return ptr; }
    T& operator*() { return *ptr; }
    T* get() { return ptr; }
    T* release() { T* p = ptr; ptr = nullptr; return p; }
    void reset(T* p = nullptr) { delete ptr; ptr = p; }
};
namespace std { using ::unique_ptr; }

// Trigger vector for event handling
template<int T_Bits>
class VlTriggerVec {
    uint64_t m_bits[((T_Bits + 63) / 64)];
public:
    VlTriggerVec() { clear(); }
    void clear() { 
        for (int i = 0; i < ((T_Bits + 63) / 64); ++i) m_bits[i] = 0;
    }
    bool any() const {
        for (int i = 0; i < ((T_Bits + 63) / 64); ++i) {
            if (m_bits[i]) return true;
        }
        return false;
    }
    uint64_t word(int index) const { return m_bits[index]; }
    void setBit(int bit, bool val) {
        int word = bit / 64;
        int offset = bit % 64;
        if (val) {
            m_bits[word] |= (1ULL << offset);
        } else {
            m_bits[word] &= ~(1ULL << offset);
        }
    }
    void thisOr(const VlTriggerVec& other) {
        for (int i = 0; i < ((T_Bits + 63) / 64); ++i) {
            m_bits[i] |= other.m_bits[i];
        }
    }
    void andNot(const VlTriggerVec& a, const VlTriggerVec& b) {
        for (int i = 0; i < ((T_Bits + 63) / 64); ++i) {
            m_bits[i] = a.m_bits[i] & ~b.m_bits[i];
        }
    }
};

// Basic deleter functionality
class VlDeleter {
public:
    void deleteAll() {}
};

// Message queue stub
class VerilatedEvalMsgQueue {
public:
    VerilatedEvalMsgQueue() {}
};

// Verilated context (simplified)
class VerilatedContext {
    bool m_calcUnusedSigs = true;
    bool m_fatalOnError = true;
    int m_timeunit = -12;
    int m_timeprecision = -12;
    
public:
    VerilatedContext() {}
    void timeunit(int n) { m_timeunit = n; }
    void timeprecision(int n) { m_timeprecision = n; }
    bool calcUnusedSigs() const { return m_calcUnusedSigs; }
    void traceEverOn(bool flag) {}
    void commandArgs(int argc, char** argv) {}
    void addModel(class VerilatedModel* model) {}
    
    template<typename T>
    void traceBaseModelCbAdd(T cb) {}
    
    void trace(VerilatedTraceBaseC* tfp, int levels, int options) {}
    void prepareClone() {}
    void threadPoolpOnClone() {}
    static VerilatedContext* threadContextp() { 
        static VerilatedContext s_context;
        return &s_context; 
    }
};

// Base classes for models
class VerilatedModule {
protected:
    const char* m_namep;
public:
    explicit VerilatedModule(const char* namep) : m_namep(namep) {}
    const char* name() const { return m_namep; }
    virtual const char* hierName() const { return m_namep; }
    virtual const char* modelName() const { return m_namep; }
    virtual unsigned threads() const { return 1; }
    virtual std::unique_ptr<VerilatedTraceConfig> traceConfig() const {
        return std::unique_ptr<VerilatedTraceConfig>(new VerilatedTraceConfig(false, false, false));
    }
};

class VerilatedModel : public VerilatedModule {
protected:
    VerilatedContext& m_contextp;
public:
    // Provide both constructors for compatibility
    explicit VerilatedModel(VerilatedContext& contextp) 
        : VerilatedModule("TOP"), m_contextp(contextp) {}
    
    VerilatedModel(VerilatedContext& contextp, const char* namep) 
        : VerilatedModule(namep), m_contextp(contextp) {}
        
    VerilatedContext* contextp() const { return const_cast<VerilatedContext*>(&m_contextp); }
};

class VerilatedSyms {
public:
    VerilatedContext* _vm_contextp__;
    VerilatedEvalMsgQueue* __Vm_evalMsgQp;
    explicit VerilatedSyms(VerilatedContext* contextp) 
        : _vm_contextp__(contextp), __Vm_evalMsgQp(new VerilatedEvalMsgQueue()) {}
    ~VerilatedSyms() { delete __Vm_evalMsgQp; }
};

// Global Verilated namespace
namespace Verilated {
    inline void stackCheck(int depth) {}
    inline void overWidthError(const char*) {}
    inline void commandArgs(int argc, char** argv) {}
    inline void traceEverOn(bool flag) {}
    inline void endOfEval(VerilatedEvalMsgQueue*) {}
    inline VerilatedContext* threadContextp() { return VerilatedContext::threadContextp(); }
}

#endif
