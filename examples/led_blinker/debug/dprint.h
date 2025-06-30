#ifndef MOCK_DEBUG_DPRINT_H
#define MOCK_DEBUG_DPRINT_H

#include <iostream>
#include <sstream>
#include <iomanip>

// Mock DPRINT class that mimics TT-Metal's debug printing
class DPrintStream {
private:
    std::ostringstream buffer;
    
public:
    // Template operator<< to handle any type
    template<typename T>
    DPrintStream& operator<<(const T& value) {
        buffer << value;
        return *this;
    }
    
    // Special handling for manipulators like std::endl
    DPrintStream& operator<<(std::ostream& (*pf)(std::ostream&)) {
        buffer << pf;
        return *this;
    }
    
    // Flush the buffer to stdout
    void flush() {
        std::cout << buffer.str();
        std::cout.flush();
        buffer.str("");
        buffer.clear();
    }
    
    // Get the accumulated string (for testing)
    std::string str() const {
        return buffer.str();
    }
};

// ENDL function that flushes the DPRINT buffer
struct EndlType {
    // Empty struct, just used as a marker
};

inline EndlType ENDL() {
    return EndlType{};
}

// Global DPRINT instance
inline DPrintStream& getDPRINT() {
    static DPrintStream instance;
    return instance;
}

// Specialization for ENDL
template<>
inline DPrintStream& DPrintStream::operator<<(const EndlType& /*endl*/) {
    buffer << std::endl;
    flush();
    return *this;
}

// Macro to access the global DPRINT instance
#define DPRINT getDPRINT()

// Optional: Add colored output support
#ifdef ENABLE_COLOR_OUTPUT
    #define DPRINT_RED     "\033[31m"
    #define DPRINT_GREEN   "\033[32m"
    #define DPRINT_YELLOW  "\033[33m"
    #define DPRINT_BLUE    "\033[34m"
    #define DPRINT_RESET   "\033[0m"
#else
    #define DPRINT_RED     ""
    #define DPRINT_GREEN   ""
    #define DPRINT_YELLOW  ""
    #define DPRINT_BLUE    ""
    #define DPRINT_RESET   ""
#endif

// Optional: Add timestamp support
#ifdef ENABLE_TIMESTAMPS
    #include <chrono>
    #include <ctime>
    
    inline std::string getTimestamp() {
        auto now = std::chrono::system_clock::now();
        auto time_t = std::chrono::system_clock::to_time_t(now);
        auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(
            now.time_since_epoch()) % 1000;
        
        std::stringstream ss;
        ss << std::put_time(std::localtime(&time_t), "[%H:%M:%S");
        ss << '.' << std::setfill('0') << std::setw(3) << ms.count() << "] ";
        return ss.str();
    }
    
    #define DPRINT_TS getDPRINT() << getTimestamp()
#else
    #define DPRINT_TS DPRINT
#endif

#endif // MOCK_DEBUG_DPRINT_H

