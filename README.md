# MR Experiment Prototype

This directory is the working root for the thesis prototype that constructs
and evaluates `MR1`, `MR2`, `MR3`, and `MR4` relations over C seeds.

Phase 1 is intentionally narrow:

- `MR1`: use Creal to emit a seed/mutant pair directly
- `MR2`: insert criterion-irrelevant data-flow noise on an executable path
- `MR3`: insert criterion-related or criterion-adjacent code inside an
  unreachable control-flow wrapper
- current implementation focus: turn `seed.c + criteria.json + rng_seed` into
  replayable MR mutants
- persist enough metadata to replay site selection and payload generation
- run a minimal compile gate on each generated `mutant.c` and reject
  syntactically invalid outputs
- slicing/oracle now follows a shared protocol:
  `seed -> mutant -> slice(seed) -> slice(mutant) -> oracle_result.json`
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

- `MR1` remains a special-case Creal relation
- mutant generation entrypoints support `MR1`, `MR2`, `MR3`, and `MR4`
- oracle entrypoints support `MR1`, `MR2`, `MR3`, and `MR4`
- `pipeline.run_experiment` is the recommended single entrypoint for running
  one `tool + MR` path end-to-end

Current runtime assumption:

- the active execution path is Linux-first and currently runs in WSL
- the pipeline supports three seed-source families:
  - `creal` for `MR1`
  - `csmith`
  - `llm_files` for pre-generated `.c` seeds
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

Current end-to-end entrypoint:

```bash
cd /mnt/d/pipi922/Desktop/master-thesis/project
PYTHONPATH=/mnt/d/pipi922/Desktop/master-thesis/project/src \
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

On the current thesis WSL setup, `MR1` can be run without explicitly passing
`--creal-script` or `--csmith-home` when Creal is installed at
`/home/cyuan/projects/Creal/creal.py` and the compatibility CSmith home is
available at `/opt/csmith-home`. Explicit CLI flags and environment variables
still take precedence when provided.

```bash
cd /mnt/d/pipi922/Desktop/master-thesis/project
PYTHONPATH=/mnt/d/pipi922/Desktop/master-thesis/project/src \
python3 -m pipeline.run_experiment \
  --tool dg \
  --seed-source csmith \
  --count 1 \
  --mr MR2 \
  --rng-seed-base 19 \
  --mr-ast-tool /mnt/d/pipi922/Desktop/master-thesis/project/tooling/build/mr_ast_tool \
  --dg-binary /home/cyuan/projects/dg/build/tools/llvm-slicer \
  --dg-clang-binary clang-14 \
  --dg-llvm-dis-binary llvm-dis-14 \
  --output-dir /tmp/mr-runs
```

```bash
cd /mnt/d/pipi922/Desktop/master-thesis/project
PYTHONPATH=/mnt/d/pipi922/Desktop/master-thesis/project/src \
python3 -m pipeline.run_experiment \
  --tool frama \
  --seed-source llm_files \
  --seed-dir /mnt/d/pipi922/Desktop/master-thesis/project/tests/fixtures/llm_seeds \
  --mr MR4 \
  --frama-binary frama-c \
  --output-dir /tmp/mr-runs
```

Low-level slicing/oracle entrypoint:

```bash
cd /mnt/d/pipi922/Desktop/master-thesis/project
PYTHONPATH=/mnt/d/pipi922/Desktop/master-thesis/project/src \
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

```bash
cd /mnt/d/pipi922/Desktop/master-thesis/project
PYTHONPATH=/mnt/d/pipi922/Desktop/master-thesis/project/src \
python3 -m pipeline.run_oracle \
  --tool dg \
  --mr MR2 \
  --seed /tmp/mr-runs/csmith_0001/seed.c \
  --mutant /tmp/mr-runs/csmith_0001/mutant.c \
  --criteria /tmp/mr-runs/csmith_0001/criteria.json \
  --mutation-meta /tmp/mr-runs/csmith_0001/mutation_meta.json \
  --output-dir /tmp/mr-runs/csmith_0001/oracle-dg \
  --dg-binary /home/cyuan/projects/dg/build/tools/llvm-slicer \
  --dg-clang-binary clang-14 \
  --dg-llvm-dis-binary llvm-dis-14
```

```bash
cd /mnt/d/pipi922/Desktop/master-thesis/project
export CSMITH_USER_OPTIONS="--no-bitfields --max-block-depth 3 --max-block-size 4 --max-pointer-depth 2"
PYTHONPATH=/mnt/d/pipi922/Desktop/master-thesis/project/src \
python3 -m pipeline.generate_mutants \
  --seed-source csmith \
  --count 1 \
  --mr MR2 \
  --rng-seed-base 41 \
  --mr-ast-tool /mnt/d/pipi922/Desktop/master-thesis/project/tooling/build/mr_ast_tool \
  --output-dir /tmp/mr-runs
```

```bash
cd /mnt/d/pipi922/Desktop/master-thesis/project
PYTHONPATH=/mnt/d/pipi922/Desktop/master-thesis/project/src \
python3 -m pipeline.generate_mutants \
  --seed-source llm_files \
  --seed-dir /mnt/d/pipi922/Desktop/master-thesis/project/tests/fixtures/llm_seeds \
  --mr MR3 \
  --rng-seed-base 31 \
  --mr-ast-tool /mnt/d/pipi922/Desktop/master-thesis/project/tooling/build/mr_ast_tool \
  --output-dir /tmp/mr-runs
```

## Layout

- `docs/specs/`: locked design decisions and mutation contracts
- `docs/methodology/`: experiment-facing notes and boundary assumptions
- `tooling/`: the future `Clang LibTooling` mutator engine
- `src/`: orchestration, metadata, and validation helpers around the tooling
- `experiment/`: batch-oriented inputs, outputs, and per-MR runs
- `tests/`: fixtures plus unit/integration coverage for the prototype
- `artifacts/`: generated logs, reports, and replayable intermediate assets

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
