#!/bin/bash

WIDTH=${1:-8}

echo "=== Compiling test vector generator ==="
g++ -o test_vector_generator test_vector_generator.cpp

echo "=== Generating test vectors ==="
./test_vector_generator $WIDTH

echo "=== Verilating the design ==="
verilator -Wall --trace --cc -GWIDTH=$WIDTH universal_shift_register.v --exe dut_harness.cpp

echo "=== Compiling DUT harness ==="
make -C obj_dir -f Vuniversal_shift_register.mk

echo "=== Running DUT harness ==="
obj_dir/Vuniversal_shift_register -WIDTH=$WIDTH

echo "=== Compiling output validator ==="
g++ -o output_validator output_validator.cpp

echo "=== Validating outputs ==="
./output_validator $WIDTH