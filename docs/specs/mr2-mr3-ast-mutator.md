# MR2/MR3 AST Mutator Specification

## 1. Purpose

This document locks the phase-1 contract for the thesis prototype that builds
`MR2` and `MR3` mutants from C seeds.

Scope note:

- this document defines the mutation-layer contract only
- project-level runtime has since grown runnable `MR1` and `MR4` oracle paths
- current project support status should be read from `docs/specs/spec.md` and
  `docs/methodology/experiment-protocol.md`

The prototype target is:

`seed.c + criteria.json + rng_seed -> normalize -> AST site discovery -> mutation -> compile validation -> behavior validation -> metadata`

This project stops at mutation and validation. It does not yet include
downstream slicing execution, cross-tool aggregation, or bug confirmation.

## 2. Source Basis And Locked Decisions

This spec is grounded in three inputs:

- thesis semantics and constraints in
  `chapters/chapter4-metamorphic-relations.tex`
- legacy preparation scripts in
  `Slicing/creal/coverage/prepare_mr2_cases.py` and
  `Slicing/creal/coverage/prepare_mr3_cases.py`
- existing variable-based slicing commands under
  `Slicing/creal/coverage/mr_inputs/**/slice_commands.json`

Locked phase-1 decisions:

- Only `MR2` and `MR3` are in scope.
- `MR1` remains handled by Creal.
- `MR4` remains a later slicing-protocol task.
- The AST backend is `Clang LibTooling`.
- Phase 1 assumes variable-based slicing criteria.
- Randomized mutation is allowed only when the run is replayable from recorded
  metadata.

## 3. Shared Inputs And Outputs

### 3.1 Inputs

`seed.c`

- must compile before mutation
- must have stable observable behavior for validation

`criteria.json`

- `criterion_kind`: fixed to `value` in phase 1
- `variables`: non-empty array of criterion variables
- `seed_id`: experiment identifier
- `program_point`: optional reserved field

`rng_seed`

- required for every run
- persisted in metadata

### 3.2 Outputs

Each accepted run produces:

- `mutant.c`
- `mutation_meta.json`
- `validation_report.json`

`mutation_meta.json` must record:

- `mr`
- `seed_id`
- `rng_seed`
- `selected_pattern`
- `selected_site`
- `inserted_symbols`
- `attempt_count`
- `validation_status`
- `failure_reason`

`validation_report.json` must record:

- `compile_ok`
- `exit_equal`
- `stdout_equal`
- `behavior_equivalent`

## 3.3 Normalize Pass

Before site discovery or mutation, the tooling layer runs a syntax-preserving
normalization pass on the seed.

The phase-1 normalize pass may:

- wrap `if` / `else` bodies into `CompoundStmt`
- synthesize `else {}` for `if` statements without an `else`
- wrap `for` / `while` / `do` loop bodies into `CompoundStmt`
- skip macro-expansion locations and only rewrite the main file

The phase-1 normalize pass must not:

- rewrite code inside macro expansions
- silently change runtime behavior by inventing executable statements such as a
  synthetic `return 0;`
- introduce analyzer-specific instrumentation

The normalized program is an internal mutation artifact. It exists to make
later AST-based insertion safer and more predictable.

## 4. MR2 Contract

### 4.1 Semantic Goal

`MR2` injects data-flow noise that is irrelevant to the slicing criterion while
remaining on an executable path.

If later slicing preserves these noise statements or their fresh symbols, the
result is an `MR2` violation candidate.

### 4.2 Must-Hold Invariants

Derived from the thesis MR2 constraints:

- inserted code must be data-flow isolated from criterion variables
- inserted symbols must not alias criterion variables or their storage
- inserted code must not change the criterion value through globals, shared
  buffers, address write-back, or implicit side effects
- inserted code must be syntactically valid and avoid obvious undefined
  behavior
- criterion mapping must remain correct even if source offsets change

### 4.3 Phase-1 Pattern Family

Phase 1 keeps the payload family intentionally conservative:

1. `independent_helper_call`
   - add fresh helper definitions and fresh sink/global symbols
   - call the helper from a legal statement boundary
2. `local_assignment_chain`
   - add fresh locals and a short scalar-only def-use chain
   - terminate in a fresh sink symbol
3. `independent_loop_compute`
   - add a fresh scalar loop with constant-driven arithmetic only

The thesis also identifies richer MR2 patterns that should remain on the
roadmap:

- independent multi-level pointer chains
- irrelevant struct-field updates
- irrelevant array-offset updates
- irrelevant address-passing through helper functions

These patterns are not blocked by the spec, but they should be added only after
the phase-1 scalar path is stable.

### 4.4 Acceptable Injection Locations

The mutator may use two insertion zones:

- translation-unit insertion after the last `#include` for fresh helper/global
  declarations
- statement-boundary insertion inside a `CompoundStmt` for executable payloads

Site selection rules:

- prefer `main`
- then consider other defined functions
- reject macro-expansion locations
- reject insertion points that would break declaration ordering
- reject positions immediately before control-transfer statements when
  semantics may change

For implementation purposes, these sites are surfaced by site discovery as:

- `tu_anchor`
- `stmt_boundary`

## 5. MR3 Contract

### 5.1 Semantic Goal

`MR3` inserts control-flow structure that is irrelevant to the slicing criterion
because the inserted path is unreachable or semantically dead.

The payload inside that path may be criterion-related, provided that the
wrapper guarantees non-execution and therefore preserves runtime behavior.

If later slicing preserves the dead-path wrapper or payload, the result is an
`MR3` violation candidate.

### 5.2 Must-Hold Invariants

Derived from the thesis MR3 constraints:

- inserted control structure must not change the real reachability of the
  criterion
- inserted control structure must not redirect, short-circuit, or prematurely
  terminate the original criterion path
- the dead path must not introduce real side effects that escape the wrapper
- criterion mapping must remain correct even if line or offset positions change

### 5.3 Phase-1 Dead-Path Wrappers

Phase 1 supports wrappers that are easy to prove unreachable:

1. `if_zero_wrapper`
   - `if (0) { ... }`
2. `constant_false_wrapper`
   - `if ((1 == 0) && CONST_EXPR) { ... }`
3. `non_selected_switch_branch`
   - a constant-controlled `switch` with payload in a non-selected branch

Post-criterion dead code such as code after `return` remains a secondary option
and should only be used when the AST rewrite preserves syntax clearly.

### 5.4 Phase-1 Payload Family

Inside the unreachable wrapper, phase 1 supports:

1. `criterion_read_related`
   - read criterion variables into fresh temporaries
   - derive fresh values and store them into fresh sink symbols
2. `criterion_write_related`
   - emit type-compatible assignments that mention criterion variables
   - allowed only inside unreachable wrappers
3. `criterion_adjacent_scalar_noise`
   - fall back to fresh-scalar noise when criterion typing is insufficient

Type policy:

- integer scalar criterion variables may use all payload families
- non-scalar or unsupported criterion variables fall back to
  `criterion_read_related` or are rejected explicitly

### 5.5 Acceptable Injection Locations

Candidate sites come from legal statement boundaries inside function bodies.

Site selection rules:

- prefer `main`
- allow insertion near function entry when it keeps the original control
  structure intact
- reject macro-expansion locations
- reject points that would damage surrounding control semantics

For implementation purposes, these sites are surfaced by site discovery as:

- `dead_wrapper_site`

## 6. Shared Validation Pipeline

Every mutation attempt follows this pipeline:

1. normalize the seed with the AST backend
2. discover legal candidate sites on the normalized source
3. select payload family and site using deterministic RNG
4. emit `mutant.c`
5. compile the mutant
6. compare runtime behavior with the seed
7. persist success or failure metadata

Standard failure states:

- `parse_failed`
- `no_candidate_site`
- `type_incompatible`
- `compile_failed`
- `behavior_changed`
- `retry_exhausted`

Compile or behavior failures must trigger retry until the configured budget is
exhausted.

Default retry budgets:

- `MR2`: `20`
- `MR3`: `30`

## 7. Legacy Script Takeaways

The existing coverage preparation scripts are reference material only.

`prepare_mr2_cases.py` contributes two useful ideas:

- fresh symbol generation should be deterministic from a seed identifier
- helper definitions may be inserted after the include block and called from
  function entry

Its limits are also explicit:

- it relies on regex rather than AST site discovery
- it only targets `main`
- it only covers one narrow executable-path noise style

`prepare_mr3_cases.py` is even more limited:

- it inserts an executed control-flow block, not an unreachable wrapper
- therefore it is not semantically strong enough to serve as the final MR3
  implementation contract

The AST mutator must keep the useful naming and reproducibility ideas while
discarding the regex-based insertion strategy.

## 8. Project Skeleton Mapping

The repository layout maps to the implementation as follows:

- `tooling/`: `Clang LibTooling` executable and AST rewrite code
- `src/mutators/`: orchestration logic, pattern selection, retry policy
- `src/validators/`: compile and behavior validators
- `src/common/`: metadata, RNG replay, shared naming/config helpers
- `experiment/`: batch-oriented inputs and outputs for thesis runs
- `tests/fixtures/`: seeds, criteria manifests, expected metadata snapshots
- `tests/unit/` and `tests/integration/`: deterministic replay plus
  compile and behavior validation coverage

The tooling subcommands are expected to converge to:

- `normalize`
- `discover-sites`
- `mutate`

## 9. Non-Goals For This Phase

Phase 1 does not deliver:

- Frama-C adapter logic
- DG adapter logic
- MR4 checker logic
- bug triage and confirmation automation
- full result aggregation across slicing tools
