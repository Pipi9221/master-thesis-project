"""Batch experiment controller with progress persistence and resume.

Wraps :func:`pipeline.run_experiment.run_experiment` with lifecycle management
migrated from the reference Creal + Frama-C batch experiment system.

Usage::

    python3 -m pipeline.batch_controller start --count 100 --output-dir ./runs
    python3 -m pipeline.batch_controller resume --output-dir ./runs
    python3 -m pipeline.batch_controller status --output-dir ./runs
    python3 -m pipeline.batch_controller analyze --output-dir ./runs
"""

from __future__ import annotations

import argparse
import json
import os
import sys
import traceback
from datetime import datetime, timezone
from pathlib import Path

from pipeline.run_experiment import ExperimentConfig, run_experiment


# ---------------------------------------------------------------------------
# Batch state persistence
# ---------------------------------------------------------------------------


def _now_iso() -> str:
    return datetime.now(timezone.utc).isoformat()


def _read_json(path: Path) -> dict[str, object]:
    return json.loads(path.read_text(encoding="utf-8"))


def _write_json(path: Path, data: object) -> None:
    path.write_text(
        json.dumps(data, indent=2, ensure_ascii=False, sort_keys=True) + "\n",
        encoding="utf-8",
    )


def _load_batch_state(output_dir: Path) -> dict[str, object]:
    config_path = output_dir / "batch_config.json"
    if config_path.exists():
        return _read_json(config_path)  # type: ignore[return-value]
    return {}


def _save_batch_state(output_dir: Path, state: dict[str, object]) -> None:
    output_dir.mkdir(parents=True, exist_ok=True)
    _write_json(output_dir / "batch_config.json", state)


def _load_results(output_dir: Path) -> dict[str, object]:
    results_path = output_dir / "batch_results.json"
    if results_path.exists():
        return _read_json(results_path)  # type: ignore[return-value]
    return {"runs": [], "summary": _empty_summary()}


def _save_results(output_dir: Path, results: dict[str, object]) -> None:
    output_dir.mkdir(parents=True, exist_ok=True)
    _write_json(output_dir / "batch_results.json", results)


def _empty_summary() -> dict[str, object]:
    return {
        "total": 0,
        "completed": 0,
        "violations": 0,
        "errors": 0,
        "passes": 0,
    }


# ---------------------------------------------------------------------------
# Batch controller
# ---------------------------------------------------------------------------


class BatchController:
    """Manages multi-run batch experiments with resume support."""

    def __init__(self, output_dir: Path) -> None:
        self._output_dir = output_dir

    # -- public API ----------------------------------------------------------

    def start(self, config: ExperimentConfig, total: int) -> None:
        """Start a new batch of *total* experiments."""
        state: dict[str, object] = {
            "total_experiments": total,
            "current_index": 0,
            "start_time": _now_iso(),
            "config": {
                "seed_source": config.seed_source,
                "mr": config.mr,
                "tool": config.tool,
                "tools": list(config.tools),
            },
        }
        _save_batch_state(self._output_dir, state)
        _save_results(self._output_dir, {"runs": [], "summary": _empty_summary()})

        self._execute_batch(config, state)

    def resume(self, config: ExperimentConfig) -> None:
        """Resume an interrupted batch from saved state."""
        state = _load_batch_state(self._output_dir)
        if not state:
            print("No saved batch state found. Use 'start' to begin a new batch.")
            return

        current = int(state.get("current_index", 0))
        total = int(state.get("total_experiments", 0))
        if current >= total:
            print(f"Batch already complete ({current}/{total}).")
            return

        print(f"Resuming batch at experiment {current + 1}/{total} ...")
        self._execute_batch(config, state)

    def status(self) -> None:
        """Print current batch progress."""
        state = _load_batch_state(self._output_dir)
        results = _load_results(self._output_dir)

        if not state:
            print("No batch in progress.")
            return

        total = int(state.get("total_experiments", 0))
        current = int(state.get("current_index", 0))
        summary = results.get("summary", {})
        if not isinstance(summary, dict):
            summary = {}

        print(f"Batch status: {current}/{total} completed")
        print(f"  Started:    {state.get('start_time', 'unknown')}")
        print(f"  Completed:  {summary.get('completed', 0)}")
        print(f"  Violations: {summary.get('violations', 0)}")
        print(f"  Passes:     {summary.get('passes', 0)}")
        print(f"  Errors:     {summary.get('errors', 0)}")
        if current > 0:
            rate = int(summary.get("violations", 0)) / current * 100
            print(f"  Violation rate: {rate:.1f}%")

    def analyze(self) -> None:
        """Print aggregate analysis of completed batch results."""
        results = _load_results(self._output_dir)
        runs = results.get("runs", [])
        if not isinstance(runs, list) or not runs:
            print("No results to analyze.")
            return

        summary = results.get("summary", {})
        if not isinstance(summary, dict):
            summary = {}

        total = len(runs)
        violations = int(summary.get("violations", 0))
        errors = int(summary.get("errors", 0))
        passes = int(summary.get("passes", 0))

        print(f"Batch analysis ({total} experiments):")
        print(f"  Violations: {violations} ({violations / total * 100:.1f}%)" if total else "  Violations: 0")
        print(f"  Passes:     {passes} ({passes / total * 100:.1f}%)" if total else "  Passes: 0")
        print(f"  Errors:     {errors} ({errors / total * 100:.1f}%)" if total else "  Errors: 0")

        # Per-tool breakdown
        tool_stats: dict[str, dict[str, int]] = {}
        for run_entry in runs:
            if not isinstance(run_entry, dict):
                continue
            oracle_runs = run_entry.get("oracle_runs", {})
            if isinstance(oracle_runs, dict):
                for tool_name, tool_result in oracle_runs.items():
                    if not isinstance(tool_result, dict):
                        continue
                    if tool_name not in tool_stats:
                        tool_stats[tool_name] = {"VIOLATION": 0, "PASS": 0, "ERROR": 0}
                    status_val = str(tool_result.get("status", "ERROR"))
                    if status_val in tool_stats[tool_name]:
                        tool_stats[tool_name][status_val] += 1

        if tool_stats:
            print("\n  Per-tool breakdown:")
            for tool_name, stats in sorted(tool_stats.items()):
                t = sum(stats.values())
                print(f"    {tool_name}: {stats['VIOLATION']} violations, "
                      f"{stats['PASS']} passes, {stats['ERROR']} errors "
                      f"({stats['VIOLATION'] / t * 100:.1f}% violation rate)" if t else f"    {tool_name}: no data")


    def clean(self, *, confirm: bool = False) -> None:
        """Remove all batch experiment data."""
        if not confirm:
            response = input(f"Delete {self._output_dir}? (y/N): ")
            if response.lower() != 'y':
                print("Cancelled.")
                return

        import shutil
        if self._output_dir.exists():
            shutil.rmtree(self._output_dir)
            print(f"Deleted {self._output_dir}")

    # -- internal ------------------------------------------------------------

    def _execute_batch(self, config: ExperimentConfig, state: dict[str, object]) -> None:
        total = int(state.get("total_experiments", 0))
        start_index = int(state.get("current_index", 0))
        results = _load_results(self._output_dir)

        for i in range(start_index, total):
            run_dir = self._output_dir / f"run_{i:04d}"
            run_config = ExperimentConfig(
                output_dir=run_dir,
                seed_source=config.seed_source,
                mr=config.mr,
                tool=config.tool,
                tools=config.tools,
                manifest_path=config.manifest_path,
                mr_ast_tool=config.mr_ast_tool,
                rng_seed_base=config.rng_seed_base + i,
                count=config.count,
                csmith_binary=config.csmith_binary,
                csmith_args=config.csmith_args,
                creal_python=config.creal_python,
                creal_script=config.creal_script,
                syn_prob=config.syn_prob,
                csmith_home=config.csmith_home,
                csmith_options=config.csmith_options,
                clang_binary=config.clang_binary,
                csmith_include_dir=config.csmith_include_dir,
                seed_dir=config.seed_dir,
                frama_binary=config.frama_binary,
                frama_args=config.frama_args,
                compiler_binary=config.compiler_binary,
                compiler_args=config.compiler_args,
                link_args=config.link_args,
                dg_binary=config.dg_binary,
                dg_clang_binary=config.dg_clang_binary,
                dg_llvm_dis_binary=config.dg_llvm_dis_binary,
                dg_lli_binary=config.dg_lli_binary,
                dg_llvm_link_binary=config.dg_llvm_link_binary,
                dg_native_compile_args=config.dg_native_compile_args,
                dg_args=config.dg_args,
                dg_judge_mode=config.dg_judge_mode,
                dg_llm_judge_command=config.dg_llm_judge_command,
                dg_llm_prompt_version=config.dg_llm_prompt_version,
                llm_command=config.llm_command,
                llm_feature_focus=config.llm_feature_focus,
                llm_criteria=config.llm_criteria,
                llm_dependency_focus=config.llm_dependency_focus,
                llm_max_retries=config.llm_max_retries,
                llm_required_topics=config.llm_required_topics,
                llm_min_topics=config.llm_min_topics,
                no_run_check=config.no_run_check,
                max_retries=config.max_retries,
            )

            try:
                manifest = run_experiment(run_config)
                run_summary = _extract_run_summary(manifest)

                # Update results in-place
                runs = results.get("runs", [])
                if not isinstance(runs, list):
                    runs = []
                runs.append(run_summary)
                results["runs"] = runs

                # Update summary accumulators
                summary = results.get("summary", {})
                if not isinstance(summary, dict):
                    summary = _empty_summary()
                summary["completed"] = int(summary.get("completed", 0)) + 1
                summary["violations"] = int(summary.get("violations", 0)) + int(run_summary.get("violations", 0))
                summary["passes"] = int(summary.get("passes", 0)) + int(run_summary.get("passes", 0))
                summary["errors"] = int(summary.get("errors", 0)) + int(run_summary.get("errors", 0))
                summary["total"] = i + 1
                results["summary"] = summary

                _save_results(self._output_dir, results)

            except KeyboardInterrupt:
                state["current_index"] = i
                _save_batch_state(self._output_dir, state)
                _save_results(self._output_dir, results)
                print(f"\nInterrupted. Progress saved ({i}/{total}). Resume with 'resume'.")
                return
            except Exception:
                traceback.print_exc()
                runs = results.get("runs", [])
                if not isinstance(runs, list):
                    runs = []
                runs.append({"index": i, "status": "ERROR", "reason": traceback.format_exc()})
                results["runs"] = runs
                summary = results.get("summary", {})
                if not isinstance(summary, dict):
                    summary = _empty_summary()
                summary["errors"] = int(summary.get("errors", 0)) + 1
                summary["total"] = i + 1
                results["summary"] = summary
                _save_results(self._output_dir, results)

            # Progress indicator every 10 runs
            if (i + 1) % 10 == 0:
                print(f"  Progress: {i + 1}/{total}")

            state["current_index"] = i + 1
            _save_batch_state(self._output_dir, state)

        # Mark complete
        state["current_index"] = total
        state["end_time"] = _now_iso()
        _save_batch_state(self._output_dir, state)
        print(f"\nBatch complete: {total} experiments.")


def _extract_run_summary(manifest: dict[str, object]) -> dict[str, object]:
    """Extract a compact summary from a run manifest."""
    cases = manifest.get("cases", [])
    violations = 0
    passes = 0
    errors = 0

    if isinstance(cases, list):
        for case in cases:
            if not isinstance(case, dict):
                continue
            oracle_runs = case.get("oracle_runs", {})
            if isinstance(oracle_runs, dict):
                for result in oracle_runs.values():
                    if isinstance(result, dict):
                        status = str(result.get("status", "ERROR"))
                        if status == "VIOLATION":
                            violations += 1
                        elif status == "PASS":
                            passes += 1
                        elif status == "ERROR":
                            errors += 1

    return {
        "mr": manifest.get("mr"),
        "seed_source": manifest.get("seed_source"),
        "case_count": manifest.get("case_count"),
        "tools": manifest.get("tools"),
        "violations": violations,
        "passes": passes,
        "errors": errors,
        "cases": cases,
    }


# ---------------------------------------------------------------------------
# Report generation (migrated from batch_experiment.py)
# ---------------------------------------------------------------------------


def generate_markdown_report(results_path: Path, output_path: Path | None = None) -> str:
    """Generate a Markdown experiment report from *results_path*.

    If *output_path* is provided the report is also written to disk.
    Returns the report text.
    """
    results = _read_json(results_path) if isinstance(results_path, Path) else {}
    if not isinstance(results, dict):
        return ""

    runs = results.get("runs", [])
    if not isinstance(runs, list):
        runs = []
    summary = results.get("summary", {})
    if not isinstance(summary, dict):
        summary = {}

    lines: list[str] = []
    lines.append("# Metamorphic Testing Experiment Report")
    lines.append("")
    lines.append("## Summary")
    lines.append("")
    total = int(summary.get("total", len(runs)))
    violations = int(summary.get("violations", 0))
    passes = int(summary.get("passes", 0))
    errors = int(summary.get("errors", 0))

    lines.append(f"- **Total experiments**: {total}")
    lines.append(f"- **Violations**: {violations} ({_pct(violations, total)})")
    lines.append(f"- **Passes**: {passes} ({_pct(passes, total)})")
    lines.append(f"- **Errors**: {errors} ({_pct(errors, total)})")
    lines.append("")

    if runs:
        lines.append("## Per-Experiment Results")
        lines.append("")
        lines.append("| Run | MR | Seed Source | Cases | Violations | Passes | Errors |")
        lines.append("|-----|-----|-------------|-------|------------|--------|-------|")
        for i, run_entry in enumerate(runs):
            if not isinstance(run_entry, dict):
                continue
            mr = run_entry.get("mr", "?")
            source = run_entry.get("seed_source", "?")
            cases = run_entry.get("case_count", "?")
            v = run_entry.get("violations", 0)
            p = run_entry.get("passes", 0)
            e = run_entry.get("errors", 0)
            lines.append(f"| {i + 1} | {mr} | {source} | {cases} | {v} | {p} | {e} |")
        lines.append("")

        # Per-tool breakdown
        tool_violations: dict[str, int] = {}
        tool_total: dict[str, int] = {}
        for run_entry in runs:
            if not isinstance(run_entry, dict):
                continue
            for case in run_entry.get("cases", []) or []:
                if not isinstance(case, dict):
                    continue
                for tool_name, tool_result in (case.get("oracle_runs", {}) or {}).items():
                    if not isinstance(tool_result, dict):
                        continue
                    tool_total[tool_name] = tool_total.get(tool_name, 0) + 1
                    if tool_result.get("status") == "VIOLATION":
                        tool_violations[tool_name] = tool_violations.get(tool_name, 0) + 1

        if tool_total:
            lines.append("## Per-Tool Breakdown")
            lines.append("")
            lines.append("| Tool | Total | Violations | Violation Rate |")
            lines.append("|------|-------|------------|----------------|")
            for tool_name in sorted(tool_total):
                tv = tool_violations.get(tool_name, 0)
                tt = tool_total[tool_name]
                lines.append(f"| {tool_name} | {tt} | {tv} | {_pct(tv, tt)} |")
            lines.append("")

    lines.append("---")
    lines.append(f"*Report generated: {_now_iso()}*")
    lines.append("")

    report = "\n".join(lines)

    if output_path is not None:
        output_path.parent.mkdir(parents=True, exist_ok=True)
        output_path.write_text(report, encoding="utf-8")
        print(f"Report written to {output_path}")

    return report


def _pct(numerator: int, denominator: int) -> str:
    if denominator == 0:
        return "0.0%"
    return f"{numerator / denominator * 100:.1f}%"


# ---------------------------------------------------------------------------
# CLI
# ---------------------------------------------------------------------------


def _build_config_from_env() -> ExperimentConfig:
    """Build a minimal ExperimentConfig from CLI args (delegated to run_experiment)."""
    return ExperimentConfig(
        output_dir=Path("/tmp/batch_dummy"),  # overridden per-run
        seed_source=os.environ.get("BATCH_SEED_SOURCE", "csmith"),
        mr=os.environ.get("BATCH_MR", "MR2"),
        tool=None,
        tools=("frama", "dg"),
    )


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Batch experiment controller (start / resume / status / analyze / clean)"
    )
    parser.add_argument(
        "action",
        choices=("start", "resume", "status", "analyze", "clean", "report"),
        help="Batch action",
    )
    parser.add_argument("--output-dir", required=True, help="Batch output directory")
    parser.add_argument("--count", type=int, default=100, help="Number of experiments (start only)")
    parser.add_argument("--confirm", action="store_true", help="Confirm destructive actions")

    # Passthrough args for run_experiment configuration
    parser.add_argument("--seed-source", default="csmith")
    parser.add_argument("--mr", default="MR2")
    parser.add_argument("--tool", default=None)
    parser.add_argument("--tools", default="frama,dg")
    parser.add_argument("--mr-ast-tool", default=None)
    parser.add_argument("--rng-seed-base", type=int, default=17)

    # Additional passthrough (partial - extend as needed)
    parser.add_argument("--csmith-binary", default="csmith")
    parser.add_argument("--csmith-include-dir", default="/usr/include/csmith")
    parser.add_argument("--clang-binary", default="clang")
    parser.add_argument("--frama-binary", default="frama-c")
    parser.add_argument("--dg-binary")
    parser.add_argument("--dg-clang-binary")
    parser.add_argument("--dg-llvm-dis-binary")
    parser.add_argument("--creal-python", default="/usr/bin/python3")
    parser.add_argument("--seed-dir", default=None)

    args = parser.parse_args()

    output_dir = Path(args.output_dir)
    controller = BatchController(output_dir)

    if args.action == "report":
        results_path = output_dir / "batch_results.json"
        report_path = output_dir / "experiment_report.md"
        if not results_path.exists():
            print(f"No results found at {results_path}")
            return 1
        generate_markdown_report(results_path, report_path)
        return 0

    if args.action == "status":
        controller.status()
        return 0

    if args.action == "analyze":
        controller.analyze()
        return 0

    if args.action == "clean":
        controller.clean(confirm=args.confirm)
        return 0

    # start / resume require a full config
    config = ExperimentConfig(
        output_dir=output_dir,
        seed_source=args.seed_source,
        mr=args.mr,
        tool=args.tool,
        tools=tuple(t.strip() for t in args.tools.split(",") if t.strip()),
        mr_ast_tool=args.mr_ast_tool,
        rng_seed_base=args.rng_seed_base,
        count=1,  # batch runs single seeds per experiment
        csmith_binary=args.csmith_binary,
        csmith_include_dir=args.csmith_include_dir,
        clang_binary=args.clang_binary,
        frama_binary=args.frama_binary,
        dg_binary=args.dg_binary,
        dg_clang_binary=args.dg_clang_binary,
        dg_llvm_dis_binary=args.dg_llvm_dis_binary,
        creal_python=args.creal_python,
        seed_dir=args.seed_dir,
    )

    if args.action == "start":
        controller.start(config, total=args.count)
    elif args.action == "resume":
        controller.resume(config)

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
