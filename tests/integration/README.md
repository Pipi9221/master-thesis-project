Integration tests for compile validation, behavior replay, end-to-end mutation
runs, and the shared slicing/oracle entrypoint live here.

Current slicing coverage:

- `test_run_oracle_frama.py` verifies the shared `pipeline.run_oracle` path
  against a fake Frama-C adapter binary for the MR2 retained-symbol path.
- `test_run_oracle_frama_matrix.py` extends Frama coverage to MR1/MR3/MR4
  using the same fake adapter plus real observation instrumentation and
  compile/run in WSL.
- `test_run_oracle_dg.py` verifies the shared `pipeline.run_oracle` path
  against the real WSL `llvm-slicer` toolchain for the MR2 retained-symbol path.
- `test_run_oracle_dg_matrix.py` extends DG coverage to MR1/MR3/MR4,
  including `clang -emit-llvm -> llvm-slicer -> llvm-dis`, MR1 helper-module
  relinking for runnable sliced bitcode, and structured `dg` evidence checks.
