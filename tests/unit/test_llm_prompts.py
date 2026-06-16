from __future__ import annotations

import hashlib
from pathlib import Path

import pytest

from seeds.llm_prompts import (
    BASE_PROMPT_TEMPLATE,
    MR_SUPPLEMENT_CONSTRAINTS,
    TOPIC_DIMENSIONS,
    TOPIC_KEYS,
    PromptTemplate,
    build_prompt,
    compute_prompt_hash,
    get_topic_features,
    get_topic_label,
    get_topic_target_analysis,
    render_prompt_file,
)


# ---------------------------------------------------------------------------
# PromptTemplate
# ---------------------------------------------------------------------------


class TestPromptTemplate:
    def test_render_with_all_placeholders(self) -> None:
        tmpl = PromptTemplate(
            template_text="Hello <name>, your <item> is ready.",
            placeholders=("name", "item"),
        )
        result = tmpl.render(name="Alice", item="order")
        assert result == "Hello Alice, your order is ready."

    def test_render_missing_placeholder_raises(self) -> None:
        tmpl = PromptTemplate(
            template_text="Hello <name>",
            placeholders=("name", "extra"),
        )
        with pytest.raises(ValueError, match="Missing placeholders"):
            tmpl.render(name="Alice")

    def test_render_no_placeholders(self) -> None:
        tmpl = PromptTemplate(template_text="No placeholders here.", placeholders=())
        result = tmpl.render()
        assert result == "No placeholders here."


# ---------------------------------------------------------------------------
# Constants
# ---------------------------------------------------------------------------


class TestConstants:
    def test_base_prompt_has_placeholders(self) -> None:
        assert "<feature_focus>" in BASE_PROMPT_TEMPLATE.template_text
        assert "<criteria>" in BASE_PROMPT_TEMPLATE.template_text
        assert "<dependency_focus>" in BASE_PROMPT_TEMPLATE.template_text
        assert BASE_PROMPT_TEMPLATE.placeholders == (
            "feature_focus",
            "criteria",
            "dependency_focus",
        )

    def test_mr_supplement_constraints_has_four_mrs(self) -> None:
        assert set(MR_SUPPLEMENT_CONSTRAINTS.keys()) == {"MR1", "MR2", "MR3", "MR4"}

    def test_topic_dimensions_has_five_keys(self) -> None:
        assert len(TOPIC_DIMENSIONS) == 5
        expected = {
            "c_language_features",
            "pointer_array_data",
            "control_flow",
            "interprocedural",
            "criterion_export",
        }
        assert set(TOPIC_DIMENSIONS.keys()) == expected

    def test_topic_keys_matches_dimensions(self) -> None:
        assert TOPIC_KEYS == tuple(TOPIC_DIMENSIONS.keys())

    def test_each_topic_has_label_features_target(self) -> None:
        for key, dim in TOPIC_DIMENSIONS.items():
            assert "label" in dim, f"Topic {key} missing 'label'"
            assert "features" in dim, f"Topic {key} missing 'features'"
            assert "target_analysis" in dim, f"Topic {key} missing 'target_analysis'"
            assert dim["label"], f"Topic {key} has empty label"
            assert dim["features"], f"Topic {key} has empty features"


# ---------------------------------------------------------------------------
# build_prompt
# ---------------------------------------------------------------------------


class TestBuildPrompt:
    def test_mr2_prompt_contains_base_and_supplement(self) -> None:
        prompt = build_prompt(mr="MR2", feature_focus="指针", criteria="keep", dependency_focus="局部变量链")
        assert "指针" in prompt
        assert "keep" in prompt
        assert "局部变量链" in prompt
        assert "冗余赋值" in prompt  # MR2 supplement keyword

    def test_mr3_prompt_contains_dead_path_keywords(self) -> None:
        prompt = build_prompt(mr="MR3", feature_focus="控制流", criteria="result", dependency_focus="不可达路径")
        assert "不可达路径" in prompt
        assert "额外分支" in prompt  # MR3 supplement keyword

    def test_mr1_prompt_contains_semantic_preservation(self) -> None:
        prompt = build_prompt(mr="MR1")
        assert "语义边界明确" in prompt

    def test_mr4_prompt_contains_multi_criterion(self) -> None:
        prompt = build_prompt(mr="MR4")
        assert "多准则" in prompt or "多个单准则" in prompt

    def test_unknown_mr_raises(self) -> None:
        with pytest.raises(ValueError, match="Unknown MR"):
            build_prompt(mr="MR5")

    def test_default_feature_focus_used_when_empty(self) -> None:
        prompt = build_prompt(mr="MR2", feature_focus="")
        assert "无关数据流" in prompt

    def test_default_dependency_focus_used_when_empty(self) -> None:
        prompt = build_prompt(mr="MR3", dependency_focus="")
        assert "不可达路径" in prompt

    def test_prompt_includes_topic_hint(self) -> None:
        prompt = build_prompt(mr="MR2")
        assert "相关主题维度" in prompt

    def test_prompt_ends_with_topic_hint_coverage_line(self) -> None:
        prompt = build_prompt(mr="MR1")
        assert "覆盖上述至少一个维度" in prompt


# ---------------------------------------------------------------------------
# render_prompt_file & compute_prompt_hash
# ---------------------------------------------------------------------------


class TestRenderPromptFile:
    def test_writes_prompt_and_hash(self, tmp_path: Path) -> None:
        prompt = "Test prompt content"
        prompt_file = tmp_path / "prompt.txt"
        render_prompt_file(prompt, prompt_file)

        assert prompt_file.read_text(encoding="utf-8") == prompt
        hash_file = tmp_path / "prompt.sha256"
        expected_hash = hashlib.sha256(prompt.encode("utf-8")).hexdigest()
        assert hash_file.read_text(encoding="utf-8") == f"sha256:{expected_hash}\n"

    def test_creates_parent_dirs(self, tmp_path: Path) -> None:
        prompt_file = tmp_path / "subdir" / "deep" / "prompt.txt"
        render_prompt_file("content", prompt_file)
        assert prompt_file.exists()

    def test_compute_prompt_hash_matches_file(self, tmp_path: Path) -> None:
        prompt = "Another test prompt"
        hash_value = compute_prompt_hash(prompt)
        prompt_file = tmp_path / "p.txt"
        render_prompt_file(prompt, prompt_file)
        hash_file = tmp_path / "p.sha256"
        saved = hash_file.read_text(encoding="utf-8").strip()
        assert hash_value == saved


# ---------------------------------------------------------------------------
# Topic dimension queries
# ---------------------------------------------------------------------------


class TestTopicQueries:
    def test_get_topic_label(self) -> None:
        label = get_topic_label("pointer_array_data")
        assert "指针" in label

    def test_get_topic_features(self) -> None:
        features = get_topic_features("control_flow")
        assert "switch" in features

    def test_get_topic_target_analysis(self) -> None:
        analysis = get_topic_target_analysis("interprocedural")
        assert "调用图" in analysis or "过程间" in analysis

    def test_get_topic_label_unknown_key(self) -> None:
        assert get_topic_label("nonexistent") == "nonexistent"

    def test_get_topic_features_unknown_key(self) -> None:
        assert get_topic_features("nonexistent") == ""

    def test_get_topic_target_analysis_unknown_key(self) -> None:
        assert get_topic_target_analysis("nonexistent") == ""
