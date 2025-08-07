// adaptation_basis/verilated_trace.h
#ifndef ADAPTATION_VERILATED_TRACE_H
#define ADAPTATION_VERILATED_TRACE_H

#include "verilated_types.h"

// For string support without STL
namespace std {
    class string {
        char buf[256];
    public:
        string() { buf[0] = 0; }
        string(const char* s) {
            int i = 0;
            while (s[i] && i < 255) {
                buf[i] = s[i];
                i++;
            }
            buf[i] = 0;
        }
        string(const char* s, int) : string(s) {} // For compatibility
        const char* c_str() const { return buf; }
    };
}

// Base class for tracing (stubbed out for now)
class VerilatedTraceBaseC {
public:
    virtual ~VerilatedTraceBaseC() {}
};

// Trace signal types
enum VerilatedTraceSigDirection { INPUT, OUTPUT, INOUT, NONE };
enum VerilatedTraceSigKind { WIRE, VAR, PARAMETER, SUPPLY };
enum VerilatedTraceSigType { LOGIC, BIT, INTEGER, REAL };
enum VerilatedTracePrefixType { SCOPE_MODULE };

#endif
