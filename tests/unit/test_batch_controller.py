"""Unit tests for pipeline.batch_controller."""

from __future__ import annotations

import json
from pathlib import Path

import pytest

from pipeline.batch_controller import (
    BatchController,
    _extract_run_summary,
    _pct,
    generate_markdown_report,
)


class TestPct:
    def test_zero_denominator(self):
        assert _pct(5, 0) == "0.0%"

    def test_normal_case(self):
        assert "50.0%" in _pct(1, 2) or _pct(1, 2) == "50.0%"

    def test_hundred_percent(self):
        assert _pct(10, 10) == "100.0%"


class TestExtractRunSummary:
    def test_counts_violations_passes_errors(self):
        manifest = {
            "mr": "MR2",
            "seed_source": "csmith",
            "case_count": 1,
            "tools": ["frama", "dg"],
            "cases": [
                {
                    "oracle_runs": {
                        "frama": {"status": "VIOLATION"},
                        "dg": {"status": "PASS"},
                    }
                }
            ],
        }
        summary = _extract_run_summary(manifest)
        assert summary["violations"] == 1
        assert summary["passes"] == 1
        assert summary["errors"] == 0

    def test_counts_errors(self):
        manifest = {
            "mr": "MR2",
            "seed_source": "csmith",
            "case_count": 1,
            "tools": ["frama"],
            "cases": [
                {
                    "oracle_runs": {
                        "frama": {"status": "ERROR"},
                    }
                }
            ],
        }
        summary = _extract_run_summary(manifest)
        assert summary["errors"] == 1
        assert summary["violations"] == 0

    def test_handles_missing_oracle_runs(self):
        manifest = {
            "mr": "MR4",
            "seed_source": "csmith",
            "case_count": 1,
            "tools": ["frama"],
            "cases": [{}],
        }
        summary = _extract_run_summary(manifest)
        assert summary["violations"] == 0


class TestGenerateMarkdownReport:
    def test_generates_report_with_summary(self, tmp_path: Path):
        results = {
            "runs": [
                {
                    "mr": "MR2",
                    "seed_source": "csmith",
                    "case_count": 1,
                    "violations": 1,
                    "passes": 0,
                    "errors": 0,
                    "cases": [
                        {
                            "oracle_runs": {
                                "frama": {"status": "VIOLATION"},
                            }
                        }
                    ],
                }
            ],
            "summary": {
                "total": 1,
                "completed": 1,
                "violations": 1,
                "passes": 0,
                "errors": 0,
            },
        }
        results_path = tmp_path / "batch_results.json"
        results_path.write_text(json.dumps(results))

        report = generate_markdown_report(results_path)
        assert "Metamorphic Testing Experiment Report" in report
        assert "VIOLATION" in report or "Violations" in report
        assert "100.0%" in report or "1 " in report

    def test_generates_report_to_file(self, tmp_path: Path):
        results = {
            "runs": [],
            "summary": {"total": 0, "completed": 0, "violations": 0, "passes": 0, "errors": 0},
        }
        results_path = tmp_path / "batch_results.json"
        results_path.write_text(json.dumps(results))
        report_path = tmp_path / "report.md"

        report = generate_markdown_report(results_path, report_path)
        assert report_path.exists()
        assert "Metamorphic Testing Experiment Report" in report_path.read_text()


class TestBatchController:
    def test_status_no_saved_state(self, tmp_path: Path, capsys):
        controller = BatchController(tmp_path)
        controller.status()
        captured = capsys.readouterr()
        assert "No batch" in captured.out

    def test_clean_without_confirm_cancels(self, tmp_path: Path, monkeypatch, capsys):
        # Simulate user typing "n"
        monkeypatch.setattr("builtins.input", lambda _: "n")
        controller = BatchController(tmp_path)
        controller.clean(confirm=False)
        captured = capsys.readouterr()
        assert "Cancelled" in captured.out
