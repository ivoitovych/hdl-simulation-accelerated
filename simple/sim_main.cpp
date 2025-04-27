#include "Vcounter.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create an instance of our module
    Vcounter* counter = new Vcounter;
    
    // Initialize inputs
    counter->clk = 0;
    counter->reset = 1;
    counter->eval();
    
    // Release reset
    counter->reset = 0;
    
    // Run for 20 clock cycles
    for (int i = 0; i < 20; i++) {
        // Toggle clock
        counter->clk = !counter->clk;
        counter->eval();
        
        // Print when clock rises
        if (counter->clk) {
            std::cout << "Count: " << (int)counter->count << std::endl;
        }
    }
    
    // Clean up
    delete counter;
    return 0;
}

