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
.PHONY: all clean run trace test_vectors

all: run

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

# Clean up
clean:
	rm -rf obj_dir *.vcd
	rm -f test_vector_generator output_validator
	rm -f input_vectors.txt output_vectors.txt
	rm -f waveform.vcd