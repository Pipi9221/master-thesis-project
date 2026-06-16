# Seed Source Pipeline Implementation Plan

> **For agentic workers:** REQUIRED: Use superpowers:subagent-driven-development (if subagents available) or superpowers:executing-plans to implement this plan. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Build a Linux-first seed-to-mutant pipeline that can materialize seeds from CSmith or existing LLM `.c` files and then generate MR2/MR3 mutants with the current AST mutator.

**Architecture:** Add a `src/seeds/` package with a small `SeedSource` abstraction plus concrete `CSmithSeedSource` and `LLMFileSeedSource` implementations. Add a pipeline CLI that creates a per-case output directory, writes `seed.c`, `criteria.json`, `seed_meta.json`, and invokes `mr_ast_tool mutate` to emit replayable mutants.

**Tech Stack:** Python 3.11, pytest, Clang LibTooling binary, CSmith, WSL/Linux subprocess execution

---

## Chunk 1: Seed Source Contracts

### Task 1: Define seed-source unit contracts

**Files:**
- Create: `src/seeds/__init__.py`
- Create: `src/seeds/models.py`
- Create: `src/seeds/base.py`
- Create: `tests/unit/test_seed_sources.py`
- Modify: `pyproject.toml`

- [ ] Step 1: Write failing tests for `SeedCase` and seed-source package exports
- [ ] Step 2: Run `pytest` for the new seed-source unit test and verify it fails
- [ ] Step 3: Add minimal seed-source models and exports
- [ ] Step 4: Update package discovery for the new Python packages
- [ ] Step 5: Run the unit test and verify it passes

## Chunk 2: Concrete Seed Sources

### Task 2: Add CSmith and LLM-file seed sources

**Files:**
- Create: `src/seeds/csmith.py`
- Create: `src/seeds/llm_files.py`
- Modify: `tests/unit/test_seed_sources.py`

- [ ] Step 1: Extend tests for `CSmithSeedSource.build_command`
- [ ] Step 2: Extend tests for `LLMFileSeedSource` file enumeration and seed-id derivation
- [ ] Step 3: Run the targeted unit tests and verify they fail
- [ ] Step 4: Implement the minimal CSmith and LLM-file seed-source classes
- [ ] Step 5: Run the targeted unit tests and verify they pass

## Chunk 3: Pipeline CLI

### Task 3: Add a seed-to-mutant pipeline entrypoint

**Files:**
- Create: `src/pipeline/__init__.py`
- Create: `src/pipeline/generate_mutants.py`
- Create: `tests/integration/test_generate_mutants_pipeline.py`

- [ ] Step 1: Write a failing integration test for `llm_files -> mutant`
- [ ] Step 2: Write a failing integration test for `csmith -> mutant`
- [ ] Step 3: Run the pipeline integration tests and verify they fail
- [ ] Step 4: Implement the pipeline CLI, case-directory layout, and mutator invocation
- [ ] Step 5: Run the pipeline integration tests and verify they pass

## Chunk 4: Documentation And Verification

### Task 4: Document the Linux-first seed pipeline and verify end-to-end

**Files:**
- Modify: `README.md`
- Modify: `tooling/README.md`

- [ ] Step 1: Document the new `SeedSource` abstraction and CLI usage
- [ ] Step 2: Run `pytest tests/unit -q -p no:cacheprovider`
- [ ] Step 3: Run `pytest tests/integration -q -p no:cacheprovider` with the WSL-backed tooling binary
