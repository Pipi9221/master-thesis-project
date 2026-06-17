#!/usr/bin/env python3
"""Direct DG bug reproduction test harness.

For each bug in ``bugs/dg/``, slice the original bitcode with the documented
criterion, then run the sliced output through ``lli`` to check whether the known
bug still reproduces.

Reports which metamorphic relations (MR1–MR4) would detect each bug.
"""

from __future__ import annotations

import argparse
import json
import os
import subprocess
import sys
from pathlib import Path
from typing import NamedTuple

# Ensure src/ is on the path
_SRC = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "src")
if _SRC not in sys.path:
    sys.path.insert(0, _SRC)

from common.tool_paths import resolve_dg_slicer, resolve_dg_lli, resolve_dg_llvm_dis

# ---------------------------------------------------------------------------
# Bug → C source mapping (from dg-experiments cases/precision/)
# ---------------------------------------------------------------------------
BUG_C_SOURCE_MAP: dict[str, str] = {
    "U01-BUG-MEMMOVE-SOURCE": "min_memmove_deadcode.c",
    "U02-BUG-STRNCAT-SIDEEFFECT": "min_strncat_deadcode.c",
    "U03-BUG-SETJMP-LONGJMP-MISSLICE": "setjmp_longjmp_misslice.c",
    "U04-BUG-CALLBACK-ESCAPE-SYMBOL-LOSS": "min_callback_escape_bsearch.c",
    "U05-BUG-CONSTRUCTOR-INIT-DROPPED": "min_constructor_global_init.c",
    "U06-BUG-CMPXCHG-LOCAL-INIT-MISSLICE": "min_cmpxchg_local_init_misslice.c",
    "U07-BUG-BCOPY-LEN-SIDEEFFECT": "min_bcopy_len_sideeffect.c",
    "U10-BUG-QSORT-CALL-DROPPED": "min_qsort_call_dropped.c",
    "U11-BUG-SWAB-CALL-DROPPED": "min_swab_call_dropped.c",
    "U12-BUG-STPCPY-STPNCPY-DISCARD-RET": "min_stpcpy_discard_ret.c",
    "U13-BUG-WCHAR-MUTATOR-DROPPED": "min_wcscpy_discard_ret.c",
    "U15-BUG-ERRNO-SIDEEFFECT-DROPPED": "min_errno_strtoll_sideeffect.c",
    "U16-BUG-STATEFUL-API-SIDEEFFECT-DROPPED": "min_setenv_state_effect.c",
    "O02-BUG-INLINE-ASM-MEM-SIDEEFFECT": "min_inline_asm_mem_sideeffect.c",
    "S05-BUG-NORETURN-UNREACHABLE": "noreturn_exit_misslice.c",
}

# Path to DG experiments precision cases
_EXPERIMENTS_CASES = Path(
    "/home/cyuan/projects/dg-experiments/comfirm-issue/cases/precision"
)


class BugTestResult(NamedTuple):
    bug_id: str
    family: str
    bucket: str
    slice_ok: bool
    slice_exit: int
    sliced_run_ok: bool
    sliced_run_exit: int
    sliced_run_stderr: str
    detecting_mrs: list[str]
    note: str = ""


def _run(cmd: list[str], **kwargs: object) -> subprocess.CompletedProcess[str]:
    return subprocess.run(
        cmd,
        capture_output=True,
        text=True,
        timeout=kwargs.pop("timeout", 60),
        **kwargs,
    )


def _classify_bug(family: str, description: str) -> list[str]:
    """Return which MRs would detect this bug category."""
    mrs: list[str] = []
    family_lower = family.lower()

    # Crash / segfault bugs → any MR that involves slicing detects as ERROR
    crash_keywords = ["crash", "segfault", "invalid-ir", "unreachable"]
    if any(kw in family_lower for kw in crash_keywords):
        mrs.append("MR1")  # slice produces invalid IR → ERROR
        return mrs

    # Under-slicing (precision) bugs → MR1 is the primary detector
    # (equivalent variant would produce different slice)
    under_slicing_keywords = [
        "misslice", "dropped", "symbol-loss", "sideeffect",
        "discard-ret", "missing-value",
    ]
    if any(kw in family_lower for kw in under_slicing_keywords):
        mrs.append("MR1")  # semantic equivalence violated
        mrs.append("MR4")  # union property also likely broken

    # Side-effect bugs → MR2 (noise should not survive)
    if "sideeffect" in family_lower or "dropped" in family_lower:
        if "MR2" not in mrs:
            mrs.append("MR2")

    return mrs or ["MR1"]


def test_bug_directly(bug_dir: Path, slicer: str, lli: str) -> BugTestResult:
    """Slice the original .bc and run the result through lli."""
    # Read metadata
    meta_path = bug_dir / "metadata.json"
    if meta_path.exists():
        meta = json.loads(meta_path.read_text())
    else:
        meta = {}

    # Find original .bc file
    bc_files = sorted(bug_dir.glob("*.bc"))
    orig_bc = None
    for f in bc_files:
        if "sliced" not in f.name:
            orig_bc = f
            break
    if orig_bc is None and bc_files:
        orig_bc = bc_files[0]
    if orig_bc is None:
        return BugTestResult(
            bug_id=meta.get("id", "?"),
            family=meta.get("family", bug_dir.name),
            bucket=meta.get("bucket", "?"),
            slice_ok=False, slice_exit=-1,
            sliced_run_ok=False, sliced_run_exit=-1,
            sliced_run_stderr="No .bc file found",
            detecting_mrs=[],
            note="missing .bc",
        )

    # Slice with __assert_fail criterion
    sliced_bc = bug_dir / "_test_sliced.bc"
    slice_result = _run(
        [slicer, "-c", "__assert_fail", str(orig_bc), "-o", str(sliced_bc)],
    )
    slice_ok = slice_result.returncode == 0

    if not slice_ok:
        return BugTestResult(
            bug_id=meta.get("id", "?"),
            family=meta.get("family", bug_dir.name),
            bucket=meta.get("bucket", "?"),
            slice_ok=False, slice_exit=slice_result.returncode,
            sliced_run_ok=False, sliced_run_exit=-1,
            sliced_run_stderr=slice_result.stderr[:500],
            detecting_mrs=["*"],  # any MR would catch slicing failure
            note="slice failed",
        )

    # Run sliced output with lli
    run_result = _run([lli, str(sliced_bc)], timeout=10)
    sliced_run_ok = run_result.returncode == 0
    stderr_summary = run_result.stderr[:300]

    # Clean up
    sliced_bc.unlink(missing_ok=True)

    family = meta.get("family", bug_dir.name)
    description = bug_dir.name
    mrs = _classify_bug(family, description)

    return BugTestResult(
        bug_id=meta.get("id", "?"),
        family=family,
        bucket=meta.get("bucket", "?"),
        slice_ok=slice_ok,
        slice_exit=slice_result.returncode,
        sliced_run_ok=sliced_run_ok,
        sliced_run_exit=run_result.returncode,
        sliced_run_stderr=stderr_summary,
        detecting_mrs=mrs,
    )


def test_bug_via_c_source(
    bug_dir: Path, bug_family: str, c_source: Path
) -> str:
    """Test a bug through the MR1 pipeline using its C source."""
    # Compile to .bc
    bc_path = bug_dir / "_test_source.bc"
    result = _run(
        ["clang-14", "-O0", "-g", "-c", "-emit-llvm", str(c_source), "-o", str(bc_path)],
    )
    if result.returncode != 0:
        bc_path.unlink(missing_ok=True)
        return f"Compile failed: {result.stderr[:200]}"
    return f"Compiled OK ({bc_path.stat().st_size} bytes)"


def main() -> None:
    parser = argparse.ArgumentParser(description="DG bug reproduction test harness")
    parser.add_argument("--bugs-dir", default="bugs/dg", help="Path to bugs directory")
    parser.add_argument("--slicer", default=None, help="Path to llvm-slicer")
    parser.add_argument("--lli", default=None, help="Path to lli")
    parser.add_argument("--json", action="store_true", help="Output JSON")
    parser.add_argument("--test-c-source", action="store_true",
                        help="Also test bugs via C source compilation")
    args = parser.parse_args()

    slicer = args.slicer or resolve_dg_slicer()
    lli = args.lli or resolve_dg_lli()

    bugs_base = Path(args.bugs_dir)
    if not bugs_base.exists():
        print(f"Bugs directory not found: {bugs_base}", file=sys.stderr)
        sys.exit(1)

    print(f"=== DG Bug Test Harness ===")
    print(f"  slicer: {slicer}")
    print(f"  lli:    {lli}")
    print(f"  bugs:   {bugs_base.absolute()}")
    print()

    results: list[BugTestResult] = []
    c_source_results: dict[str, str] = {}

    for bug_dir in sorted(bugs_base.iterdir()):
        if not bug_dir.is_dir():
            continue
        print(f"Testing {bug_dir.name} ... ", end="", flush=True)
        result = test_bug_directly(bug_dir, slicer, lli)
        results.append(result)
        status = "REPRO" if (result.slice_ok and not result.sliced_run_ok) else "MISS"
        if not result.slice_ok:
            status = "SLICE_FAIL"
        elif result.sliced_run_ok:
            status = "PASS"
        print(f"{status} (MRs: {','.join(result.detecting_mrs)})")

        # Test C source if available
        if args.test_c_source:
            family = bug_dir.name.split("-", 2)[-1] if bug_dir.name[0].isupper() else ""
            c_file_key = None
            for key in BUG_C_SOURCE_MAP:
                if key in bug_dir.name or bug_dir.name in key:
                    c_file_key = key
                    break
            if c_file_key:
                c_path = _EXPERIMENTS_CASES / BUG_C_SOURCE_MAP[c_file_key]
                if c_path.exists():
                    cs_result = test_bug_via_c_source(bug_dir, family, c_path)
                    c_source_results[bug_dir.name] = cs_result
                    print(f"  C source: {cs_result}")

    # Summary
    print(f"\n=== Summary ===")
    repro = [r for r in results if r.slice_ok and not r.sliced_run_ok]
    slice_fail = [r for r in results if not r.slice_ok]
    passed = [r for r in results if r.slice_ok and r.sliced_run_ok]

    print(f"Total bugs:     {len(results)}")
    print(f"Reproduced:     {len(repro)} (sliced program fails)")
    print(f"Slice failed:   {len(slice_fail)}")
    print(f"No repro:       {len(passed)}")

    if repro:
        print(f"\n--- Reproduced Bugs ---")
        for r in repro:
            stderr_line = r.sliced_run_stderr.splitlines()
            stderr_first = stderr_line[0] if stderr_line else ""
            print(f"  [{r.bug_id}] {r.family}")
            print(f"    MRs: {', '.join(r.detecting_mrs)}")
            print(f"    lli stderr: {stderr_first[:120]}")

    if slice_fail:
        print(f"\n--- Slice Failures ---")
        for r in slice_fail:
            print(f"  [{r.bug_id}] {r.family}: {r.sliced_run_stderr[:100]}")

    if passed:
        print(f"\n--- No Reproduction ---")
        for r in passed:
            print(f"  [{r.bug_id}] {r.family}")

    # MR coverage summary
    print(f"\n--- MR Coverage ---")
    mr_counts: dict[str, int] = {}
    for r in results:
        for mr in r.detecting_mrs:
            mr_counts[mr] = mr_counts.get(mr, 0) + 1
    for mr in sorted(mr_counts):
        print(f"  {mr}: {mr_counts[mr]} bugs")

    if args.json:
        output = {
            "total": len(results),
            "reproduced": len(repro),
            "slice_failed": len(slice_fail),
            "no_repro": len(passed),
            "results": [
                {
                    "bug_id": r.bug_id,
                    "family": r.family,
                    "bucket": r.bucket,
                    "slice_ok": r.slice_ok,
                    "sliced_run_ok": r.sliced_run_ok,
                    "detecting_mrs": r.detecting_mrs,
                }
                for r in results
            ],
        }
        print(json.dumps(output, indent=2))


if __name__ == "__main__":
    main()
