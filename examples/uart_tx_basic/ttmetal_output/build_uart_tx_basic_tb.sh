#!/bin/bash
# Build script for uart_tx_basic_tb TT-Metal kernel

# Add Verilator output directory to include path
VERILATOR_INCLUDE="-Iobj_dir"

# Add TT-Metal adapter to include path
ADAPTER_INCLUDE="-I."  # Assumes adapter headers are in current directory

# Compile the kernel
# Note: Actual TT-Metal compilation command would go here
echo "Building uart_tx_basic_tb_ttmetal_kernel.cpp..."
echo "Include paths: $VERILATOR_INCLUDE $ADAPTER_INCLUDE"

# Placeholder for actual TT-Metal build command
# tt_metal_build_kernel ...
