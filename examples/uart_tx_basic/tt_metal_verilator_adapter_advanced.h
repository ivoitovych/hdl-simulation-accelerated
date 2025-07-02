// tt_metal_verilator_adapter_advanced.h
// Extended framework with signal access and custom testbenches

#ifndef TT_METAL_VERILATOR_ADAPTER_ADVANCED_H
#define TT_METAL_VERILATOR_ADAPTER_ADVANCED_H

#include "tt_metal_verilator_adapter.h"

// Extended runner with signal access and automatic signal detection
template<typename VModel, typename VRootType>
class TTMetalVerilatorRunnerAdvanced {
private:
    std::unique_ptr<VerilatedContext> contextp;
    std::unique_ptr<VModel> model;
    VRootType* rootp;
    bool m_finished = false;
    uint64_t time_step = 5; // Default 5ns timestep
    
public:
    TTMetalVerilatorRunnerAdvanced() {
        contextp = std::make_unique<VerilatedContext>();
        model = std::make_unique<VModel>(contextp.get(), "TOP");
        rootp = &(model->rootp);  // Access to root signals
    }
    
    // Access to root signals for testbench
    VRootType* root() { return rootp; }
    
    // Set time step
    void setTimeStep(uint64_t step) { time_step = step; }
    
    // Single step evaluation
    void step() {
        model->eval();
        contextp->time(contextp->time() + time_step);
    }
    
    // Run with custom testbench function
    template<typename TestbenchFunc>
    void runWithTestbench(TestbenchFunc tb_func, uint64_t max_cycles = 1000000) {
        DPRINT << "Starting Verilator model with custom testbench" << ENDL();
        DPRINT << "=============================================" << ENDL();
        
        uint64_t cycle = 0;
        while (!contextp->gotFinish() && !m_finished && cycle < max_cycles) {
            // Call user testbench function
            bool continue_sim = tb_func(*this, cycle);
            if (!continue_sim) break;
            
            // Evaluate model
            step();
            cycle++;
        }
        
        // Final evaluation
        model->final();
        
        DPRINT << "=============================================" << ENDL();
        DPRINT << "Simulation completed after " << cycle << " cycles" << ENDL();
        DPRINT << "Final time: " << contextp->time() << " ns" << ENDL();
    }
    
    // Run with automatic clock detection (most common case)
    void runAutomatic(uint64_t max_cycles = 1000000) {
        DPRINT << "Starting Verilator model with automatic mode" << ENDL();
        DPRINT << "===========================================" << ENDL();
        
        // The Verilator initial block will handle everything
        // Just keep evaluating until done
        uint64_t cycle = 0;
        while (!contextp->gotFinish() && !m_finished && cycle < max_cycles) {
            model->eval();
            
            if (!model->eventsPending()) break;
            contextp->time(model->nextTimeSlot());
            
            cycle++;
        }
        
        model->final();
        
        DPRINT << "===========================================" << ENDL();
        DPRINT << "Simulation completed after " << cycle << " cycles" << ENDL();
    }
    
    // Get current simulation time
    uint64_t time() const { return contextp->time(); }
};

// Automatic runner selection based on whether testbench exists
#define IMPLEMENT_TT_METAL_VERILATOR_KERNEL_AUTO(VModelClass, VRootClass) \
namespace NAMESPACE { \
    void unpack_main() {} \
    void math_main() { \
        TTMetalVerilatorRunnerAdvanced<VModelClass, VRootClass> runner; \
        runner.runAutomatic(); \
    } \
    void pack_main() {} \
}

// Macro for custom testbench implementation
#define IMPLEMENT_TT_METAL_VERILATOR_KERNEL_CUSTOM(VModelClass, VRootClass, TestbenchCode) \
namespace NAMESPACE { \
    void unpack_main() {} \
    void math_main() { \
        TTMetalVerilatorRunnerAdvanced<VModelClass, VRootClass> runner; \
        auto testbench = [](TTMetalVerilatorRunnerAdvanced<VModelClass, VRootClass>& runner, uint64_t cycle) -> bool { \
            TestbenchCode \
        }; \
        runner.runWithTestbench(testbench); \
    } \
    void pack_main() {} \
}

#endif // TT_METAL_VERILATOR_ADAPTER_ADVANCED_H

