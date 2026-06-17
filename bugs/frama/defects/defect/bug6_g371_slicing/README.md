# g_371 Slicing Issue

This directory contains documentation and reproduction scripts for the Frama-C slicing issue where the global variable g_371 has inconsistent values before and after slicing.

## Issue Summary
- **Original value**: 65527 (0xFFF7)
- **Sliced value**: 50763 (0xC64B)
- **Root cause**: Frama-C failed to preserve complete dependency chain for g_371 in complex expressions

## Documentation
- [ISSUE_SUMMARY.md](ISSUE_SUMMARY.md): Chinese technical summary
- [ISSUE_EN.md](ISSUE_EN.md): English technical summary

## Reproduction
Run ./reproduce.sh to verify the numerical discrepancy between original and sliced programs.

## Classification
This is a static analysis limitation of Frama-C, not a bug in the source program. It demonstrates the tool's difficulty in handling:
- Complex bitwise operations with global variables
- Indirect dependencies through pointer arithmetic
- Multi-layered function call sequences affecting global state
