# Makefile for Verilator simulation

# Default parameters
WIDTH ?= 8
PARAMS = -GWIDTH=$(WIDTH)

# Verilator flags
VERILATOR_FLAGS = -Wall --trace --timing -Wno-fatal

# Source files
SRC = universal_shift_register.v
TB = universal_shift_register_tb.v

# Build targets
.PHONY: all clean run

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

# Clean up
clean:
	rm -rf obj_dir *.vcd

