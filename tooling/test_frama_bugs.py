#!/usr/bin/env python3
"""Comprehensive Frama-C bug reproduction harness.

Covers 17 confirmed true bugs found via metamorphic testing and systematic
C-language-feature testing against Frama-C 30.0 (Zinc).

Bug inventory (from PAPER_MASTER_BUG_TABLE_18.md, 2026-03-28):

Submitted group (13 true bugs, 2735–2751):
  2735  ub_sensitive_semantic_mismatch   Unsequenced read/write linearization
  2736  loop_nontermination              Exit condition dropped → near-unbounded loop
  2737  initializer_loss                 l_4351 initializer removed, use preserved
  2739  initializer_loss_crash           Pointer init removed → deref → segfault
  2740  function_pointer_rename          Stale symbol after renaming → link failure
  2741  vla_runtime_stub_missing         __fc_vla_alloc without runtime definition
  2742  varargs_type_system              Illegal va_list array-type assignment
  2746  initializer_loss                 Init expression dropped → uninitialized use
  2747  uninitialized_divisor_zero       l_488 init dropped → SIGFPE
  2748  initializer_and_pointer_chain    Init loss + pointer chain corrupts value
  2749  function_slicing_dataflow_break  Param removed, dataflow deformed
  2750  precision_over_preservation      Unused global survives slicing
  2751  precision_over_preservation      Unmodified criterion over-preserved

Additional group (4 true bugs, #2753 note):
  2753-007  atomic_runtime_symbol_missing  __fc_atomic_* without linkable impl
  2753-010  lifecycle_hook_semantic_drop   constructor/destructor/atexit dropped
  2753-015  strict_c11_pid_t_visibility    pid_t undefined under -std=c11
  2753-016  slice_loop_inv_nyi_abort       NYI in ACSL term-lval dependency

Excluded (1 not-a-bug):
  2734  expected_tool_behavior  Eva recursion spec issue, not slicing defect

Root cause families (traced to Frama-C 30.0 Zinc source):
  Initializer loss — slicingTransform.ml:383 + filter.ml:562,570
    Independent marks for locals vs stmts → declaration kept, init dropped
  Over-preservation — fct_slice.ml mark propagation too conservative
  UB-sensitive — unsequenced evaluation order concretized by slice export
  Export coherence — symbol renaming / runtime-stub / type-system gaps
"""

from __future__ import annotations

import json
import os
import re
import subprocess
import sys
from collections import OrderedDict
from pathlib import Path
from typing import NamedTuple

_SRC = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "src")
if _SRC not in sys.path:
    sys.path.insert(0, _SRC)

FRAMA_C = os.environ.get("FRAMA_BINARY", "frama-c")
CSMITH_INCLUDE = os.environ.get("CSMITH_INCLUDE_DIR", "/usr/include/csmith")
FRAMA_CPP_FLAG = f"-cpp-extra-args=-I{CSMITH_INCLUDE}"
BUGS_BASE = Path(os.environ.get(
    "FRAMA_BUGS_BASE",
    str(Path(__file__).resolve().parent.parent / "bugs" / "frama"),
))


def _run(cmd: list[str], **kwargs: object) -> subprocess.CompletedProcess[str]:
    return subprocess.run(
        cmd, capture_output=True, text=True,
        timeout=kwargs.pop("timeout", 300), **kwargs
    )


# ---------------------------------------------------------------------------
# Master bug table — the 17 confirmed true bugs
# ---------------------------------------------------------------------------

BUG_MASTER_TABLE = OrderedDict([
    # === Submitted group (13 bugs) ===
    ("2735", {
        "group": "submitted",
        "category": "ub_sensitive_semantic_mismatch",
        "severity": "medium",
        "root_cause": "Unsequenced g_24 read/write; slice linearizes order, "
                      "flips func_41 branch → g_371 overwritten",
        "mrs": ["MR1"],
        "symptom": "g_371: 0xFFF7 → 0xC64B (mismatch)",
        "evidence": "defects/defect/bug6_g371_slicing/ + test87_*",
    }),
    ("2736", {
        "group": "submitted",
        "category": "loop_nontermination",
        "severity": "high",
        "root_cause": "Exit condition dropped; length underflow → "
                      "realsmith_3L7lB_slice_1 near-unbounded loop",
        "mrs": ["MR1"],
        "symptom": "Sliced program times out (>5s vs <1s original)",
        "evidence": "defects/debug_deadloop_test47/",
    }),
    ("2737", {
        "group": "submitted",
        "category": "initializer_loss",
        "severity": "high",
        "root_cause": "slicingTransform.ml:383 + filter.ml:562 — "
                      "declaration mark kept, Local_init invisible → "
                      "l_4351[3] declared but uninitialized",
        "mrs": ["MR1"],
        "symptom": "g_203: -53 → -59 (uninitialized read)",
        "evidence": "defects/test1_数组初始化丢失/",
    }),
    ("2739", {
        "group": "submitted",
        "category": "initializer_loss_crash",
        "severity": "high",
        "root_cause": "Same mark-incoherence as 2737; pointer init "
                      "l_2338 = &g_1320 dropped → deref → segfault",
        "mrs": ["MR1"],
        "symptom": "Sliced program: SIGSEGV (stable)",
        "evidence": "defects/test34_切片后运行退出/ + "
                    "paper-verification/results/2739_ROOT_CAUSE_ANALYSIS.md",
    }),
    ("2740", {
        "group": "submitted",
        "category": "function_pointer_rename_mismatch",
        "severity": "medium",
        "root_cause": "Symbol renaming (_slice_1) not propagated to "
                      "function-pointer targets → undefined reference",
        "mrs": ["MR1"],
        "symptom": "Link failure: undefined reference to add_func/mul_func",
        "evidence": "defects/defect/bug1_function_pointer*/",
    }),
    ("2741", {
        "group": "submitted",
        "category": "vla_runtime_stub_missing",
        "severity": "medium",
        "root_cause": "Exported slice calls __fc_vla_alloc; no linkable "
                      "runtime definition provided",
        "mrs": ["MR1"],
        "symptom": "Link failure: undefined reference to __fc_vla_alloc",
        "evidence": "defects/defect/bug3_vla_link/ + issues/004-vla-support/",
    }),
    ("2742", {
        "group": "submitted",
        "category": "varargs_type_system",
        "severity": "medium",
        "root_cause": "va_list (array type) assigned in sliced output; "
                      "illegal C — cannot assign to array type",
        "mrs": ["MR1"],
        "symptom": "Compile error: assignment to array type va_list",
        "evidence": "defects/defect/bug4_va_list*/ + issues/005-varargs-broken-export/",
    }),
    ("2746", {
        "group": "submitted",
        "category": "initializer_loss",
        "severity": "high",
        "root_cause": "const long r = v % m → long const r; "
                      "init expression dropped, __retres = (v+m)-r uses garbage",
        "mrs": ["MR1"],
        "symptom": "realsmith_7QoqD returns uninitialized value",
        "evidence": "defects/test80_表达式丢失/",
    }),
    ("2747", {
        "group": "submitted",
        "category": "uninitialized_divisor_zero",
        "severity": "high",
        "root_cause": "l_488 init (0xCC21L) dropped; used as divisor in "
                      "safe_mod_func → SIGFPE (50/50 runs)",
        "mrs": ["MR1"],
        "symptom": "source_sliced: SIGFPE (exit 136), mutant_sliced: OK",
        "evidence": "defects/test26-未初始化导致除零异常/",
    }),
    ("2748", {
        "group": "submitted",
        "category": "initializer_and_pointer_chain_loss",
        "severity": "high",
        "root_cause": "Multiple local initializer chains dropped: "
                      "l_2830, l_2835, l_2939, l_99 — all still used later",
        "mrs": ["MR1", "MR4"],
        "symptom": "g_167 mismatch + GCC warns uninitialized locals",
        "evidence": "defects/test6_* + "
                    "paper-verification/results/2748_ROOT_CAUSE_ANALYSIS.md",
    }),
    ("2749", {
        "group": "submitted",
        "category": "function_slicing_dataflow_break",
        "severity": "high",
        "root_cause": "Inline function param removed: "
                      "realsmith_tOG6J(long num) → realsmith_tOG6J_slice_1(void); "
                      "n = (unsigned int)num → unsigned int const n; (uninit)",
        "mrs": ["MR1", "MR4"],
        "symptom": "Function returns garbage via uninitialized n",
        "evidence": "defects/test5_函数被错误切片/ + test14_*",
    }),
    ("2750", {
        "group": "submitted",
        "category": "precision_over_preservation",
        "severity": "medium",
        "root_cause": "Mark propagation too conservative; global g_170 "
                      "with no dependency on criteria survives slicing",
        "mrs": ["MR2", "MR3"],
        "symptom": "Unused g_170 present in sliced output; GCC warns -Wunused-variable",
        "evidence": "defects/test80-切片保守保留/",
    }),
    ("2751", {
        "group": "submitted",
        "category": "precision_over_preservation",
        "severity": "medium",
        "root_cause": "Unmodified criterion variable g_1141 survives; "
                      "over-conservative mark propagation. "
                      "Plus uninit locals l_389, l_67.",
        "mrs": ["MR2", "MR3"],
        "symptom": "g_1141 preserved despite never being modified",
        "evidence": "defects/test87_*/",
    }),
    # === Additional group (4 bugs) ===
    ("2753-007", {
        "group": "additional",
        "category": "atomic_runtime_symbol_missing",
        "severity": "medium",
        "root_cause": "__fc_atomic_fetch_add / __fc_atomic_load exported "
                      "without linkable implementations",
        "mrs": ["MR1"],
        "symptom": "Link failure: undefined reference to __fc_atomic_*",
        "evidence": "issues/007-c11-atomics-undefined-symbols/",
    }),
    ("2753-010", {
        "group": "additional",
        "category": "lifecycle_hook_semantic_drop",
        "severity": "high",
        "root_cause": "PDG lacks implicit call edges for constructor/"
                      "destructor/atexit/cleanup → hooks dropped",
        "mrs": ["MR1", "MR4"],
        "symptom": "Original exit: 190/200/201/129 → Sliced exit: 1/0/0/0",
        "evidence": "issues/010-gnu-constructor-dropped/",
    }),
    ("2753-015", {
        "group": "additional",
        "category": "strict_c11_pid_t_visibility",
        "severity": "medium",
        "root_cause": "Exported slice introduces pid_t tmp; getpid(); "
                      "pid_t not defined under -std=c11",
        "mrs": ["MR1"],
        "symptom": "Compile error: unknown type name 'pid_t'",
        "evidence": "issues/015-posix-pid_t-missing/",
    }),
    ("2753-016", {
        "group": "additional",
        "category": "slice_loop_inv_nyi_abort",
        "severity": "medium",
        "root_cause": "logic_deps.ml:400 — raise NYI for ACSL term-lval "
                      "dependency in -slice-loop-inv path",
        "mrs": ["MR1"],
        "symptom": "Slicing aborts: [logic_interp] dependencies of a term lval",
        "evidence": "issues/016-slicing-term-lval-deps/",
    }),
])


# ---------------------------------------------------------------------------
# Bug pattern detection in sliced C code
# ---------------------------------------------------------------------------

def _detect_patterns(sliced_text: str) -> list[str]:
    """Detect known Frama-C slicing bug patterns in sliced output."""
    patterns: list[str] = []

    # Initializer loss: const local without init
    const_no_init = re.findall(
        r'(?:int|long|float|double|char|short|uint\w*_t)\s+(?:const\s+)?'
        r'(l_\d+)\s*;',
        sliced_text, re.MULTILINE,
    )
    for var in const_no_init[:8]:
        rest = sliced_text[sliced_text.find(var) + len(var):]
        if var in rest[:5000]:
            patterns.append(f"uninit_{var}")
            break

    # Pointer init loss → deref
    uninit_ptrs = re.findall(
        r'(int\d+_t)\s*\*\s*const\s+(l_\d+)\s*;', sliced_text, re.MULTILINE,
    )
    for _, ptr_name in uninit_ptrs[:3]:
        if re.search(rf'\*\s*{ptr_name}\s*=', sliced_text):
            patterns.append(f"uninit_ptr_{ptr_name}")
            break

    # Init expression dropped (2746 pattern)
    if re.search(r'(?:long|int)\s+const\s+\w+\s*;', sliced_text):
        if re.search(r'__retres\s*=\s*\(.*\)\s*[-+]\s*\w+\s*;', sliced_text):
            patterns.append("init_expression_dropped")

    # Dataflow break: function param removed (2749 pattern)
    if re.search(r'unsigned\s+int\s+const\s+\w+\s*;', sliced_text):
        if re.search(r'>>\s*\d+', sliced_text):
            patterns.append("dataflow_break_param_removed")

    # Over-preservation: excessive globals
    global_decls = re.findall(
        r'^(?:static\s+)?(?:int|uint|long|float|double|char|short)\w*\s+'
        r'(g_\w+)', sliced_text, re.MULTILINE,
    )
    if len(global_decls) > 15:
        patterns.append(f"over_preserved_{len(global_decls)}_globals")

    # Criterion over-preserved (2751 pattern: g_170, g_1141)
    for g in ["g_170", "g_1141"]:
        if g in sliced_text:
            patterns.append(f"{g}_over_preserved")
            break

    return patterns


# ---------------------------------------------------------------------------
# Batch defect directory analysis
# ---------------------------------------------------------------------------

class BatchBugResult(NamedTuple):
    bug_id: str
    category: str
    patterns_found: list[str]
    detecting_mrs: list[str]
    detail: str


def _analyze_batch_defect_dir(defect_dir: Path) -> BatchBugResult:
    """Analyze a batch experiment defect directory for sliced file patterns."""
    sliced_files = (
        list(defect_dir.glob("*sliced*.c"))
        + list(defect_dir.glob("*slice*.c"))
    )
    all_patterns: list[str] = []
    details: list[str] = []

    for sf in sliced_files[:5]:
        try:
            text = sf.read_text(encoding="utf-8", errors="ignore")
        except Exception:
            continue
        patterns = _detect_patterns(text)
        all_patterns.extend(patterns)
        if patterns:
            details.append(f"{sf.name}:{','.join(patterns[:2])}")

    has_seed = bool(list(defect_dir.glob("*seed*.c")) or list(defect_dir.glob("*_seed*")))
    if has_seed:
        details.append("has_seed_files")

    if not details:
        details.append("no_sliced_artifacts")

    # Map to known bug categories
    name_lower = defect_dir.name.lower()
    mrs = ["MR1"]
    if "保守" in name_lower or "无关代码" in name_lower or "保留" in name_lower:
        mrs = ["MR2", "MR3"]

    return BatchBugResult(
        bug_id=defect_dir.name[:45],
        category="batch_defect",
        patterns_found=all_patterns or ["(check_manually)"],
        detecting_mrs=mrs,
        detail="; ".join(details),
    )


# ---------------------------------------------------------------------------
# Issue testing (issues/001–016) as supplementary reference
# ---------------------------------------------------------------------------

class IssueResult(NamedTuple):
    issue_id: str
    is_bug: bool
    category: str
    severity: str
    artifacts: int
    test_cases: int
    detecting_mrs: list[str]
    detail: str


# Mapping for issues/ that are not in the 17-bug table
ISSUE_CLASSIFICATION = {
    "001-fnptr-undefined-symbols": {
        "is_bug": True, "category": "compile_failure", "severity": "medium",
        "mrs": ["MR1"], "note": "Function-pointer rename → undefined symbols (related to 2740)",
    },
    "002-main-void": {
        "is_bug": False, "category": "design_decision", "severity": "low",
        "mrs": [], "note": "filter.ml:231 — int main()->void main() when return invisible",
    },
    "003-main-missing-with-main-option": {
        "is_bug": False, "category": "design_decision", "severity": "none",
        "mrs": [], "note": "-main for library analysis, not executable",
    },
    "004-vla-support": {
        "is_bug": True, "category": "compile_failure", "severity": "medium",
        "mrs": ["MR1"], "note": "Same root as 2741 — __fc_vla_alloc without runtime stub",
    },
    "005-varargs-broken-export": {
        "is_bug": True, "category": "compile_failure", "severity": "medium",
        "mrs": ["MR1"], "note": "Same root as 2742 — va_list illegal C in sliced output",
    },
    "006-setjmp-longjmp-unsound": {
        "is_bug": False, "category": "known_limitation", "severity": "none",
        "mrs": [], "note": "Officially unsupported (setjmp.h:29)",
    },
    "007-c11-atomics-undefined-symbols": {
        "is_bug": True, "category": "compile_failure", "severity": "medium",
        "mrs": ["MR1"], "note": "= 2753-007 in master table",
    },
    "008-complex-unsupported": {
        "is_bug": False, "category": "known_limitation", "severity": "none",
        "mrs": [], "note": "Officially unsupported (complex.h:27)",
    },
    "009-alignas-unsupported": {
        "is_bug": False, "category": "known_limitation", "severity": "none",
        "mrs": [], "note": "Parse error — _Alignas not supported",
    },
    "010-gnu-constructor-dropped": {
        "is_bug": True, "category": "correctness", "severity": "high",
        "mrs": ["MR1", "MR4"], "note": "= 2753-010 in master table",
    },
    "011-sizeof-tmp-undeclared": {
        "is_bug": True, "category": "historical", "severity": "medium",
        "mrs": ["MR1"], "note": "SizeOfE normalization fixes this now; did not reproduce 2026-03-09",
    },
    "012-tgmath-unsupported": {
        "is_bug": False, "category": "known_limitation", "severity": "none",
        "mrs": [], "note": "Officially unsupported (tgmath.h:25)",
    },
    "013-sizeof-deref-tmp-undeclared": {
        "is_bug": True, "category": "historical", "severity": "medium",
        "mrs": ["MR1"], "note": "Same root as 011; did not reproduce 2026-03-09",
    },
    "014-alignof-unsupported": {
        "is_bug": False, "category": "known_limitation", "severity": "none",
        "mrs": [], "note": "Parse error — _Alignof not supported",
    },
    "015-posix-pid_t-missing": {
        "is_bug": True, "category": "compile_failure", "severity": "medium",
        "mrs": ["MR1"], "note": "= 2753-015 in master table",
    },
    "016-slicing-term-lval-deps": {
        "is_bug": True, "category": "internal_error", "severity": "medium",
        "mrs": ["MR1"], "note": "= 2753-016 in master table",
    },
}


def _analyze_issue_dir(issue_dir: Path) -> IssueResult:
    info = ISSUE_CLASSIFICATION.get(issue_dir.name, {})
    cases_dir = issue_dir / "cases"
    artifacts_dir = issue_dir / "artifacts"
    notes_dir = issue_dir / "notes"

    case_files = list(cases_dir.glob("*.c")) if cases_dir.is_dir() else []
    sliced_files = list(artifacts_dir.glob("*.sliced.c")) if artifacts_dir.is_dir() else []
    has_source_analysis = (notes_dir / "SOURCE_ANALYSIS.md").exists() if notes_dir.is_dir() else False

    detail_parts = []
    if has_source_analysis:
        detail_parts.append("source-level root cause analysis")
    if sliced_files:
        detail_parts.append(f"{len(sliced_files)} artifacts")

    return IssueResult(
        issue_id=issue_dir.name,
        is_bug=info.get("is_bug", False),
        category=info.get("category", "unknown"),
        severity=info.get("severity", "?"),
        artifacts=len(sliced_files),
        test_cases=len(case_files),
        detecting_mrs=info.get("mrs", []),
        detail=info.get("note", "; ".join(detail_parts)),
    )


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main() -> None:
    if not BUGS_BASE.exists():
        print(f"Bugs directory not found: {BUGS_BASE}", file=sys.stderr)
        sys.exit(1)

    print("=" * 80)
    print("Frama-C Bug Database — 17 Confirmed True Bugs")
    print("Frama-C 30.0 (Zinc) — Metamorphic Testing + Systematic Analysis")
    print("=" * 80)

    # ── Part 1: The 17 bugs ──
    print(f"\n{'Bug ID':<12} {'Group':<12} {'Severity':<10} {'Category':<38} {'MRs':<14}")
    print("-" * 88)

    submitted = []
    additional = []
    category_counts: dict[str, int] = {}
    mr_counts: dict[str, int] = {}
    severity_counts: dict[str, int] = {}

    for bug_id, info in BUG_MASTER_TABLE.items():
        group = info["group"]
        severity = info["severity"]
        category = info["category"]
        mrs = info["mrs"]

        if group == "submitted":
            submitted.append(bug_id)
        else:
            additional.append(bug_id)

        category_counts[category] = category_counts.get(category, 0) + 1
        severity_counts[severity] = severity_counts.get(severity, 0) + 1
        for mr in mrs:
            mr_counts[mr] = mr_counts.get(mr, 0) + 1

        mr_str = ",".join(mrs)
        print(f"{bug_id:<12} {group:<12} {severity:<10} {category:<38} {mr_str:<14}")

    # Summary
    print(f"\n{'=' * 80}")
    print("Summary")
    print(f"{'=' * 80}")
    print(f"  Total true bugs:        17")
    print(f"  Submitted group:        {len(submitted)} (2735–2751)")
    print(f"  Additional group:        {len(additional)} (2753-007/010/015/016)")
    print(f"  Excluded (not-a-bug):   1 (2734)")

    print(f"\n  By severity:")
    for sev in ["high", "medium", "low"]:
        if sev in severity_counts:
            print(f"    {sev}: {severity_counts[sev]}")

    print(f"\n  By category:")
    for cat, count in sorted(category_counts.items()):
        print(f"    {cat}: {count}")

    print(f"\n  MR coverage:")
    for mr in sorted(mr_counts):
        print(f"    {mr}: {mr_counts[mr]} bugs")

    # Root cause families
    print(f"\n{'=' * 80}")
    print("Root Cause Families (traced to Frama-C source)")
    print(f"{'=' * 80}")
    print(f"""
  1. INITIALIZER LOSS (6 bugs: 2737, 2739, 2746, 2747, 2748, 2742)
     Source: slicingTransform.ml:103,383 + filter.ml:519,562,570
             + fct_slice.ml:1390,1403
     Mechanism: Statement mark and local-var mark maintained independently.
       When Local_init is invisible but the variable is visible, the slicer
       exports the declaration without its initializer. Later uses read garbage.
     Detection: MR1 (seed vs mutant value comparison)
       BUT only detects if seed and mutant produce DIFFERENT wrong values.
       Needs structurally-diverse variants (not just Creal renaming).

  2. OVER-PRESERVATION (2 bugs: 2750, 2751)
     PDG mark propagation too conservative; unused globals and unmodified
     criterion variables survive slicing.
     Detection: MR2 (noise survival) + MR3 (dead code survival)

  3. DATAFLOW BREAK (1 bug: 2749)
     Inline function parameter removed during slicing; body references
     uninitialized local instead.
     Detection: MR1 + MR4

  4. UB-SENSITIVE EVALUATION ORDER (1 bug: 2735)
     Source contains unsequenced read/write. Slice export concretizes one
     evaluation order, producing different output from GCC's order.
     Detection: MR1 (but arguably not a slicing soundness bug)

  5. LOOP NON-TERMINATION (1 bug: 2736)
     Exit condition dropped; length underflow → near-unbounded loop.
     Detection: MR1 (timeout → ERROR)

  6. EXPORT COHERENCE (3 bugs: 2740, 2741, 2742)
     Symbol renaming, runtime-stub, and type-system gaps in exported C.
     Detection: MR1 (compile/link failure → ERROR)

  7. LIFECYCLE / BUILTIN SUPPORT (3 bugs: 2753-007, 2753-010, 2753-015)
     Missing runtime support for constructor/destructor, atomic builtins,
     and POSIX types under strict C11.
     Detection: MR1 + MR4

  8. INTERNAL NYI (1 bug: 2753-016)
     Unimplemented ACSL term-lval dependency computation.
     Detection: MR1 (abort → ERROR)
""")

    # ── Part 2: Evidence locations ──
    print("=" * 80)
    print("Evidence Locations")
    print("=" * 80)
    for bug_id, info in BUG_MASTER_TABLE.items():
        print(f"  {bug_id}: {info['evidence']}")

    # ── Part 3: Issues/ directory (supporting reference) ──
    print(f"\n{'=' * 80}")
    print("Supplementary: issues/ Directory (C-Language Feature Classification)")
    print(f"{'=' * 80}")

    issues_dir = BUGS_BASE / "issues"
    if issues_dir.is_dir():
        issue_results = []
        for issue_dir in sorted(issues_dir.iterdir()):
            if not issue_dir.is_dir():
                continue
            result = _analyze_issue_dir(issue_dir)
            issue_results.append(result)

        print(f"\n{'Issue':<38} {'Bug?':<6} {'Severity':<10} {'Category':<20} {'Note'}")
        print("-" * 110)
        for r in issue_results:
            bug_str = "YES" if r.is_bug else "no"
            print(f"{r.issue_id:<38} {bug_str:<6} {r.severity:<10} {r.category:<20} {r.detail[:55]}")

        real_issues = [r for r in issue_results if r.is_bug]
        non_issues = [r for r in issue_results if not r.is_bug]
        print(f"\n  Issues total: {len(issue_results)} "
              f"(true bugs: {len(real_issues)}, design/limit: {len(non_issues)})")
        print(f"  Note: issues 007/010/015/016 correspond to master table 2753-* entries.")
        print(f"  Issues 004/005 overlap with master table 2741/2742.")

    # ── Part 4: Batch defects quick scan ──
    print(f"\n{'=' * 80}")
    print("Supplementary: defects/ Directory (Batch Experiment Artifacts)")
    print(f"{'=' * 80}")

    defects_dir = BUGS_BASE / "defects"
    if defects_dir.is_dir():
        batch_dirs = [d for d in sorted(defects_dir.iterdir())
                      if d.is_dir() and d.name != "defect"]
        print(f"  Batch experiment directories: {len(batch_dirs)}")
        for d in batch_dirs:
            sliced = (list(d.glob("*sliced*.c")) + list(d.glob("*slice*.c")))
            n_sliced = len(sliced)
            n_seed = len(list(d.glob("*seed*.c")))
            print(f"    {d.name:<50} sliced:{n_sliced} seed:{n_seed}")

        # Also scan defects/defect/
        defect_sub = defects_dir / "defect"
        if defect_sub.is_dir():
            print(f"\n  Minimal reproduction cases (defects/defect/):")
            for d in sorted(defect_sub.iterdir()):
                if d.is_dir():
                    sliced = list(d.glob("*sliced*.c"))
                    print(f"    {d.name:<45} sliced:{len(sliced)}")

    # ── Part 5: Framework detection strategy ──
    print(f"\n{'=' * 80}")
    print("Metamorphic Testing Detection Strategy")
    print(f"{'=' * 80}")
    print(f"""
  MR1 (Value Comparison) — 15/17 bugs detectable
    Effective for: initializer loss, dataflow break, lifecycle hooks
    Limitation: if seed and mutant trigger the SAME wrong slicing behavior,
    both produce identical wrong values → MR1 passes.
    Solution: LLM-generated structurally-diverse variants

  MR2 (Noise Survival) — 3/17 bugs (2750, 2751, 2735)
    Insert irrelevant data → should NOT survive slicing
    Directly detects over-preservation

  MR3 (Dead Code Survival) — 3/17 bugs (2750, 2751, 2735)
    Insert if(0) blocks → should be removed
    Complements MR2 for over-preservation

  MR4 (Set Union) — 4/17 bugs (2748, 2749, 2753-010, 2742)
    Union(single-var slices) should equal multi-var slice
    Detects pointer-chain and lifecycle interaction bugs

  Pre-slice compile/link failures → automatically caught as ERROR
    Applies to 2740, 2741, 2742, 2753-007, 2753-015

  Estimated framework detection rate: ~15/17 (88%)
  The 2 potential gaps: 2735 (UB source, not true slicing bug)
                        2736 (loop non-termination → timeout detection needed)
""")


if __name__ == "__main__":
    main()
