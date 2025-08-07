# Makefile for Verilator simulation

# Default parameters
WIDTH ?= 8
PARAMS = -GWIDTH=$(WIDTH)

# Verilator flags
VERILATOR_FLAGS = -Wall --trace --timing -Wno-fatal

# Source files
SRC = universal_shift_register.v
TB = universal_shift_register_tb.v

# C++ source files
CXX_SOURCES = test_vector_generator.cpp dut_harness.cpp output_validator.cpp
CXX_TARGETS = test_vector_generator output_validator

# Build targets
.PHONY: all clean run trace test_vectors help

all: run

# === Traditional Testbench Targets ===

# Verilate the design
verilate: $(SRC) $(TB)
	verilator $(VERILATOR_FLAGS) --binary $(PARAMS) $(TB) $(SRC)

# Build the design
build: verilate

# Run the simulation
run: build
	obj_dir/Vuniversal_shift_register_tb

# Run with tracing enabled
trace: build
	obj_dir/Vuniversal_shift_register_tb +trace

# === Modular Test Vector Flow Targets ===

# Build C++ test vector generator
test_vector_generator: test_vector_generator.cpp
	g++ -o test_vector_generator test_vector_generator.cpp

# Build C++ output validator
output_validator: output_validator.cpp
	g++ -o output_validator output_validator.cpp

# Build DUT harness (requires verilated design)
dut_harness: $(SRC) dut_harness.cpp
	verilator $(VERILATOR_FLAGS) --cc $(PARAMS) $(SRC) --exe dut_harness.cpp
	make -C obj_dir -f Vuniversal_shift_register.mk

# Run complete test vector flow
test_vectors: test_vector_generator output_validator dut_harness
	@echo "=== Generating test vectors ==="
	./test_vector_generator $(WIDTH)
	@echo "=== Running DUT harness ==="
	obj_dir/Vuniversal_shift_register -WIDTH=$(WIDTH)
	@echo "=== Validating outputs ==="
	./output_validator $(WIDTH)

# Run test vector flow with trace
test_vectors_trace: test_vector_generator output_validator dut_harness
	@echo "=== Generating test vectors ==="
	./test_vector_generator $(WIDTH)
	@echo "=== Running DUT harness with trace ==="
	obj_dir/Vuniversal_shift_register -WIDTH=$(WIDTH) +trace
	@echo "=== Validating outputs ==="
	./output_validator $(WIDTH)

# === Combined Testbench Targets ===

# Build combined testbench (all-in-one approach)
combined: $(SRC) combined_testbench.cpp
	verilator $(VERILATOR_FLAGS) --cc $(PARAMS) $(SRC) --exe combined_testbench.cpp
	make -C obj_dir -f Vuniversal_shift_register.mk

# Run combined testbench
combined_run: combined
	obj_dir/Vuniversal_shift_register -WIDTH=$(WIDTH)

# Run combined testbench with trace
combined_trace: combined
	obj_dir/Vuniversal_shift_register -WIDTH=$(WIDTH) +trace

# === Utility Targets ===

# Clean up
clean:
	rm -rf obj_dir *.vcd
	rm -f test_vector_generator output_validator
	rm -f input_vectors.txt output_vectors.txt
	rm -f waveform.vcd

# Help target - explains all available targets
help:
	@echo "Universal Shift Register Makefile Targets:"
	@echo ""
	@echo "Traditional Testbench Targets:"
	@echo "  make               - Build and run traditional Verilog testbench (default)"
	@echo "  make run           - Same as 'make'"
	@echo "  make trace         - Run traditional testbench with waveform generation"
	@echo "  make WIDTH=N       - Build and run with N-bit width (default: 8)"
	@echo ""
	@echo "Modular Test Vector Flow Targets:"
	@echo "  make test_vectors        - Run complete modular test flow with file I/O"
	@echo "  make test_vectors_trace  - Run modular test flow with waveform generation"
	@echo "  make test_vector_generator - Build only the test vector generator"
	@echo "  make output_validator    - Build only the output validator"
	@echo "  make dut_harness        - Build only the DUT harness"
	@echo ""
	@echo "Combined Testbench Targets:"
	@echo "  make combined_run   - Run all-in-one testbench (no file I/O)"
	@echo "  make combined_trace - Run all-in-one testbench with waveform generation"
	@echo "  make combined       - Build only the combined testbench"
	@echo ""
	@echo "Utility Targets:"
	@echo "  make clean         - Remove all generated files"
	@echo "  make help          - Show this help message"
	@echo ""
	@echo "Examples:"
	@echo "  make WIDTH=7              - Run traditional testbench with 7-bit register"
	@echo "  make test_vectors WIDTH=16 - Run modular flow with 16-bit register"
	@echo "  make combined_trace WIDTH=8 - Run combined testbench with trace"
