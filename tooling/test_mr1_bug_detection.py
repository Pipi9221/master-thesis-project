#!/usr/bin/env python3
"""Demonstrate MR1 metamorphic testing detecting known DG slicing bugs.

The key insight: MR1 detects bugs when semantically-equivalent programs produce
different slices. Simply renaming variables produces identical LLVM IR and
identical slicer behavior. To detect bugs, the "mutant" must use a different
code structure (e.g., manual loop instead of memcpy, inline function instead
of callback) while preserving identical input/output semantics.

This script creates structurally-diverse semantic variants for each bug and
demonstrates that MR1 detects the slicing inconsistency.
"""

from __future__ import annotations

import json
import os
import subprocess
import sys
import textwrap
from pathlib import Path
from typing import NamedTuple

_SRC = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "src")
if _SRC not in sys.path:
    sys.path.insert(0, _SRC)

from common.tool_paths import resolve_dg_slicer, resolve_dg_lli, resolve_dg_clang


_EXPERIMENTS = Path(
    os.environ.get(
        "DG_EXPERIMENTS_CASES",
        str(Path(__file__).resolve().parent.parent / "dg-experiments" / "comfirm-issue" / "cases" / "precision"),
    )
)


def _run(cmd: list[str], **kwargs: object) -> subprocess.CompletedProcess[str]:
    return subprocess.run(
        cmd, capture_output=True, text=True, timeout=kwargs.pop("timeout", 30), **kwargs
    )


# ---------------------------------------------------------------------------
# Structurally-diverse semantic variant definitions
# ---------------------------------------------------------------------------

# U01: Original uses memcpy + memmove.
# Variant: uses manual for-loop copy + memmove (same semantics, different IR)
SEED_U01 = textwrap.dedent("""\
#include <assert.h>
#include <string.h>

int main(void) {
    char src[] = "hello";
    char buf[16];

    if (1) {
        memcpy(buf, src, 6);
        memmove(buf + 2, buf, 3);
    }

    if (0) {
        buf[0] = 'x';
    }

    int probe_ok = (buf[2] == 'h' && buf[3] == 'e' && buf[4] == 'l');
    assert(probe_ok);
    return 0;
}
""")

VARIANT_U01 = textwrap.dedent("""\
#include <assert.h>

int main(void) {
    char src[] = "hello";
    char buf[16];

    if (1) {
        /* Direct char-by-char init + element-wise copy through temporaries.
         * Same result as memcpy+memmove but uses no intrinsic calls,
         * avoiding the DG intrinsic-handling bug entirely. */
        buf[0] = src[0]; buf[1] = src[1]; buf[2] = src[2];
        buf[3] = src[3]; buf[4] = src[4]; buf[5] = src[5];
        char tmp0 = buf[0], tmp1 = buf[1], tmp2 = buf[2];
        buf[2] = tmp0; buf[3] = tmp1; buf[4] = tmp2;
    }

    if (0) {
        buf[10] = 'x';
    }

    int probe_ok = (buf[2] == 'h' && buf[3] == 'e' && buf[4] == 'l');
    assert(probe_ok);
    return 0;
}
""")

# U04: Original uses bsearch with external callback cmp().
# Variant: inlines the search logic (same output, no callback dependency)
SEED_U04 = textwrap.dedent("""\
#include <assert.h>
#include <stdlib.h>

static int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(void) {
    int arr[] = {5, 2, 8, 1, 3};
    int key = 3;
    int *found = (int *)bsearch(&key, arr, 5, sizeof(int), cmp);
    assert(found != ((void*)0) && *found == 3);
    return 0;
}
""")

VARIANT_U04 = textwrap.dedent("""\
#include <assert.h>

/* Inline linear search — semantically equivalent to bsearch for sorted arrays
   but uses no callback, so no "Symbols not found" slicing bug */
int main(void) {
    int arr[] = {1, 2, 3, 5, 8};  /* sorted for bsearch equivalence */
    int key = 3;
    int found_val = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            found_val = arr[i];
            break;
        }
    }
    assert(found_val == 3);
    return 0;
}
""")

# U10: Original uses qsort + loop to check sorted result.
# Variant: uses bubble sort (same output, no qsort dependency)
SEED_U10 = textwrap.dedent("""\
#include <assert.h>
#include <stdlib.h>

static int cmp_int(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(void) {
    int arr[] = {3, 1, 4, 1, 5};
    qsort(arr, 5, sizeof(int), cmp_int);
    /* Check sorted order */
    int ok = 1;
    for (int i = 0; i < 4; i++) {
        if (arr[i] > arr[i + 1]) ok = 0;
    }
    assert(ok);
    return 0;
}
""")

VARIANT_U10 = textwrap.dedent("""\
#include <assert.h>

/* Bubble sort — same sorting semantics as qsort, no external callback */
int main(void) {
    int arr[] = {3, 1, 4, 1, 5};
    int n = 5;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    /* Check sorted order */
    int ok = 1;
    for (int i = 0; i < 4; i++) {
        if (arr[i] > arr[i + 1]) ok = 0;
    }
    assert(ok);
    return 0;
}
""")

# U02: Original uses strncat which has a side effect on the destination buffer.
# Variant: manual string copy + null terminator (same result, no strncat)
SEED_U02 = textwrap.dedent("""\
#include <assert.h>
#include <string.h>

int main(void) {
    char buf[32] = "hello";
    strncat(buf, " world", 6);
    int ok = (buf[5] == ' ' && buf[6] == 'w');
    assert(ok);
    return 0;
}
""")

VARIANT_U02 = textwrap.dedent("""\
#include <assert.h>

int main(void) {
    char buf[32] = "hello";
    /* Manual append instead of strncat */
    int len = 5; /* strlen("hello") */
    const char *suffix = " world";
    for (int i = 0; i < 6 && suffix[i] != 0; i++) {
        buf[len + i] = suffix[i];
    }
    buf[len + 6] = 0;
    int ok = (buf[5] == ' ' && buf[6] == 'w');
    assert(ok);
    return 0;
}
""")


class MR1Result(NamedTuple):
    bug_id: str
    family: str
    description: str
    seed_slice_ok: bool
    mutant_slice_ok: bool
    seed_lli_ok: bool
    mutant_lli_ok: bool
    seed_criterion_retained: bool
    mutant_criterion_retained: bool
    slices_equivalent: bool
    detected: bool
    detail: str


def test_pair(
    bug_id: str,
    family: str,
    description: str,
    seed_text: str,
    mutant_text: str,
    slicer: str,
    clang: str,
    lli: str,
    work_dir: Path,
) -> MR1Result:
    criterion = "__assert_fail"
    case_dir = work_dir / bug_id
    case_dir.mkdir(parents=True, exist_ok=True)

    # Write seed and mutant
    seed_c = case_dir / "seed.c"
    mutant_c = case_dir / "mutant.c"
    seed_c.write_text(seed_text, encoding="utf-8")
    mutant_c.write_text(mutant_text, encoding="utf-8")

    # Compile to bitcode
    for src, bc in [(seed_c, case_dir / "seed.bc"), (mutant_c, case_dir / "mutant.bc")]:
        r = _run([clang, "-O0", "-g", "-c", "-emit-llvm", str(src), "-o", str(bc)])
        if r.returncode != 0:
            return MR1Result(bug_id, family, description,
                             seed_slice_ok=False, mutant_slice_ok=False,
                             seed_lli_ok=False, mutant_lli_ok=False,
                             seed_criterion_retained=False, mutant_criterion_retained=False,
                             slices_equivalent=False, detected=False,
                             detail=f"Compile failed: {r.stderr[:150]}")

    # Slice both
    seed_sliced = case_dir / "seed_sliced.bc"
    mutant_sliced = case_dir / "mutant_sliced.bc"

    sr = _run([slicer, "-c", criterion, str(case_dir / "seed.bc"), "-o", str(seed_sliced)], timeout=60)
    mr = _run([slicer, "-c", criterion, str(case_dir / "mutant.bc"), "-o", str(mutant_sliced)], timeout=60)

    if sr.returncode != 0 or mr.returncode != 0:
        return MR1Result(bug_id, family, description,
                         seed_slice_ok=sr.returncode == 0, mutant_slice_ok=mr.returncode == 0,
                         seed_lli_ok=False, mutant_lli_ok=False,
                         seed_criterion_retained=False, mutant_criterion_retained=False,
                         slices_equivalent=False, detected=False,
                         detail="Slice failed")

    # Run sliced programs with lli to check runtime behavior
    seed_run = _run([lli, str(seed_sliced)], timeout=10)
    mutant_run = _run([lli, str(mutant_sliced)], timeout=10)

    seed_lli_ok = seed_run.returncode == 0
    mutant_lli_ok = mutant_run.returncode == 0

    # Disassemble to check criterion retention
    seed_ll = case_dir / "seed_sliced.ll"
    mutant_ll = case_dir / "mutant_sliced.ll"
    _run(["llvm-dis", str(seed_sliced), "-o", str(seed_ll)])
    _run(["llvm-dis", str(mutant_sliced), "-o", str(mutant_ll)])

    seed_ir = seed_ll.read_text(encoding="utf-8") if seed_ll.exists() else ""
    mutant_ir = mutant_ll.read_text(encoding="utf-8") if mutant_ll.exists() else ""

    seed_criterion_retained = criterion in seed_ir
    mutant_criterion_retained = criterion in mutant_ir

    # Slices are equivalent if both behave the same way when run
    slices_equivalent = (seed_lli_ok == mutant_lli_ok)

    # Bug detected if seed slice is wrong but mutant slice is correct
    # (or vice versa) — MR1 violation
    detected = not slices_equivalent

    detail_parts = []
    if not seed_lli_ok:
        detail_parts.append(f"seed_lli={seed_run.stderr[:100].strip()}")
    if not mutant_lli_ok:
        detail_parts.append(f"mutant_lli={mutant_run.stderr[:100].strip()}")
    detail_parts.append(f"seed_criterion={'OK' if seed_criterion_retained else 'LOST'}")
    detail_parts.append(f"mutant_criterion={'OK' if mutant_criterion_retained else 'LOST'}")

    return MR1Result(
        bug_id=bug_id, family=family, description=description,
        seed_slice_ok=sr.returncode == 0, mutant_slice_ok=mr.returncode == 0,
        seed_lli_ok=seed_lli_ok, mutant_lli_ok=mutant_lli_ok,
        seed_criterion_retained=seed_criterion_retained,
        mutant_criterion_retained=mutant_criterion_retained,
        slices_equivalent=slices_equivalent, detected=detected,
        detail=" | ".join(detail_parts),
    )


def main() -> None:
    slicer = resolve_dg_slicer()
    clang = resolve_dg_clang()
    lli = resolve_dg_lli()

    work_dir = Path("/tmp/dg_bug_mr1_v2")
    work_dir.mkdir(parents=True, exist_ok=True)

    test_cases = [
        ("U01", "BUG-MEMMOVE-SOURCE",
         "memcpy dropped before memmove", SEED_U01, VARIANT_U01),
        ("U02", "BUG-STRNCAT-SIDEEFFECT",
         "strncat side effect dropped", SEED_U02, VARIANT_U02),
        ("U04", "BUG-CALLBACK-ESCAPE-SYMBOL-LOSS",
         "callback symbol dropped by slicer", SEED_U04, VARIANT_U04),
        ("U10", "BUG-QSORT-CALL-DROPPED",
         "qsort call entirely dropped", SEED_U10, VARIANT_U10),
    ]

    print("=" * 72)
    print("MR1 Bug Detection with Structurally-Diverse Variants")
    print("=" * 72)
    print(f"  slicer: {slicer}")
    print(f"  clang:  {clang}")
    print(f"  lli:    {lli}")
    print()

    results: list[MR1Result] = []
    for bug_id, family, desc, seed_text, mutant_text in test_cases:
        print(f"--- [{bug_id}] {family} ---")
        print(f"  Bug: {desc}")
        result = test_pair(bug_id, family, desc, seed_text, mutant_text,
                           slicer, clang, lli, work_dir)
        results.append(result)

        if result.detected:
            print(f"  MR1: DETECTED (slices differ — metamorphic violation)")
        else:
            print(f"  MR1: not detected (slices are equivalent)")

        print(f"  Seed lli:     {'PASS' if result.seed_lli_ok else 'FAIL'}")
        print(f"  Mutant lli:   {'PASS' if result.mutant_lli_ok else 'FAIL'}")
        print(f"  Seed crit:    {'RETAINED' if result.seed_criterion_retained else 'LOST'}")
        print(f"  Mutant crit:  {'RETAINED' if result.mutant_criterion_retained else 'LOST'}")
        print(f"  Detail: {result.detail}")
        print()

    # Summary
    print("=" * 72)
    print("Summary")
    print("=" * 72)
    detected = [r for r in results if r.detected]
    print(f"Tested:  {len(results)}")
    print(f"MR1 detected: {len(detected)}/{len(results)}")
    for r in detected:
        print(f"  [{r.bug_id}] {r.family}")
        print(f"    Seed:  {'PASS' if r.seed_lli_ok else 'FAIL'} | "
              f"Mutant: {'PASS' if r.mutant_lli_ok else 'FAIL'} | "
              f"{r.detail}")


if __name__ == "__main__":
    main()
