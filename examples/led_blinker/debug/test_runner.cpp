// test_runner.cpp - Generic test runner for Verilator-generated TT-Metal kernels

#include <iostream>

// Helper macros for stringification
#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

// Check if KERNEL_FILE is defined
#ifndef KERNEL_FILE
    #error "KERNEL_FILE must be defined. Use -DKERNEL_FILE=your_kernel.cpp"
#endif

// Define a dummy namespace if not provided
#ifndef NAMESPACE
    #define NAMESPACE ckernel
#endif

// Include the kernel file specified by -D switch
#include TOSTRING(KERNEL_FILE)

int main() {
    std::cout << "=== Running Verilator Simulation Test ===" << std::endl;
    std::cout << "Kernel file: " << TOSTRING(KERNEL_FILE) << std::endl;
    std::cout << "Namespace: " << TOSTRING(NAMESPACE) << std::endl;
    std::cout << "==========================================" << std::endl;

    // Call the simulation functions
    NAMESPACE::unpack_main();
    NAMESPACE::math_main();
    NAMESPACE::pack_main();

    std::cout << "==========================================" << std::endl;
    std::cout << "=== Test Complete ===" << std::endl;

    return 0;
}

