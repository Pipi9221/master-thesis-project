# Slicing Adapters And Oracles Implementation Plan

> **For agentic workers:** REQUIRED: Use superpowers:subagent-driven-development (if subagents available) or superpowers:executing-plans to implement this plan. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Build a shared slicing/oracle pipeline for MR2/MR3 that reuses existing seed and mutant generation, while adapting Frama-C and dg through separate tool adapters.

**Architecture:** Keep `seed -> mutant` shared in the existing pipeline, then split into a shared `OracleRunner` and per-tool adapters. `FramaAdapter` and `DGAdapter` each own command construction and slice artifact discovery, while MR-specific judges consume `criteria.json`, `mutation_meta.json`, and slice outputs through one common result schema.

**Tech Stack:** Python 3.11, existing `common.runner` command execution, pytest, WSL/Linux toolchain, Frama-C and dg adapters.

---

## Chunk 1: Shared Protocol And Frama-C Baseline

### Task 1: Define shared slicing/oracle data model

**Files:**
- Create: `project/src/slicers/base.py`
- Create: `project/src/oracles/base.py`
- Modify: `project/src/common/metadata.py`
- Test: `project/tests/unit/test_slicing_models.py`

- [ ] **Step 1: Write the failing tests**
- [ ] **Step 2: Run `pytest project/tests/unit/test_slicing_models.py -q -p no:cacheprovider` and confirm failure**
- [ ] **Step 3: Add minimal dataclasses for slice requests, slice results, oracle requests, oracle results, and retained symbol evidence**
- [ ] **Step 4: Re-run `pytest project/tests/unit/test_slicing_models.py -q -p no:cacheprovider` and confirm pass**

### Task 2: Add Frama-C adapter

**Files:**
- Create: `project/src/slicers/frama.py`
- Modify: `project/src/slicers/__init__.py`
- Test: `project/tests/unit/test_frama_adapter.py`

- [ ] **Step 1: Write failing tests for command construction, failure classification, and empty-slice detection**
- [ ] **Step 2: Run `pytest project/tests/unit/test_frama_adapter.py -q -p no:cacheprovider` and confirm failure**
- [ ] **Step 3: Implement minimal `FramaAdapter` using `frama-c <file> -slice-value <vars> -then-on "Slicing export" -print -ocode <out>`**
- [ ] **Step 4: Re-run `pytest project/tests/unit/test_frama_adapter.py -q -p no:cacheprovider` and confirm pass**

### Task 3: Add MR2/MR3 retained-symbol judge

**Files:**
- Create: `project/src/oracles/judges.py`
- Modify: `project/src/oracles/__init__.py`
- Test: `project/tests/unit/test_mr_judges.py`

- [ ] **Step 1: Write failing tests for MR2 retained-noise detection and MR3 retained-dead-path detection**
- [ ] **Step 2: Run `pytest project/tests/unit/test_mr_judges.py -q -p no:cacheprovider` and confirm failure**
- [ ] **Step 3: Implement minimal judges that use `mutation_meta.inserted_symbols` and slice artifact text to decide violation**
- [ ] **Step 4: Re-run `pytest project/tests/unit/test_mr_judges.py -q -p no:cacheprovider` and confirm pass**

### Task 4: Add shared oracle runner for Frama-C

**Files:**
- Create: `project/src/pipeline/run_oracle.py`
- Create: `project/src/oracles/runner.py`
- Test: `project/tests/integration/test_run_oracle_frama.py`

- [ ] **Step 1: Write failing integration test that builds a fake manifest/case and runs `frama` through a fake adapter shell**
- [ ] **Step 2: Run `pytest project/tests/integration/test_run_oracle_frama.py -q -p no:cacheprovider` and confirm failure**
- [ ] **Step 3: Implement the minimal CLI to load a case, invoke `FramaAdapter`, run MR judge, and write `oracle_result.json`**
- [ ] **Step 4: Re-run `pytest project/tests/integration/test_run_oracle_frama.py -q -p no:cacheprovider` and confirm pass**

## Chunk 2: dg Hook Point And Documentation

### Task 5: Add dg adapter contract stub

**Files:**
- Create: `project/src/slicers/dg.py`
- Modify: `project/src/slicers/__init__.py`
- Test: `project/tests/unit/test_dg_adapter.py`

- [ ] **Step 1: Write failing tests for `DGAdapter` command construction and unsupported-artifact classification**
- [ ] **Step 2: Run `pytest project/tests/unit/test_dg_adapter.py -q -p no:cacheprovider` and confirm failure**
- [ ] **Step 3: Implement the minimal adapter shell and a clear `not_implemented` result path for missing dg output handling**
- [ ] **Step 4: Re-run `pytest project/tests/unit/test_dg_adapter.py -q -p no:cacheprovider` and confirm pass**

### Task 6: Document the protocol and execution path

**Files:**
- Modify: `project/README.md`
- Modify: `project/docs/specs/spec.md`
- Modify: `project/tests/integration/README.md`

- [ ] **Step 1: Document shared `seed -> mutant -> slice -> oracle` flow**
- [ ] **Step 2: Document the current support matrix: `frama` runnable, `dg` adapter skeleton only**
- [ ] **Step 3: Document expected artifacts: `oracle_result.json`, slice outputs, retained-symbol evidence**
- [ ] **Step 4: Run targeted docs sanity checks by re-reading changed files**
