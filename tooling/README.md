`Clang LibTooling`-based mutation engine lives here.

In all examples below, `$PROJECT` refers to the repository root directory.

Scope note:

- `MR1` is handled at the Python pipeline layer by wrapping an external Creal
  run and does not use this binary
- `MR2` and `MR3` are the AST-backed mutation families implemented here

Recommended split:

- `include/`: AST visitors, rewrite helpers, shared data structures
- `src/`: entrypoint, MR2/MR3 transformers, site discovery, emission

Build prerequisites:

- LLVM/Clang 14+ development libraries (e.g. `libclang-14-dev` on Debian/Ubuntu)
- CMake 3.20+
- C++17 compiler

The CMakeLists.txt reads `LLVM_DIR` and `Clang_DIR` from the environment if set,
otherwise defaults to `/usr/lib/llvm-14/lib/cmake/llvm` and
`/usr/lib/llvm-14/lib/cmake/clang`. Override them when LLVM is installed
elsewhere:

```bash
# Example: non-standard LLVM install
export LLVM_DIR=/opt/llvm-16/lib/cmake/llvm
export Clang_DIR=/opt/llvm-16/lib/cmake/clang
```

Minimal build flow:

```bash
cd $PROJECT
cmake -S tooling -B tooling/build -DCMAKE_BUILD_TYPE=Debug
cmake --build tooling/build -j2
```

Alternatively pass paths directly on the command line:

```bash
cmake -S tooling -B tooling/build \
    -DLLVM_DIR=/opt/llvm-16/lib/cmake/llvm \
    -DClang_DIR=/opt/llvm-16/lib/cmake/clang
cmake --build tooling/build -j2
```

Current implemented entrypoints:

```bash
$PROJECT/tooling/build/mr_ast_tool \
  normalize \
  --seed $PROJECT/tests/fixtures/normalize_seed.c \
  --output /tmp/normalized.c

$PROJECT/tooling/build/mr_ast_tool \
  discover-sites \
  --seed $PROJECT/tests/fixtures/site_discovery_seed.c

$PROJECT/tooling/build/mr_ast_tool \
  mutate \
  --mr MR2 \
  --seed $PROJECT/tests/fixtures/mr2_seed.c \
  --criteria $PROJECT/tests/fixtures/mr2_criteria.json \
  --rng-seed 20 \
  --output-dir /tmp/mr2-out

$PROJECT/tooling/build/mr_ast_tool \
  mutate \
  --mr MR3 \
  --seed $PROJECT/tests/fixtures/mr3_seed.c \
  --criteria $PROJECT/tests/fixtures/mr3_criteria.json \
  --rng-seed 31 \
  --output-dir /tmp/mr3-out
```

Current behavior:

- `normalize`
  - wraps non-compound `if` / `else` / `for` / `while` / `do` bodies with braces
  - synthesizes `else {}` for plain `if` statements without an `else`
  - only rewrites locations in the main file and skips macro expansions
- `discover-sites`
  - emits typed site records with `site_id`, `site_kind`, and `preferred_for`
  - currently exposes:
    - `tu_anchor` for translation-unit level MR2 helper insertion
    - `stmt_boundary` for executable-path insertion candidates
    - `dead_wrapper_site` for MR3 dead-path wrapper insertion
- `mutate`
  - currently supports `--mr MR2` and `--mr MR3`
  - runs normalize internally and writes both `mutant.c` and `mutation_meta.json`
  - current MR2 family registry:
    - `local_assignment_chain`
    - `independent_loop_compute`
    - `independent_helper_call`
  - current MR3 concrete pattern registry:
    - `if_zero_wrapper_read_related`
    - `constant_false_wrapper_read_related`
    - `if_zero_wrapper_adjacent_scalar_noise`
  - pattern selection is deterministic from `rng_seed % candidate_count`
  - current mutation metadata marks `validation_status` as `not_run`

The current binary now covers normalization, AST-based site discovery, and
mutation-only MR2/MR3 generation with multiple phase-1 families. Compile and
behavior validation, retry logic, and experiment-facing seed generation still
need to be added later.

When invoked through the Python pipeline, each run writes a root
`manifest.json` plus per-case `mutant.c` / `mutation_meta.json` artifacts that
are ready to be handed to the later slicing stage. The current pipeline also
runs a post-mutation `clang -fsyntax-only` gate and records `compile_check`
for accepted mutants.
