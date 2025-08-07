#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>

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
                    // No change
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

public:
    OutputValidator(int w) : width(w), currentState(0), errorCount(0), testCount(0) {}
    
    bool validateLine(const std::string& line) {
        // Skip comments and empty lines
        if (line.empty() || line[0] == '#') {
            return true;
        }
        
        // Parse line
        std::istringstream iss(line);
        int rst_n, enable, mode, sir, sil;
        std::string parallel_hex, output_hex;
        
        if (!(iss >> rst_n >> enable >> mode >> sir >> sil >> parallel_hex >> output_hex)) {
            std::cerr << "Error parsing line: " << line << std::endl;
            return false;
        }
        
        // Convert hex strings
        unsigned long parallel_value = std::stoul(parallel_hex, nullptr, 16);
        unsigned long output_value = std::stoul(output_hex, nullptr, 16);
        
        // Predict expected output
        unsigned long expected = predictOutput(rst_n, enable, mode, sir, sil, parallel_value);
        
        testCount++;
        
        // Compare
        if (output_value != expected) {
            errorCount++;
            std::cerr << "ERROR at test " << testCount << ":" << std::endl;
            std::cerr << "  Inputs: rst_n=" << rst_n << " enable=" << enable 
                     << " mode=" << mode << " sir=" << sir << " sil=" << sil 
                     << " parallel=0x" << parallel_hex << std::endl;
            std::cerr << "  Expected: 0x" << std::hex << expected 
                     << " Got: 0x" << output_value << std::dec << std::endl;
            return false;
        }
        
        return true;
    }
    
    void validateFile(const std::string& filename) {
        std::ifstream inFile(filename);
        
        if (!inFile.is_open()) {
            std::cerr << "Error: Could not open file " << filename << std::endl;
            return;
        }
        
        std::string line;
        int lineNum = 0;
        
        std::cout << "Validating output vectors..." << std::endl;
        
        while (std::getline(inFile, line)) {
            lineNum++;
            validateLine(line);
        }
        
        inFile.close();
        
        // Report results
        if (errorCount == 0) {
            std::cout << "PASSED: All " << testCount << " tests passed!" << std::endl;
        } else {
            std::cout << "FAILED: " << errorCount << " out of " << testCount 
                     << " tests failed!" << std::endl;
        }
    }
};

int main(int argc, char** argv) {
    int width = 8;
    
    if (argc > 1) {
        width = std::atoi(argv[1]);
        if (width < 1 || width > 64) {
            std::cerr << "Error: Width must be between 1 and 64" << std::endl;
            return 1;
        }
    }
    
    OutputValidator validator(width);
    validator.validateFile("output_vectors.txt");
    
    return 0;
}
