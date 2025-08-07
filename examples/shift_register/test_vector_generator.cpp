#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <sstream>

class TestVectorGenerator {
private:
    int width;
    std::ofstream outFile;
    int vectorCount;
    
    // Simple pseudo-random generator for reproducibility
    unsigned int seed;
    
    unsigned int pseudoRandom() {
        seed = seed * 1103515245 + 12345;
        return (seed >> 16) & 0x7FFF;
    }
    
    std::string toHex(unsigned long value, int nibbles) {
        std::stringstream ss;
        ss << std::hex << std::setfill('0') << std::setw(nibbles) << value;
        return ss.str();
    }
    
    unsigned long createMask(int bits) {
        if (bits >= 64) return ~0UL;
        return (1UL << bits) - 1;
    }

public:
    TestVectorGenerator(int w, const std::string& filename) : width(w), seed(123456789) {
        outFile.open(filename);
        if (!outFile.is_open()) {
            std::cerr << "Error: Could not open output file " << filename << std::endl;
            exit(1);
        }
        vectorCount = 0;
        
        // Write header comment
        outFile << "# Test vectors for " << width << "-bit universal shift register" << std::endl;
        outFile << "# Format: rst_n enable mode serial_in_right serial_in_left parallel_in[hex]" << std::endl;
    }
    
    ~TestVectorGenerator() {
        if (outFile.is_open()) {
            outFile.close();
        }
    }
    
    void addVector(int rst_n, int enable, int mode, int sir, int sil, unsigned long parallel) {
        int hexNibbles = (width + 3) / 4;
        unsigned long mask = createMask(width);
        outFile << rst_n << " " << enable << " " << mode << " " 
                << sir << " " << sil << " " 
                << toHex(parallel & mask, hexNibbles) << std::endl;
        vectorCount++;
    }
    
    void generateResetSequence() {
        // Reset assertion
        addVector(0, 0, 0, 0, 0, 0);
        addVector(0, 0, 0, 0, 0, 0);
        
        // Reset deassertion
        addVector(1, 0, 0, 0, 0, 0);
    }
    
    void generateBasicTests() {
        unsigned long mask = createMask(width);
        
        // Test enable/disable
        addVector(1, 0, 3, 0, 0, mask); // Load all 1s but disabled
        addVector(1, 1, 3, 0, 0, mask); // Load all 1s enabled
        
        // Test hold mode
        addVector(1, 1, 0, 1, 1, 0);   // Hold with serial inputs high
        
        // Test shift right
        addVector(1, 1, 1, 0, 0, 0);   // Shift right with 0
        addVector(1, 1, 1, 1, 0, 0);   // Shift right with 1
        
        // Test shift left
        addVector(1, 1, 2, 0, 0, 0);   // Shift left with 0
        addVector(1, 1, 2, 0, 1, 0);   // Shift left with 1
        
        // Load alternating pattern
        unsigned long alternating = 0;
        for (int i = 0; i < width; i += 2) {
            if (i < width) alternating |= (0UL << i);
            if (i + 1 < width) alternating |= (1UL << (i + 1));
        }
        addVector(1, 1, 3, 0, 0, alternating & mask);
    }
    
    void generateWalkingOnesTest() {
        // Load single bit and walk it
        addVector(1, 1, 3, 0, 0, 1);   // Load LSB = 1
        
        // Shift left width-1 times
        for (int i = 0; i < width - 1; i++) {
            addVector(1, 1, 2, 0, 0, 0); // Shift left with 0
        }
    }
    
    void generateRandomTests(int count) {
        for (int i = 0; i < count; i++) {
            int enable = pseudoRandom() & 1;
            int mode = pseudoRandom() & 3;
            int sir = pseudoRandom() & 1;
            int sil = pseudoRandom() & 1;
            
            // Generate random parallel input
            unsigned long parallel = 0;
            for (int j = 0; j < width; j += 16) {
                parallel |= ((unsigned long)pseudoRandom() << j);
            }
            
            addVector(1, enable, mode, sir, sil, parallel);
        }
    }
    
    void generate() {
        generateResetSequence();
        generateBasicTests();
        generateWalkingOnesTest();
        generateRandomTests(100);
        
        std::cout << "Generated " << vectorCount << " test vectors" << std::endl;
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
    
    TestVectorGenerator gen(width, "input_vectors.txt");
    gen.generate();
    
    return 0;
}
