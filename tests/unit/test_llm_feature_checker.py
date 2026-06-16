from __future__ import annotations

import pytest

from seeds.llm_feature_checker import (
    TOPIC_PATTERNS,
    FeatureCheckResult,
    check_semantic_features,
    summarize_features,
)


# ---------------------------------------------------------------------------
# check_semantic_features
# ---------------------------------------------------------------------------


class TestCheckSemanticFeatures:
    def test_empty_source_fails_min_topics(self) -> None:
        result = check_semantic_features("")
        assert not result.min_topics_satisfied
        assert result.detected_features == []

    def test_simple_main_passes_criterion_export(self) -> None:
        source = "int main(void) { return 0; }\n"
        result = check_semantic_features(source, min_topics=1)
        assert result.topic_coverage.get("criterion_export") is True
        assert result.min_topics_satisfied

    def test_pointer_code_detected(self) -> None:
        source = """
        int foo(int **pp) {
            return **pp;
        }
        """
        result = check_semantic_features(source)
        assert result.topic_coverage.get("pointer_array_data") is True

    def test_switch_detected(self) -> None:
        source = """
        int bar(int x) {
            switch(x) { case 1: return 1; default: return 0; }
        }
        """
        result = check_semantic_features(source)
        assert result.topic_coverage.get("control_flow") is True

    def test_function_pointer_detected(self) -> None:
        source = """
        typedef int (*fp_t)(int);
        int call_fp(fp_t f, int x) { return f(x); }
        """
        result = check_semantic_features(source)
        assert result.topic_coverage.get("interprocedural") is True

    def test_volatile_detected(self) -> None:
        source = "volatile int x = 0; int main(void) { return x; }"
        result = check_semantic_features(source)
        assert result.topic_coverage.get("c_language_features") is True

    def test_min_topics_threshold(self) -> None:
        # Source with only return statement -> only criterion_export hit
        source = "int main(void) { return 0; }"
        result = check_semantic_features(source, min_topics=3)
        assert not result.min_topics_satisfied

    def test_min_topics_lowered_passes(self) -> None:
        source = "int main(void) { return 0; }"
        result = check_semantic_features(source, min_topics=1)
        assert result.min_topics_satisfied

    def test_required_topics_all_present(self) -> None:
        source = """
        #include <stdio.h>
        #include <setjmp.h>
        static jmp_buf buf;
        int main(void) {
            volatile int x = 0;
            if (setjmp(buf) == 0) { x = 1; longjmp(buf, 1); }
            printf("%d\\n", x);
            return x;
        }
        """
        result = check_semantic_features(
            source,
            required_topics=["control_flow", "c_language_features"],
            min_topics=2,
        )
        assert result.min_topics_satisfied

    def test_required_topics_missing_one_fails(self) -> None:
        source = "int main(void) { return 0; }"
        result = check_semantic_features(
            source,
            required_topics=["criterion_export", "control_flow"],
            min_topics=1,
        )
        assert not result.min_topics_satisfied

    def test_unknown_required_topic_raises(self) -> None:
        with pytest.raises(ValueError, match="Unknown topic keys"):
            check_semantic_features("", required_topics=["nonexistent"])

    def test_to_dict_round_trip(self) -> None:
        source = "int main(void) { return 0; }"
        result = check_semantic_features(source)
        d = result.to_dict()
        assert "matched_topics" in d
        assert "topic_coverage" in d
        assert "min_topics_satisfied" in d
        assert "detected_features" in d
        assert isinstance(d["matched_topics"], dict)
        assert isinstance(d["topic_coverage"], dict)


class TestCheckSemanticFeaturesPatterns:
    """Test specific patterns from each topic dimension."""

    def test_varargs_pattern(self) -> None:
        source = '#include <stdarg.h>\nint f(const char *fmt, ...) { va_list ap; va_start(ap, fmt); return 0; }'
        result = check_semantic_features(source)
        assert result.topic_coverage["c_language_features"]

    def test_memcpy_pattern(self) -> None:
        source = '#include <string.h>\nvoid f(char *d, const char *s) { memcpy(d, s, 10); }'
        result = check_semantic_features(source)
        assert result.topic_coverage["pointer_array_data"]

    def test_goto_pattern(self) -> None:
        source = "void f(void) { goto end; end: return; }"
        result = check_semantic_features(source)
        assert result.topic_coverage["control_flow"]

    def test_qsort_pattern(self) -> None:
        source = '#include <stdlib.h>\nvoid f(int *a) { qsort(a, 3, sizeof(int), 0); }'
        result = check_semantic_features(source)
        assert result.topic_coverage["interprocedural"]

    def test_assert_pattern(self) -> None:
        source = '#include <assert.h>\nvoid f(int x) { assert(x > 0); }'
        result = check_semantic_features(source)
        assert result.topic_coverage["criterion_export"]


# ---------------------------------------------------------------------------
# summarize_features
# ---------------------------------------------------------------------------


class TestSummarizeFeatures:
    def test_summary_contains_pass(self) -> None:
        source = "int main(void) { return 0; }"
        result = check_semantic_features(source, min_topics=1)
        summary = summarize_features(result)
        assert "PASS" in summary

    def test_summary_contains_fail(self) -> None:
        result = check_semantic_features("")
        summary = summarize_features(result)
        assert "FAIL" in summary

    def test_summary_shows_topic_counts(self) -> None:
        source = "int main(void) { return 0; }"
        result = check_semantic_features(source)
        summary = summarize_features(result)
        assert "criterion_export" in summary
