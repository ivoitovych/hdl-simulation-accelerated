// adaptation_basis/verilated_types.h
#ifndef ADAPTATION_VERILATED_TYPES_H
#define ADAPTATION_VERILATED_TYPES_H

// Only define types if not already defined by system headers
#ifndef _STDINT_H
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;
typedef signed char        int8_t;
typedef signed short       int16_t;
typedef signed int         int32_t;
typedef signed long long   int64_t;
#endif

typedef uint8_t  CData;     // Verilator uses this for up to 8-bit values
typedef uint16_t SData;     // Verilator uses this for 9-16 bit values
typedef uint32_t IData;     // Verilator uses this for 17-32 bit values
typedef uint64_t QData;     // Verilator uses this for 33-64 bit values
typedef uint32_t WData;     // Word size for wide values

typedef uint64_t vluint64_t;

// Macros for input/output declarations - these expand to member variable declarations
#define VL_IN8(name, msb, lsb)   CData name
#define VL_OUT8(name, msb, lsb)  CData name
#define VL_IN(name, msb, lsb)    IData name
#define VL_OUT(name, msb, lsb)   IData name
#define VL_IN64(name, msb, lsb)  QData name
#define VL_OUT64(name, msb, lsb) QData name

// Common Verilator macros
#define VL_LIKELY(x)       __builtin_expect(!!(x), 1)
#define VL_UNLIKELY(x)     __builtin_expect(!!(x), 0)
#define VL_ATTR_UNUSED     __attribute__((unused))
#define VL_ATTR_COLD       __attribute__((cold))
#define VL_NOT_FINAL
#define VL_INLINE_OPT      inline
#define VL_ATTR_HOT        __attribute__((hot))

#define VL_UNCOPYABLE(type) \
    private: \
        type(const type&) = delete; \
        type& operator=(const type&) = delete;

#define VL_DEBUG_IF(stmt)
#define VL_DBG_MSGF(...)

// Memory alignment
#define VL_CACHE_LINE_BYTES 64

// For wide data handling
template<typename T_Data, int T_Bits>
class VlUnpacked {
    T_Data m_data[T_Bits];
public:
    const T_Data& operator[](int index) const { return m_data[index]; }
    T_Data& operator[](int index) { return m_data[index]; }
};

// std::ref replacement
namespace std {
    template<typename T>
    class reference_wrapper {
        T* ptr;
    public:
        reference_wrapper(T& t) : ptr(&t) {}
        T& get() const { return *ptr; }
        operator T&() const { return *ptr; }
    };
    
    template<typename T>
    reference_wrapper<T> ref(T& t) { return reference_wrapper<T>(t); }
}

#endif
