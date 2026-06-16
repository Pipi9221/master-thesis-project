# Normalize And Site Selection Implementation Plan

> **For agentic workers:** REQUIRED: Use superpowers:subagent-driven-development (if subagents available) or superpowers:executing-plans to implement this plan. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Add a preprocessing normalization pass plus MR-aware site discovery so the AST mutator can insert MR2/MR3 payloads safely.

**Architecture:** Introduce a `normalize` command in `tooling/` that rewrites the source into a safer structural form before mutation. Extend `discover-sites` to emit typed insertion anchors (`tu_anchor`, `stmt_boundary`, `dead_wrapper_site`) and expose the new command contracts through the Python orchestration layer.

**Tech Stack:** Clang LibTooling, LLVM 14, CMake, Python 3.11, pytest

---

## Chunk 1: Normalize Contract

### Task 1: Document normalize-driven pipeline

**Files:**
- Modify: `docs/specs/mr2-mr3-ast-mutator.md`

- [ ] Step 1: Update the spec to add `normalize -> discover -> rewrite`
- [ ] Step 2: Record normalize pass rules and site-classification rules

## Chunk 2: Tests First

### Task 2: Define failing tests for normalize and site classification

**Files:**
- Create: `tests/fixtures/normalize_seed.c`
- Create: `tests/integration/test_normalize.py`
- Modify: `tests/integration/test_site_discovery.py`
- Modify: `tests/unit/test_tooling_backend.py`

- [ ] Step 1: Write integration test for `normalize --seed --output`
- [ ] Step 2: Run the normalize integration test and verify it fails
- [ ] Step 3: Extend site-discovery tests for typed site kinds
- [ ] Step 4: Run the site-discovery tests and verify they fail
- [ ] Step 5: Extend backend unit tests for normalize command and richer site parsing
- [ ] Step 6: Run the unit tests and verify they fail

## Chunk 3: Tooling Implementation

### Task 3: Implement `normalize` command in `tooling/`

**Files:**
- Modify: `tooling/src/main.cpp`

- [ ] Step 1: Add rewrite helpers for statement-end token discovery
- [ ] Step 2: Implement a normalizer visitor for `if/else` and loop bodies
- [ ] Step 3: Add `normalize --seed --output` command handling
- [ ] Step 4: Build the tooling binary in WSL
- [ ] Step 5: Run normalize integration test and verify it passes

### Task 4: Implement MR-aware site classification

**Files:**
- Modify: `tooling/src/main.cpp`

- [ ] Step 1: Add typed site records (`tu_anchor`, `stmt_boundary`, `dead_wrapper_site`)
- [ ] Step 2: Reject high-risk statement boundaries
- [ ] Step 3: Emit `preferred_for` metadata for MR2/MR3
- [ ] Step 4: Run discover-sites integration test and verify it passes

## Chunk 4: Python Integration

### Task 5: Expose normalize and richer site data to Python

**Files:**
- Modify: `src/mutators/backend.py`
- Modify: `src/mutators/__init__.py`

- [ ] Step 1: Add normalize command builder
- [ ] Step 2: Extend parsed site discovery model
- [ ] Step 3: Run unit tests and verify they pass

## Chunk 5: Verification

### Task 6: Final verification

**Files:**
- Modify: `tooling/README.md`

- [ ] Step 1: Document the new normalize command and site kinds
- [ ] Step 2: Run `pytest tests/unit -q -p no:cacheprovider`
- [ ] Step 3: Run normalize integration test in WSL
- [ ] Step 4: Run site-discovery integration test in WSL
