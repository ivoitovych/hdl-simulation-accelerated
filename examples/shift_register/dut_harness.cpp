#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>
#include "Vuniversal_shift_register.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

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
        // Create DUT instance
        dut = new Vuniversal_shift_register;
        
        // Setup tracing if enabled
        if (trace_enabled) {
            Verilated::traceEverOn(true);
            tfp = new VerilatedVcdC;
            dut->trace(tfp, 99);
            tfp->open("waveform.vcd");
        }
        
        // Initial values
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
        // Toggle clock
        dut->clk = 0;
        dut->eval();
        if (trace_enabled && tfp) tfp->dump(time_counter++);
        
        dut->clk = 1;
        dut->eval();
        if (trace_enabled && tfp) tfp->dump(time_counter++);
    }
    
    void applyVector(const std::string& line, std::ofstream& outputFile) {
        // Skip comments and empty lines
        if (line.empty() || line[0] == '#') {
            outputFile << line << std::endl;
            return;
        }
        
        // Parse input vector
        std::istringstream iss(line);
        int rst_n, enable, mode, sir, sil;
        std::string parallel_hex;
        
        if (!(iss >> rst_n >> enable >> mode >> sir >> sil >> parallel_hex)) {
            std::cerr << "Error parsing line: " << line << std::endl;
            return;
        }
        
        // Convert hex string to value
        unsigned long parallel_value = std::stoul(parallel_hex, nullptr, 16);
        
        // Apply inputs on negative edge
        dut->rst_n = rst_n;
        dut->enable = enable;
        dut->mode = mode;
        dut->serial_in_right = sir;
        dut->serial_in_left = sil;
        dut->parallel_in = parallel_value;
        
        // Clock the design
        tick();
        
        // Capture output and write to output file
        int hexNibbles = (width + 3) / 4;
        outputFile << line << " " << toHex(dut->q, hexNibbles) << std::endl;
    }
    
    void processVectors(const std::string& inputFile, const std::string& outputFile) {
        std::ifstream inFile(inputFile);
        std::ofstream outFile(outputFile);
        
        if (!inFile.is_open()) {
            std::cerr << "Error: Could not open input file " << inputFile << std::endl;
            return;
        }
        
        if (!outFile.is_open()) {
            std::cerr << "Error: Could not open output file " << outputFile << std::endl;
            return;
        }
        
        std::string line;
        int lineCount = 0;
        
        while (std::getline(inFile, line)) {
            applyVector(line, outFile);
            lineCount++;
        }
        
        std::cout << "Processed " << lineCount << " lines" << std::endl;
        
        inFile.close();
        outFile.close();
    }
};

int main(int argc, char** argv) {
    // Initialize Verilator
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
    
    std::cout << "Running DUT harness for " << width << "-bit shift register" << std::endl;
    
    DUTHarness harness(width, enable_trace);
    harness.processVectors("input_vectors.txt", "output_vectors.txt");
    
    return 0;
}
