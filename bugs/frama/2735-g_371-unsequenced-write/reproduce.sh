#!/bin/bash
# Script to reproduce g_371 slicing issue
set -e

echo "=== Building and running original program ==="
cd $EXPERIMENTAL_FRAMAC_TESTING/bugs/test8
gcc -o 50NYE5_seed_syn0 50NYE5_seed_syn0.c -lm
echo "Original program output:"
./50NYE5_seed_syn0 | grep "g_371"

echo "\n=== Running sliced program ==="
gcc -o mutant_g371_only mutant_g371_only.c -lm
echo "Sliced program output:"
./mutant_g371_only | grep "g_371"

echo "\n=== Reproduction complete ==="
