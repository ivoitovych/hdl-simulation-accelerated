#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include "Vuniversal_shift_register.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

// Data structure to hold test vectors in memory
struct TestVector {
    int rst_n;
    int enable;
    int mode;
    int serial_in_right;
    int serial_in_left;
    unsigned long parallel_in;
    unsigned long output_q;  // Will be filled by DUT harness
    bool is_comment;
    std::string comment_text;
    
    TestVector() : rst_n(0), enable(0), mode(0), serial_in_right(0), 
                   serial_in_left(0), parallel_in(0), output_q(0), 
                   is_comment(false), comment_text("") {}
};

// ============================================================================
// PART 1: Test Vector Generator
// ============================================================================
class TestVectorGenerator {
private:
    int width;
    int vectorCount;
    unsigned int seed;
    
    unsigned int pseudoRandom() {
        seed = seed * 1103515245 + 12345;
        return (seed >> 16) & 0x7FFF;
    }
    
    unsigned long createMask(int bits) {
        if (bits >= 64) return ~0UL;
        return (1UL << bits) - 1;
    }
    
    void addVector(std::vector<TestVector>& vectors, int rst_n, int enable, 
                   int mode, int sir, int sil, unsigned long parallel) {
        TestVector tv;
        tv.rst_n = rst_n;
        tv.enable = enable;
        tv.mode = mode;
        tv.serial_in_right = sir;
        tv.serial_in_left = sil;
        tv.parallel_in = parallel & createMask(width);
        tv.is_comment = false;
        vectors.push_back(tv);
        vectorCount++;
    }
    
    void addComment(std::vector<TestVector>& vectors, const std::string& comment) {
        TestVector tv;
        tv.is_comment = true;
        tv.comment_text = comment;
        vectors.push_back(tv);
    }

public:
    TestVectorGenerator(int w) : width(w), seed(123456789), vectorCount(0) {}
    
    void generateResetSequence(std::vector<TestVector>& vectors) {
        addComment(vectors, "# Reset sequence");
        addVector(vectors, 0, 0, 0, 0, 0, 0);
        addVector(vectors, 0, 0, 0, 0, 0, 0);
        addVector(vectors, 1, 0, 0, 0, 0, 0);
    }
    
    void generateBasicTests(std::vector<TestVector>& vectors) {
        unsigned long mask = createMask(width);
        
        addComment(vectors, "# Basic functionality tests");
        addVector(vectors, 1, 0, 3, 0, 0, mask);
        addVector(vectors, 1, 1, 3, 0, 0, mask);
        addVector(vectors, 1, 1, 0, 1, 1, 0);
        addVector(vectors, 1, 1, 1, 0, 0, 0);
        addVector(vectors, 1, 1, 1, 1, 0, 0);
        addVector(vectors, 1, 1, 2, 0, 0, 0);
        addVector(vectors, 1, 1, 2, 0, 1, 0);
        
        unsigned long alternating = 0;
        for (int i = 0; i < width; i += 2) {
            if (i < width) alternating |= (0UL << i);
            if (i + 1 < width) alternating |= (1UL << (i + 1));
        }
        addVector(vectors, 1, 1, 3, 0, 0, alternating & mask);
    }
    
    void generateWalkingOnesTest(std::vector<TestVector>& vectors) {
        addComment(vectors, "# Walking ones test");
        addVector(vectors, 1, 1, 3, 0, 0, 1);
        
        for (int i = 0; i < width - 1; i++) {
            addVector(vectors, 1, 1, 2, 0, 0, 0);
        }
    }
    
    void generateRandomTests(std::vector<TestVector>& vectors, int count) {
        addComment(vectors, "# Random tests");
        for (int i = 0; i < count; i++) {
            int enable = pseudoRandom() & 1;
            int mode = pseudoRandom() & 3;
            int sir = pseudoRandom() & 1;
            int sil = pseudoRandom() & 1;
            
            unsigned long parallel = 0;
            for (int j = 0; j < width; j += 16) {
                parallel |= ((unsigned long)pseudoRandom() << j);
            }
            
            addVector(vectors, 1, enable, mode, sir, sil, parallel);
        }
    }
    
    void generate(std::vector<TestVector>& vectors) {
        generateResetSequence(vectors);
        generateBasicTests(vectors);
        generateWalkingOnesTest(vectors);
        generateRandomTests(vectors, 100);
        
        std::cout << "Generated " << vectorCount << " test vectors" << std::endl;
    }
};

// ============================================================================
// PART 2: DUT Harness
// ============================================================================
class DUTHarness {
private:
    Vuniversal_shift_register* dut;
    VerilatedVcdC* tfp;
    vluint64_t time_counter;
    int width;
    bool trace_enabled;
    
    std::string toHex(unsigned long value, int nibbles) {
        std::stringstream ss;
        ss << std::hex << std::setfill('0') << std::setw(nibbles) << value;
        return ss.str();
    }

public:
    DUTHarness(int w, bool enable_trace = false) : width(w), time_counter(0), trace_enabled(enable_trace) {
        dut = new Vuniversal_shift_register;
        
        if (trace_enabled) {
            Verilated::traceEverOn(true);
            tfp = new VerilatedVcdC;
            dut->trace(tfp, 99);
            tfp->open("waveform.vcd");
        }
        
        dut->clk = 0;
        dut->rst_n = 1;
        dut->enable = 0;
        dut->mode = 0;
        dut->serial_in_right = 0;
        dut->serial_in_left = 0;
        dut->parallel_in = 0;
    }
    
    ~DUTHarness() {
        if (trace_enabled && tfp) {
            tfp->close();
            delete tfp;
        }
        delete dut;
    }
    
    void tick() {
        dut->clk = 0;
        dut->eval();
        if (trace_enabled && tfp) tfp->dump(time_counter++);
        
        dut->clk = 1;
        dut->eval();
        if (trace_enabled && tfp) tfp->dump(time_counter++);
    }
    
    void applyVector(TestVector& tv) {
        if (tv.is_comment) return;
        
        dut->rst_n = tv.rst_n;
        dut->enable = tv.enable;
        dut->mode = tv.mode;
        dut->serial_in_right = tv.serial_in_right;
        dut->serial_in_left = tv.serial_in_left;
        dut->parallel_in = tv.parallel_in;
        
        tick();
        
        tv.output_q = dut->q;
    }
    
    void processVectors(std::vector<TestVector>& vectors) {
        std::cout << "Processing " << vectors.size() << " vectors through DUT..." << std::endl;
        
        int actualVectors = 0;
        for (auto& tv : vectors) {
            if (!tv.is_comment) {
                applyVector(tv);
                actualVectors++;
            }
        }
        
        std::cout << "Processed " << actualVectors << " test vectors" << std::endl;
    }
};

// ============================================================================
// PART 3: Output Validator
// ============================================================================
class OutputValidator {
private:
    int width;
    unsigned long currentState;
    int errorCount;
    int testCount;
    
    unsigned long createMask(int bits) {
        if (bits >= 64) return ~0UL;
        return (1UL << bits) - 1;
    }
    
    unsigned long predictOutput(int rst_n, int enable, int mode, 
                               int sir, int sil, unsigned long parallel) {
        unsigned long mask = createMask(width);
        
        if (!rst_n) {
            currentState = 0;
        } else if (enable) {
            switch (mode) {
                case 0: // Hold
                    break;
                case 1: // Shift right
                    currentState = ((sir ? 1UL : 0UL) << (width - 1)) | 
                                  (currentState >> 1);
                    break;
                case 2: // Shift left
                    currentState = ((currentState << 1) | (sil ? 1UL : 0UL));
                    break;
                case 3: // Load
                    currentState = parallel;
                    break;
            }
            currentState &= mask;
        }
        
        return currentState;
    }
    
    std::string toHex(unsigned long value, int nibbles) {
        std::stringstream ss;
        ss << std::hex << std::setfill('0') << std::setw(nibbles) << value;
        return ss.str();
    }

public:
    OutputValidator(int w) : width(w), currentState(0), errorCount(0), testCount(0) {}
    
    bool validateVector(const TestVector& tv, bool printAll = false) {
        if (tv.is_comment) return true;
        
        unsigned long expected = predictOutput(tv.rst_n, tv.enable, tv.mode,
                                             tv.serial_in_right, tv.serial_in_left,
                                             tv.parallel_in);
        
        testCount++;
        
        if (tv.output_q != expected) {
            errorCount++;
            int hexNibbles = (width + 3) / 4;
            std::cerr << "ERROR at test " << testCount << ":" << std::endl;
            std::cerr << "  Inputs: rst_n=" << tv.rst_n << " enable=" << tv.enable 
                     << " mode=" << tv.mode << " sir=" << tv.serial_in_right 
                     << " sil=" << tv.serial_in_left 
                     << " parallel=0x" << toHex(tv.parallel_in, hexNibbles) << std::endl;
            std::cerr << "  Expected: 0x" << toHex(expected, hexNibbles)
                     << " Got: 0x" << toHex(tv.output_q, hexNibbles) << std::endl;
            return false;
        } else if (printAll) {
            int hexNibbles = (width + 3) / 4;
            std::cout << "Test " << testCount << " PASSED: "
                     << "rst_n=" << tv.rst_n << " enable=" << tv.enable 
                     << " mode=" << tv.mode << " sir=" << tv.serial_in_right 
                     << " sil=" << tv.serial_in_left 
                     << " parallel=0x" << toHex(tv.parallel_in, hexNibbles)
                     << " output=0x" << toHex(tv.output_q, hexNibbles) << std::endl;
        }
        
        return true;
    }
    
    void validateVectors(const std::vector<TestVector>& vectors) {
        std::cout << "Validating output vectors..." << std::endl;
        
        for (const auto& tv : vectors) {
            validateVector(tv, false); // Set to true for verbose output
        }
        
        if (errorCount == 0) {
            std::cout << "PASSED: All " << testCount << " tests passed!" << std::endl;
        } else {
            std::cout << "FAILED: " << errorCount << " out of " << testCount 
                     << " tests failed!" << std::endl;
        }
    }
};

// ============================================================================
// MAIN FUNCTION
// ============================================================================
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    int width = 8;
    bool enable_trace = false;
    
    // Parse arguments
    for (int i = 1; i < argc; i++) {
        std::string arg = argv[i];
        if (arg == "+trace") {
            enable_trace = true;
        } else if (arg.substr(0, 7) == "-WIDTH=") {
            width = std::stoi(arg.substr(7));
        }
    }
    
    std::cout << "=== Combined testbench for " << width << "-bit shift register ===" << std::endl;
    
    // Container for test vectors
    std::vector<TestVector> vectors;
    
    // Phase 1: Generate test vectors
    std::cout << "\n=== Phase 1: Test Vector Generation ===" << std::endl;
    TestVectorGenerator generator(width);
    generator.generate(vectors);
    
    // Phase 2: Apply vectors to DUT
    std::cout << "\n=== Phase 2: DUT Execution ===" << std::endl;
    DUTHarness harness(width, enable_trace);
    harness.processVectors(vectors);
    
    // Phase 3: Validate outputs
    std::cout << "\n=== Phase 3: Output Validation ===" << std::endl;
    OutputValidator validator(width);
    validator.validateVectors(vectors);
    
    return 0;
}
