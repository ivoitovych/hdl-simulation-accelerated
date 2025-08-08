// adaptation_basis/verilated_funcs.h
#ifndef ADAPTATION_VERILATED_FUNCS_H
#define ADAPTATION_VERILATED_FUNCS_H

#include "verilated_types.h"

// Utility functions
inline int VL_MURMUR64_HASH(const char* key) {
    // Simple hash function (not cryptographically secure, just for initialization)
    uint64_t hash = 0;
    while (*key) {
        hash = hash * 31 + *key++;
    }
    return (int)hash;
}

// Random reset macros for initialization
#define VL_SCOPED_RAND_RESET_I(bits, scopeHash, seed) 0

// Fatal error handling
inline void vl_fatal(const char* filename, int linenum, const char* hier, const char* msg) {
    // In real accelerator, this might trigger an interrupt or exception
    // For now, just halt in an infinite loop
    while(1) {}
}

#define VL_FATAL_MT(filename, linenum, hier, msg) vl_fatal(filename, linenum, hier, msg)

// NOTE: Do not define Verilated namespace functions here to avoid duplication

#endif
