#!/bin/bash
# Debug script to check the split simulation pipeline

echo "=== Checking Pipeline Results ==="
echo ""

echo "1. Vectors file (first 10 lines):"
echo "--------------------------------"
head -10 results/vectors.csv
echo ""

echo "2. Results file (first 10 lines):"
echo "--------------------------------"
head -10 results/results.csv
echo ""

echo "3. Verification log (first 20 lines):"
echo "------------------------------------"
head -20 results/split_output.log
echo ""

echo "4. Traditional output (first 10 lines):"
echo "---------------------------------------"
head -10 results/traditional_output.log
echo ""

echo "5. File sizes:"
echo "-------------"
ls -la results/
echo ""

echo "=== Manual Test of DUT Simulator ==="
echo "Testing with a single vector:"
echo "35,1,1,1,1" | ./obj_dir/Vdut_sim

