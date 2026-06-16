"""Unit tests for seeds.models review status management and metadata integrity."""

from __future__ import annotations

import json
from pathlib import Path

import pytest

from seeds.models import SeedCase, read_review_status, update_review_status


# ---------------------------------------------------------------------------
# update_review_status
# ---------------------------------------------------------------------------


class TestUpdateReviewStatus:
    def _write_meta(self, case_dir: Path, *, review_status: str = "pending") -> None:
        meta = {
            "seed_id": "test_0001",
            "generator": "llm_online",
            "source_name": "generated.c",
            "source_meta": {
                "mr": "MR2",
                "compile_ok": True,
                "run_ok": True,
                "review_status": review_status,
            },
        }
        (case_dir / "seed_meta.json").write_text(
            json.dumps(meta, indent=2, sort_keys=True) + "\n",
            encoding="utf-8",
        )

    def test_approve_updates_status(self, tmp_path: Path) -> None:
        self._write_meta(tmp_path)
        update_review_status(tmp_path, status="approved", reviewer="alice")
        result = read_review_status(tmp_path)
        assert result == "approved"

    def test_reject_updates_status(self, tmp_path: Path) -> None:
        self._write_meta(tmp_path)
        update_review_status(tmp_path, status="rejected", reviewer="bob", notes="UB detected")
        result = read_review_status(tmp_path)
        assert result == "rejected"

    def test_reviewer_and_notes_persisted(self, tmp_path: Path) -> None:
        self._write_meta(tmp_path)
        update_review_status(tmp_path, status="approved", reviewer="carol", notes="LGTM")
        meta = json.loads((tmp_path / "seed_meta.json").read_text(encoding="utf-8"))
        assert meta["source_meta"]["reviewer"] == "carol"
        assert meta["source_meta"]["review_notes"] == "LGTM"

    def test_invalid_status_raises(self, tmp_path: Path) -> None:
        self._write_meta(tmp_path)
        with pytest.raises(ValueError, match="Invalid review status"):
            update_review_status(tmp_path, status="unknown")

    def test_missing_meta_file_raises(self, tmp_path: Path) -> None:
        with pytest.raises(FileNotFoundError):
            update_review_status(tmp_path, status="approved")

    def test_failed_status_allowed(self, tmp_path: Path) -> None:
        self._write_meta(tmp_path)
        update_review_status(tmp_path, status="failed")
        assert read_review_status(tmp_path) == "failed"

    def test_pending_status_allowed(self, tmp_path: Path) -> None:
        self._write_meta(tmp_path, review_status="approved")
        update_review_status(tmp_path, status="pending")
        assert read_review_status(tmp_path) == "pending"


# ---------------------------------------------------------------------------
# read_review_status
# ---------------------------------------------------------------------------


class TestReadReviewStatus:
    def test_reads_existing_status(self, tmp_path: Path) -> None:
        meta = {
            "seed_id": "x",
            "generator": "csmith",
            "source_name": "generated.c",
            "source_meta": {"review_status": "approved"},
        }
        (tmp_path / "seed_meta.json").write_text(
            json.dumps(meta, indent=2) + "\n", encoding="utf-8"
        )
        assert read_review_status(tmp_path) == "approved"

    def test_returns_none_when_no_meta_file(self, tmp_path: Path) -> None:
        assert read_review_status(tmp_path) is None

    def test_returns_none_when_no_review_status_key(self, tmp_path: Path) -> None:
        meta = {"seed_id": "x", "generator": "csmith", "source_meta": {}}
        (tmp_path / "seed_meta.json").write_text(
            json.dumps(meta, indent=2) + "\n", encoding="utf-8"
        )
        assert read_review_status(tmp_path) is None


# ---------------------------------------------------------------------------
# SeedCase metadata integrity (llm_online style)
# ---------------------------------------------------------------------------


class TestSeedCaseMetadataIntegrity:
    def test_llm_online_meta_has_required_fields(self, tmp_path: Path) -> None:
        case_dir = tmp_path / "llm_online_0001"
        case_dir.mkdir(parents=True)
        source_meta = {
            "mr": "MR2",
            "feature_focus": "pointer_array_data",
            "prompt_hash": "sha256:abc123",
            "compile_ok": True,
            "run_ok": True,
            "exit_code": 0,
            "feature_check": {
                "matched_topics": {"pointer_array_data": ["**"]},
                "topic_coverage": {"pointer_array_data": True, "c_language_features": False},
                "min_topics_satisfied": True,
                "detected_features": ["**"],
            },
            "review_status": "pending",
            "retry_count": 1,
        }
        case = SeedCase(
            seed_id="llm_online_0001",
            generator="llm_online",
            case_dir=case_dir,
            source_name="generated.c",
            source_meta=source_meta,
        )
        case.write_seed_meta()

        meta = json.loads(case.seed_meta_path.read_text(encoding="utf-8"))
        sm = meta["source_meta"]
        assert sm["mr"] == "MR2"
        assert sm["compile_ok"] is True
        assert sm["run_ok"] is True
        assert sm["feature_check"]["min_topics_satisfied"] is True
        assert sm["review_status"] == "pending"
        assert sm["retry_count"] == 1

    def test_csmith_meta_has_required_fields(self, tmp_path: Path) -> None:
        case_dir = tmp_path / "csmith_0001"
        case_dir.mkdir(parents=True)
        source_meta = {
            "binary": "/usr/bin/csmith",
            "extra_args": ["--no-bitfields"],
        }
        case = SeedCase(
            seed_id="csmith_0001",
            generator="csmith",
            case_dir=case_dir,
            source_name="generated.c",
            source_meta=source_meta,
        )
        case.write_seed_meta()

        meta = json.loads(case.seed_meta_path.read_text(encoding="utf-8"))
        assert meta["seed_id"] == "csmith_0001"
        assert meta["generator"] == "csmith"
