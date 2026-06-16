from pathlib import Path

import pytest

from common.criteria import CriteriaSpec, CriteriaSpecError, load_criteria_spec


def test_load_criteria_spec_accepts_value_kind(tmp_path: Path) -> None:
    criteria_path = tmp_path / "criteria.json"
    criteria_path.write_text(
        """
        {
          "criterion_kind": "value",
          "variables": ["g_1", "g_2"],
          "seed_id": "case_01",
          "program_point": "main:return"
        }
        """.strip(),
        encoding="utf-8",
    )

    spec = load_criteria_spec(criteria_path)

    assert spec == CriteriaSpec(
        criterion_kind="value",
        variables=("g_1", "g_2"),
        seed_id="case_01",
        program_point="main:return",
    )


def test_load_criteria_spec_rejects_empty_variable_list(tmp_path: Path) -> None:
    criteria_path = tmp_path / "criteria.json"
    criteria_path.write_text(
        """
        {
          "criterion_kind": "value",
          "variables": [],
          "seed_id": "case_01"
        }
        """.strip(),
        encoding="utf-8",
    )

    with pytest.raises(CriteriaSpecError, match="variables"):
        load_criteria_spec(criteria_path)


def test_load_criteria_spec_rejects_non_value_kind(tmp_path: Path) -> None:
    criteria_path = tmp_path / "criteria.json"
    criteria_path.write_text(
        """
        {
          "criterion_kind": "statement",
          "variables": ["g_1"],
          "seed_id": "case_01"
        }
        """.strip(),
        encoding="utf-8",
    )

    with pytest.raises(CriteriaSpecError, match="criterion_kind"):
        load_criteria_spec(criteria_path)
