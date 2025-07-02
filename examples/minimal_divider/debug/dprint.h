#ifndef DEBUG_DPRINT_H
#define DEBUG_DPRINT_H

#include <iostream>
#include <iomanip>

// Mockup of TT-Metal DPRINT functionality for local testing
class DPrintStream {
public:
    // Handle various data types
    template<typename T>
    DPrintStream& operator<<(const T& value) {
        std::cout << value;
        return *this;
    }

    // Handle string literals
    DPrintStream& operator<<(const char* str) {
        std::cout << str;
        return *this;
    }
};

// Mock ENDL function
struct EndlType {
    friend std::ostream& operator<<(std::ostream& os, const EndlType&) {
        return os << std::endl;
    }
    
    friend DPrintStream& operator<<(DPrintStream& dp, const EndlType&) {
        std::cout << std::endl;
        return dp;
    }
};

// Static instances to avoid multiple definitions
static DPrintStream dprint_instance;
static EndlType endl_instance;

// Macros to match TT-Metal DPRINT API
#define DPRINT dprint_instance
#define ENDL() endl_instance

#endif // DEBUG_DPRINT_H

