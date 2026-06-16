# Configuration Guide

This project requires several external tools. All paths below must be adapted to your local environment.

## Quick start

```bash
# Required: point the project to its dependencies
export CREAL_SCRIPT=/path/to/creal/creal.py
export DG_LLVM_SLICER_BINARY=/path/to/llvm-slicer
export CSMITH_HOME=/path/to/csmith

# Optional: AST mutator for MR2/MR3
# Build with: cmake -S tooling -B tooling/build && cmake --build tooling/build
export MR_AST_TOOL_BIN=$PWD/tooling/build/mr_ast_tool
```

## Environment variables

| Variable | Required by | Description |
|----------|-------------|-------------|
| `CREAL_SCRIPT` | MR1 (Creal seed source) | Path to `creal.py` |
| `CSMITH_HOME` | CSmith seed generation | CSmith installation root (must contain `include/csmith.h` and `bin/csmith`) |
| `CSMITH_USER_OPTIONS` | CSmith generation | Extra flags passed to csmith |
| `DG_LLVM_SLICER_BINARY` | DG oracle, DG integration tests | Path to `llvm-slicer` binary from [dg](https://github.com/mchalupa/dg) |
| `CLANG_BIN` | Compile gate | Clang binary (default: `clang`) |
| `CSMITH_INCLUDE_DIR` | Compile gate, Frama-C slicing | CSmith headers directory (default: `/usr/include/csmith`) |
| `MR_AST_TOOL_BIN` | MR2/MR3 mutation, integration tests | Path to `mr_ast_tool` (build from `tooling/`) |

## External tool dependencies

### Creal (for MR1)

Creal is a C program mutation tool that uses CSmith + Synthesizer to generate semantic-preserving mutant pairs.

- **Source**: included as a submodule/dependency of the thesis research context; contact the authors for access
- **Requires**: Python 3, CSmith, Synthesizer
- **Configure**: `export CREAL_SCRIPT=/path/to/creal/creal.py` or `--creal-script` flag
- **Note**: Creal is a research prototype with intermittent failures; the pipeline retries up to 5 times per case

### CSmith (for C program generation)

- **Homepage**: <https://github.com/csmith-project/csmith>
- **Install**:
  ```bash
  git clone https://github.com/csmith-project/csmith.git
  cd csmith && cmake -S . -B build && cmake --build build
  ```
- **Configure**: `export CSMITH_HOME=/path/to/csmith` or `--csmith-home` flag
- Header files must be accessible (default: `/usr/include/csmith`; override with `--csmith-include-dir`)

### Synthesizer (Creal dependency)

- **Homepage**: <https://github.com/csmith-project/synthesizer>
- **Install**:
  ```bash
  git clone https://github.com/csmith-project/synthesizer.git
  cd synthesizer && make
  ```

### Frama-C (for Frama-C-based slicing)

- **Homepage**: <https://frama-c.com/>
- **Install** (via OPAM, recommended):
  ```bash
  opam init
  opam install frama-c
  ```
- **Verify**: `frama-c --version`

#### Frama-C CLI flags

| Flag | Default | Description |
|------|---------|-------------|
| `--frama-binary` | `frama-c` | Path to Frama-C executable |
| `--frama-args` | `""` | Extra args passed to frama-c before the input file |
| `--compiler-binary` | `gcc` | C compiler for MR1 value oracle observation programs |
| `--compiler-args` | `-Wall -Wextra` | Extra compiler flags for observation programs |
| `--csmith-include-dir` | `/usr/include/csmith` | CSmith headers directory (passed as `-cpp-extra-args=-I…`) |

### DG / llvm-slicer (for DG-based slicing)

- **Homepage**: <https://github.com/mchalupa/dg>
- **Install**:
  ```bash
  git clone https://github.com/mchalupa/dg.git
  cd dg && mkdir build && cd build
  cmake .. -DCMAKE_BUILD_TYPE=Release
  make -j$(nproc) llvm-slicer
  ```
- **Also requires**: LLVM/Clang toolchain ≥ 14
  - Ubuntu/Debian: `apt install clang-14 llvm-14-dev llvm-14`

#### DG CLI flags

| Flag | Default | Description |
|------|---------|-------------|
| `--dg-binary` | `llvm-slicer` | Path to llvm-slicer (or set `DG_LLVM_SLICER_BINARY` env var) |
| `--dg-clang-binary` | `clang-14` | Clang for seed→bitcode compilation |
| `--dg-llvm-dis-binary` | `llvm-dis-14` | llvm-dis for disassembling sliced bitcode |
| `--dg-lli-binary` | `lli-14` | lli for MR1 sliced program value observation |
| `--dg-llvm-link-binary` | `llvm-link-14` | llvm-link for MR1 observation helper linkage |
| `--dg-args` | `-annotate slice` | Extra args passed to llvm-slicer |
| `--dg-native-compile-args` | `-O0 -Wall -Wextra` | Clang flags for native compilation |
| `--dg-judge-mode` | `off` | LLM-assisted judging: `off` \| `hybrid` \| `required` |
| `--dg-llm-judge-command` | `""` | Command template for LLM judge (`{bundle_json}` placeholder) |
| `--dg-llm-prompt-version` | `v1` | Prompt version for LLM judge |

### mr_ast_tool (for MR2/MR3 AST mutation)

- **Source**: `tooling/` directory in this repository
- **Build**:
  ```bash
  cd $PROJECT
  cmake -S tooling -B tooling/build -DCMAKE_BUILD_TYPE=Release
  cmake --build tooling/build
  ```
- **Requires**: LLVM/Clang 14 development headers
  - Ubuntu/Debian: `apt install libclang-14-dev llvm-14-dev`
- **Binary**: `tooling/build/mr_ast_tool`
- **Configure**: `export MR_AST_TOOL_BIN=$PROJECT/tooling/build/mr_ast_tool` or `--mr-ast-tool` flag

## Running tests

Tests that require external binaries (`DG_LLVM_SLICER_BINARY`, `MR_AST_TOOL_BIN`) will be skipped
if those tools are not installed.

```bash
# No external tools: 225 passed, 8 skipped
PYTHONPATH=src pytest tests/ -q

# With DG built: all DG tests run (set DG_LLVM_SLICER_BINARY)
DG_LLVM_SLICER_BINARY=/path/to/llvm-slicer PYTHONPATH=src pytest tests/ -q

# With mr_ast_tool built: MR2/MR3 mutation tests run
cmake -S tooling -B tooling/build -DCMAKE_BUILD_TYPE=Release
cmake --build tooling/build
PYTHONPATH=src pytest tests/ -q
# All 233 pass
```

## Bug documentation

The `bugs/` directory contains reference materials for 43 confirmed bugs (17 Frama-C + 26 DG).
Shell scripts and reproduction notes use placeholder variables (`$DG_REPO`, `$SLICING_REPO`, etc.) —
adapt these to your local paths before running reproductions.
