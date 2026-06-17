# MR Experiment Prototype

This directory is the working root for the thesis prototype that constructs
and evaluates `MR1`, `MR2`, `MR3`, and `MR4` relations over C seeds.

Phase 1 (MR1-MR4 oracles, seed sources, bug database) is complete.
Phase 2 focuses on batch experiments, LLM-assisted judging, and thesis writing.

- `MR1`: seed/mutant pairs via Creal or LLM online dual-output generation
- `MR2`: insert criterion-irrelevant data-flow noise on an executable path
- `MR3`: insert criterion-related or criterion-adjacent code inside an
  unreachable control-flow wrapper
- `MR4`: compare single-variable and multi-variable slices with union/intersection
- slicing/oracle follows a shared protocol:
  `seed -> mutant -> slice(seed) -> slice(mutant) -> oracle_result.json`
- LLM-assisted judge available for DG (MR1/MR2/MR3/MR4): hybrid or required mode
- batch experiment controller (`pipeline/batch_controller.py`) for multi-seed,
  multi-config runs
- current slicing support matrix:
  - `frama`: phase-1 runnable oracle for MR1/MR2/MR3/MR4
    - `MR1`: slice both programs, instrument unsliced and sliced variants,
      compile/run four observed programs, and compare criterion values
    - `MR2` / `MR3`: judge by retained inserted symbols in sliced C artifacts
    - `MR4`: compare `union(single-var slices)` with `multi-var slice`
      using statement sets
  - `dg`: phase-1 runnable oracle for MR1/MR2/MR3/MR4
    - compile `seed.c` / `mutant.c` to LLVM bitcode with `clang -g -O0 -emit-llvm`
    - slice bitcode with `llvm-slicer -c ...`
    - disassemble sliced bitcode with `llvm-dis`
    - `MR1`: instrument observation calls, slice on the observation helper,
      link a helper module back into sliced bitcode, and compare runtime values with `lli`
    - `MR2` / `MR3`: judge by retained inserted symbols in sliced LLVM IR
    - `MR4`: compare `union(single-var slices)` with `multi-var slice`
      using LLVM instruction sets

Current project-level split:

- `MR1` supports both Creal (legacy) and LLM online dual-output seed generation
- mutant generation entrypoints support `MR1`, `MR2`, `MR3`, and `MR4`
- oracle entrypoints support `MR1`, `MR2`, `MR3`, and `MR4`
- `pipeline.run_experiment` is the recommended single-seed entrypoint
- `pipeline.batch_controller` is the multi-seed batch entrypoint (see below)
- LLM judge (`oracles/llm_judge.py`) provides hybrid/required judging for DG oracles

Current runtime assumption:

- the active execution path is Linux-first and currently runs in WSL
- the pipeline supports four seed-source families:
  - `creal` for `MR1`
  - `csmith`
  - `llm_files` for pre-generated `.c` seeds
  - `llm_online` for on-the-fly LLM seed generation with screening pipeline
- `csmith` generation can be configured either by CLI flags or by Linux env:
  - `CSMITH_USER_OPTIONS`
  - `CSMITH_HOME`
  - `CSMITH_INCLUDE_DIR`
  - when neither CLI flags nor `CSMITH_USER_OPTIONS` are provided, the default
    generation profile is:
    `--no-bitfields --max-block-depth 3 --max-block-size 4 --max-pointer-depth 2`
- the default compile gate can be configured with:
  - `CLANG_BIN`
  - `CSMITH_INCLUDE_DIR`

## Quick verification

Clone and verify the Python pipeline works (no external tools needed):

```bash
git clone <repo-url> project
cd project
PYTHONPATH=src python3 -m pytest tests/ -q
```

Expected output when no external tools are installed:

```
225 passed, 8 skipped
```

The 8 skipped tests require one of:

- `DG_LLVM_SLICER_BINARY` — path to `llvm-slicer` (set env var or build [DG](https://github.com/mchalupa/dg))
- `mr_ast_tool` — build with `cmake -S tooling -B tooling/build && cmake --build tooling/build`

After configuring external tools, all 233 tests pass.

> **Note**: The core pipeline, all seed sources, and both oracle judges are pure Python
> (standard library only, no `pip install` required). Actual slicing requires the external
> tools listed in [Prerequisites](#prerequisites).

## Prerequisites

**Python**: ≥ 3.10 (standard library only, no `pip install` required).

### Required external tools — by MR / Slicer combination

| MR | Slicer | Required tools |
|----|--------|----------------|
| MR1 | Frama-C | Creal, Synthesizer, CSmith, Frama-C, gcc |
| MR1 | DG | Creal, Synthesizer, CSmith, DG/llvm-slicer, Clang, llvm-dis, lli |
| MR2 / MR3 | Frama-C | mr_ast_tool, Frama-C, CSmith |
| MR2 / MR3 | DG | mr_ast_tool, DG/llvm-slicer, Clang, llvm-dis, CSmith |
| MR4 | Frama-C | Frama-C |
| MR4 | DG | DG/llvm-slicer, Clang, llvm-dis |

### Tool installation

#### Creal (MR1 seed/mutant generator)

Creal wraps CSmith and Synthesizer to emit semantic-preserving seed/mutant pairs.

- **Source**: included as a submodule/dependency of the thesis research context; contact the authors for access
- **Requires**: Python 3, CSmith, Synthesizer
- **Configure**: `export CREAL_SCRIPT=/path/to/creal/creal.py` or `--creal-script` flag
- **Note**: Creal is a research prototype with intermittent failures; the pipeline retries up to 5 times per case

#### CSmith (C program generator)

- **Homepage**: <https://github.com/csmith-project/csmith>
- **Install**:
  ```bash
  git clone https://github.com/csmith-project/csmith.git
  cd csmith && cmake -S . -B build && cmake --build build
  # make install or use directly from build directory
  ```
- **Configure**: `export CSMITH_HOME=/path/to/csmith` or `--csmith-home` flag
- Header files must be accessible (default: `/usr/include/csmith`; override with `--csmith-include-dir`)

#### Frama-C (C program slicer)

- **Homepage**: <https://frama-c.com/>
- **Install** (via OPAM, recommended):
  ```bash
  opam init
  opam install frama-c
  ```
- **Binary**: `frama-c` (override with `--frama-binary`)
- **Verify**: `frama-c --version`

#### DG / llvm-slicer (LLVM IR slicer)

- **Homepage**: <https://github.com/mchalupa/dg>
- **Install**:
  ```bash
  git clone https://github.com/mchalupa/dg.git
  cd dg && mkdir build && cd build
  cmake .. -DCMAKE_BUILD_TYPE=Release
  make -j$(nproc) llvm-slicer
  ```
- **Configure**: `export DG_LLVM_SLICER_BINARY=/path/to/dg/build/tools/llvm-slicer` or `--dg-binary` flag
- **Also needed**: Clang ≥14, llvm-dis ≥14, lli ≥14 (for MR1 value observation)
  - Ubuntu/Debian: `apt install clang-14 llvm-14-dev llvm-14`
  - Override with `--dg-clang-binary`, `--dg-llvm-dis-binary`, `--dg-lli-binary`

#### mr_ast_tool (MR2/MR3 AST mutator)

基于 Clang LibTooling 的 C 代码 AST 突变器，是项目自带组件（源码在 `tooling/`），**仅 MR2 和 MR3 需要**。

**功能**：
- **MR2**：在源码中插入与切片准则无关的数据流噪声（额外变量、赋值链、辅助函数调用），用于检验切片器是否正确移除无关代码
- **MR3**：在 `if (0) { ... }` 等恒不执行分支中插入与准则"看起来相关"的代码，用于检验切片器是否误保留死路径语句

**哪些 MR 需要它**：

| MR | 是否需要 mr_ast_tool |
|----|---------------------|
| MR1 | 不需要（走 Creal 或 LLM 双输出） |
| MR2 | **需要** |
| MR3 | **需要** |
| MR4 | 不需要（不产生 mutant） |

**编译**：

依赖 LLVM/Clang 14 开发库：
```bash
# Ubuntu/Debian
apt install libclang-14-dev llvm-14-dev
```

```bash
cd $PROJECT
cmake -S tooling -B tooling/build -DCMAKE_BUILD_TYPE=Release
cmake --build tooling/build
# 产物：tooling/build/mr_ast_tool
```

**配置**（二选一）：
```bash
# 方式一：写入 .env（推荐，source .env 后自动生效）
MR_AST_TOOL_BIN=$PROJECT/tooling/build/mr_ast_tool

# 方式二：每次命令行传入
--mr-ast-tool $PROJECT/tooling/build/mr_ast_tool
```

#### Synthesizer (Creal dependency)

- **Homepage**: <https://github.com/csmith-project/synthesizer>
- **Install**:
  ```bash
  # Synthesizer is typically bundled with or referenced by Creal
  git clone https://github.com/csmith-project/synthesizer.git
  cd synthesizer && make
  ```

### LLM online seed generation (optional)

Requires a local LLM CLI tool that accepts `--prompt-file` and `--output-file`.
Configure via `--llm-command` template with `{prompt_file}` and `{output_file}` placeholders.

Supports two generation modes:
- **MR4**: generates a single C program exercising specified C language features
- **MR1**: dual-output mode — generates both a seed and a semantically-equivalent structural variant (mutant) in one LLM call, suitable for MR1 without Creal

### LLM-assisted judge (DG, optional)

The DG oracle supports an AI-assisted judge mode (`--dg-judge-mode hybrid` or `required`)
that uses an LLM to adjudicate slice equivalence when structural comparison is inconclusive.
Configure via `--dg-llm-judge-command` (e.g., `python3 tooling/deepseek_judge.py --bundle {bundle_json}`).

The judge receives a JSON bundle with seed/mutant IR diffs, criterion info, and slicing metadata,
and returns a structured verdict (equivalent / not-equivalent / uncertain) with reasoning.

### Batch experiments

The batch controller (`src/pipeline/batch_controller.py`) runs multi-seed experiments across
tool+MR combinations without requiring per-seed CLI invocation:

```bash
cd $PROJECT
PYTHONPATH=$PROJECT/src \
python3 -m pipeline.batch_controller \
  --tools frama dg \
  --mrs MR1 MR2 MR3 MR4 \
  --seed-source csmith \
  --count 50 \
  --output-dir experiment/batch-run
```

Results are organized as `experiment/batch-run/<mr>-<tool>-<count>/` with per-seed subdirectories.

### Configuration reference

#### Frama-C flags

| Flag | Default | Description |
|------|---------|-------------|
| `--frama-binary` | `frama-c` | Path to Frama-C executable |
| `--frama-args` | `""` | Extra args passed to frama-c before the input file |
| `--compiler-binary` | `gcc` | C compiler for MR1 value oracle observation programs |
| `--compiler-args` | `-Wall -Wextra` | Extra compiler flags for observation programs |
| `--csmith-include-dir` | `/usr/include/csmith` | CSmith headers directory (needed for `-cpp-extra-args`) |

#### DG / llvm-slicer flags

| Flag | Default | Description |
|------|---------|-------------|
| `--dg-binary` | `llvm-slicer` | Path to llvm-slicer (or set `DG_LLVM_SLICER_BINARY` env var) |
| `--dg-clang-binary` | `clang-14` | Clang for seed→bitcode compilation |
| `--dg-llvm-dis-binary` | `llvm-dis-14` | llvm-dis for disassembling sliced bitcode |
| `--dg-lli-binary` | `lli-14` | lli for MR1 sliced program value observation |
| `--dg-llvm-link-binary` | `llvm-link-14` | llvm-link for MR1 observation helper linkage |
| `--dg-args` | `-annotate slice` | Extra args passed to llvm-slicer |
| `--dg-native-compile-args` | `-O0 -Wall -Wextra` | Clang flags for native compilation |
| `--dg-judge-mode` | `off` | `off` \| `hybrid` \| `required` — LLM-assisted judging |
| `--dg-llm-judge-command` | `""` | Command template for LLM judge (`{bundle_json}` placeholder) |
| `--dg-llm-prompt-version` | `v1` | Prompt version for LLM judge |

#### Environment variables

| Variable | Purpose |
|----------|---------|
| `CREAL_SCRIPT` | Path to `creal.py` (required for `--seed-source creal`) |
| `CSMITH_HOME` | CSmith installation root |
| `CSMITH_USER_OPTIONS` | Extra CSmith generation flags |
| `DG_LLVM_SLICER_BINARY` | Path to `llvm-slicer` binary |
| `MR_AST_TOOL_BIN` | Path to `mr_ast_tool` binary |

See [CONFIG.md](./CONFIG.md) for detailed configuration guidance.

## Usage examples

In all examples below, replace `$PROJECT` with the absolute path to this directory.

### MR1 via Creal + Frama-C

```bash
cd $PROJECT
PYTHONPATH=$PROJECT/src \
python3 -m pipeline.run_experiment \
  --tool frama \
  --seed-source creal \
  --mr MR1 \
  --count 1 \
  --creal-python python3 \
  --creal-script /path/to/creal.py \
  --frama-binary frama-c \
  --output-dir /tmp/mr-runs
```

If `CREAL_SCRIPT` is set in the environment, `--creal-script` can be omitted.

### DG with CSmith seeds

```bash
cd $PROJECT
PYTHONPATH=$PROJECT/src \
python3 -m pipeline.run_experiment \
  --tool dg \
  --seed-source csmith \
  --count 1 \
  --mr MR2 \
  --rng-seed-base 19 \
  --mr-ast-tool $PROJECT/tooling/build/mr_ast_tool \
  --dg-binary /path/to/llvm-slicer \
  --dg-clang-binary clang-14 \
  --dg-llvm-dis-binary llvm-dis-14 \
  --output-dir /tmp/mr-runs
```

### MR4 with pre-generated LLM seeds

```bash
cd $PROJECT
PYTHONPATH=$PROJECT/src \
python3 -m pipeline.run_experiment \
  --tool frama \
  --seed-source llm_files \
  --seed-dir $PROJECT/tests/fixtures/llm_seeds \
  --mr MR4 \
  --frama-binary frama-c \
  --output-dir /tmp/mr-runs
```

### Low-level slicing/oracle entrypoint (Frama-C)

```bash
cd $PROJECT
PYTHONPATH=$PROJECT/src \
python3 -m pipeline.run_oracle \
  --tool frama \
  --mr MR2 \
  --seed /tmp/mr-runs/csmith_0001/seed.c \
  --mutant /tmp/mr-runs/csmith_0001/mutant.c \
  --criteria /tmp/mr-runs/csmith_0001/criteria.json \
  --mutation-meta /tmp/mr-runs/csmith_0001/mutation_meta.json \
  --output-dir /tmp/mr-runs/csmith_0001/oracle-frama \
  --compiler-binary gcc \
  --csmith-include-dir /usr/include/csmith
```

### Low-level slicing/oracle entrypoint (DG)

```bash
cd $PROJECT
PYTHONPATH=$PROJECT/src \
python3 -m pipeline.run_oracle \
  --tool dg \
  --mr MR2 \
  --seed /tmp/mr-runs/csmith_0001/seed.c \
  --mutant /tmp/mr-runs/csmith_0001/mutant.c \
  --criteria /tmp/mr-runs/csmith_0001/criteria.json \
  --mutation-meta /tmp/mr-runs/csmith_0001/mutation_meta.json \
  --output-dir /tmp/mr-runs/csmith_0001/oracle-dg \
  --dg-binary /path/to/llvm-slicer \
  --dg-clang-binary clang-14 \
  --dg-llvm-dis-binary llvm-dis-14
```

### Mutant generation only (CSmith)

```bash
cd $PROJECT
export CSMITH_USER_OPTIONS="--no-bitfields --max-block-depth 3 --max-block-size 4 --max-pointer-depth 2"
PYTHONPATH=$PROJECT/src \
python3 -m pipeline.generate_mutants \
  --seed-source csmith \
  --count 1 \
  --mr MR2 \
  --rng-seed-base 41 \
  --mr-ast-tool $PROJECT/tooling/build/mr_ast_tool \
  --output-dir /tmp/mr-runs
```

### Mutant generation only (LLM pre-generated seeds)

```bash
cd $PROJECT
PYTHONPATH=$PROJECT/src \
python3 -m pipeline.generate_mutants \
  --seed-source llm_files \
  --seed-dir $PROJECT/tests/fixtures/llm_seeds \
  --mr MR3 \
  --rng-seed-base 31 \
  --mr-ast-tool $PROJECT/tooling/build/mr_ast_tool \
  --output-dir /tmp/mr-runs
```

### LLM online seed generation (MR4, no mutant)

```bash
cd $PROJECT
PYTHONPATH=$PROJECT/src \
python3 -m pipeline.generate_mutants \
  --seed-source llm_online \
  --mr MR4 \
  --count 5 \
  --llm-command "python3 -m llm_cli --prompt-file {prompt_file} --output-file {output_file}" \
  --llm-feature-focus "指针与数组" \
  --llm-criteria "result" \
  --llm-dependency-focus "局部变量链" \
  --llm-max-retries 3 \
  --llm-required-topics "c_language_features,pointer_array_data,criterion_export" \
  --llm-min-topics 2 \
  --output-dir /tmp/mr-runs
```

### LLM online MR1 dual-output (seed + mutant in one call)

```bash
cd $PROJECT
PYTHONPATH=$PROJECT/src \
python3 -m pipeline.generate_mutants \
  --seed-source llm_online \
  --mr MR1 \
  --count 5 \
  --llm-command "python3 -m llm_cli --prompt-file {prompt_file} --output-file {output_file}" \
  --llm-feature-focus "指针数组与数据流" \
  --llm-criteria "result,output" \
  --llm-max-retries 5 \
  --output-dir /tmp/mr-runs
```

### LLM online with MR2/MR3 (requires --mr-ast-tool)

```bash
cd $PROJECT
PYTHONPATH=$PROJECT/src \
python3 -m pipeline.generate_mutants \
  --seed-source llm_online \
  --mr MR2 \
  --count 3 \
  --llm-command "python3 -m llm_cli --prompt-file {prompt_file} --output-file {output_file}" \
  --llm-feature-focus "无关数据流" \
  --mr-ast-tool $PROJECT/tooling/build/mr_ast_tool \
  --max-retries 20 \
  --output-dir /tmp/mr-runs
```

## Layout

- `docs/specs/`: locked design decisions and mutation contracts
- `docs/methodology/`: experiment-facing notes and boundary assumptions
- `tooling/`: Clang LibTooling AST mutator (`mr_ast_tool`), bug test harnesses, and LLM judge integration
- `src/`: orchestration, metadata, and validation helpers around the tooling
- `experiment/`: batch-oriented inputs, outputs, and per-MR runs
- `tests/`: fixtures plus unit/integration coverage for the prototype
- `artifacts/`: generated logs, reports, and replayable intermediate assets
- `bugs/`: confirmed bug collection (17 Frama-C + 26 DG)
  - `bugs/frama/`: Frama-C 30.0 (Zinc) slicing bug database — 17 confirmed bugs with root cause analysis
    - `confirmed/`: unified bug directory (one subdirectory per bug, with symlinks to source artifacts)
    - `issues/`: C-language feature classification (16 issues: 9 true bugs + 7 non-bugs)
    - `defects/`: raw metamorphic testing batch experiment directories
    - `test/`: 70+ independent C test cases and run scripts
    - `paper-verification/`: 2026-03-27 paper verification results (root cause analyses, submission materials)
    - See `bugs/frama/README.md` for the full index, usage guide, and relationship diagram
  - `bugs/dg/`: DG/llvm-slicer bug collection (26 confirmed bugs)

## Bug Database

The `bugs/` directory contains confirmed slicing bugs discovered through metamorphic testing.

### Frama-C (17 confirmed bugs)

17 true bugs in Frama-C 30.0 (Zinc) organized into 8 root cause families:

| # | Family | Bugs | Frama-C Source |
|---|--------|------|----------------|
| 1 | Init Loss | 2737, 2739, 2746, 2747, 2748 | `slicingTransform.ml:383`, `filter.ml:562,570` |
| 2 | Over-Preservation | 2750, 2751 | `fct_slice.ml` mark propagation |
| 3 | Dataflow Break | 2749 | Function parameter/body coherence |
| 4 | UB-Sensitive | 2735 | Unsequenced evaluation order |
| 5 | Export Coherence | 2740, 2741, 2742 | Symbol renaming, runtime stubs, type-system |
| 6 | Lifecycle/Builtin | 2753-007, 2753-010, 2753-015 | Constructor/atomic/POSIX runtime support |
| 7 | Internal NYI | 2753-016 | `logic_deps.ml:400` term-lval dependency |
| 8 | Loop Non-Termination | 2736 | Exit condition dropped |

**Quick navigation**: `bugs/frama/confirmed/README.md` — full index with severity, MR coverage, and per-bug symlinks.

**Reproduction scripts**:
- `tooling/test_frama_bugs.py` — comprehensive test harness for all 17 bugs, issues/, and defects/
- `tooling/test_mr1_bug_detection.py` — MR1 metamorphic testing demonstration with structurally-diverse variants

### DG (26 confirmed bugs)

DG/llvm-slicer bugs in `bugs/dg/`. See `tooling/test_dg_bugs.py` for the reproduction harness.

Read the implementation contract first:

- `docs/specs/mr2-mr3-ast-mutator.md`

The existing `Slicing/creal/coverage` scripts are treated as reference
material, not as the final implementation architecture.

Current per-run output contract:

- root-level `manifest.json`
- per-case `seed.c`
- per-case `criteria.json`
- per-case `seed_meta.json`
- relation-dependent `mutant.c`
- relation-dependent `mutation_meta.json`
- successful mutant-producing relations include `compile_check` in both
  `manifest.json` and `mutation_meta.json`
- slicing runs additionally write:
  - `seed_sliced.c` or `seed_sliced.ll` / tool-specific seed slice artifact
  - `mutant_sliced.c` or `mutant_sliced.ll` / tool-specific mutant slice artifact
  - for `dg`, intermediate `seed.bc`, `seed.sliced.bc`, `mutant.bc`, and
    `mutant.sliced.bc`
  - for `dg`, `oracle_result.json` includes structured evidence with criterion,
    artifact paths, stderr summary, symbol hits across sliced/annotated IR,
    and MR1 observation metadata
  - observed source files and executables for Frama and DG MR1 value oracles
  - `oracle_result.json`
