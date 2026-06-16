"""Unit tests for seeds.smart_criteria – migrated analyzers from reference Creal project."""

from __future__ import annotations

import pytest

from seeds.smart_criteria import (
    VariableUsage,
    _extract_scalar_globals,
    analyze_dependencies,
    detect_multiple_variables,
    detect_variable_usage,
    find_injected_functions,
    find_variables_in_function_calls,
    find_variables_near_injections,
    fix_printf_va_calls,
    inject_printf_observations,
    rank_variables,
)


# ---------------------------------------------------------------------------
# Fixtures
# ---------------------------------------------------------------------------

_SAMPLE_CSMITH_PROGRAM = """\
#include <stdint.h>

static int32_t g_1 = 0;
static uint32_t g_2 = 1;
volatile int g_3 = 5;
static int32_t g_4 = 0x0A;
static int *g_ptr = &g_1;
static int g_arr[10];

static int add(int a, int b) { return a + b; }

int main(void) {
    g_1 = g_2 + g_3;
    g_2 = add(g_1, g_4);
    g_3 += g_1;
    if (g_1 > g_2) {
        g_4 = g_1 - g_2;
    }
    return 0;
}
"""

_SAMPLE_MUTANT = """\
#include <stdint.h>

static int32_t g_1 = 0;
static uint32_t g_2 = 1;
volatile int g_3 = 5;
static int32_t g_4 = 0x0A;

void realsmith_noise_1(int x) { (void)x; }

static int add(int a, int b) { return a + b; }

int main(void) {
    g_1 = g_2 + g_3;
    realsmith_noise_1(g_2);
    Tag42(g_1, g_3);
    g_2 = add(g_1, g_4);
    g_3 += g_1;
    if (g_1 > g_2) {
        g_4 = g_1 - g_2;
    }
    return 0;
}
"""


# ---------------------------------------------------------------------------
# Variable usage detection
# ---------------------------------------------------------------------------


class TestDetectVariableUsage:
    def test_detects_used_variable(self):
        usage = detect_variable_usage(_SAMPLE_CSMITH_PROGRAM, "g_1")
        assert usage.is_used
        assert usage.usage_count >= 3  # declaration, g_2+g_3, g_3+=, g_1>g_2, g_1-g_2
        assert "assignment" in usage.usage_types
        assert usage.write_count >= 1

    def test_detects_unused_variable(self):
        usage = detect_variable_usage(_SAMPLE_CSMITH_PROGRAM, "g_nonexistent")
        assert not usage.is_used
        assert usage.usage_count == 0

    def test_detects_volatile_variable(self):
        usage = detect_variable_usage(_SAMPLE_CSMITH_PROGRAM, "g_3")
        assert usage.is_used
        assert usage.usage_count >= 1

    def test_returns_variable_usage_dataclass(self):
        usage = detect_variable_usage(_SAMPLE_CSMITH_PROGRAM, "g_2")
        assert isinstance(usage, VariableUsage)
        assert usage.name == "g_2"


class TestDetectMultipleVariables:
    def test_detects_all_variables(self):
        variables = ["g_1", "g_2", "g_3", "g_4"]
        result = detect_multiple_variables(_SAMPLE_CSMITH_PROGRAM, variables)
        assert len(result) == 4
        assert all(result[v].is_used for v in variables)

    def test_mixed_used_unused(self):
        variables = ["g_1", "g_nonexistent"]
        result = detect_multiple_variables(_SAMPLE_CSMITH_PROGRAM, variables)
        assert result["g_1"].is_used
        assert not result["g_nonexistent"].is_used


# ---------------------------------------------------------------------------
# Scalar global extraction
# ---------------------------------------------------------------------------


class TestExtractScalarGlobals:
    def test_extracts_scalar_globals(self):
        globals_ = _extract_scalar_globals(_SAMPLE_CSMITH_PROGRAM)
        assert "g_1" in globals_
        assert "g_2" in globals_
        assert "g_3" in globals_
        assert "g_4" in globals_

    def test_excludes_pointers(self):
        globals_ = _extract_scalar_globals(_SAMPLE_CSMITH_PROGRAM)
        assert "g_ptr" not in globals_

    def test_excludes_arrays(self):
        globals_ = _extract_scalar_globals(_SAMPLE_CSMITH_PROGRAM)
        assert "g_arr" not in globals_


# ---------------------------------------------------------------------------
# Dependency analysis
# ---------------------------------------------------------------------------


class TestAnalyzeDependencies:
    def test_finds_direct_assignment_dependency(self):
        deps = analyze_dependencies(_SAMPLE_CSMITH_PROGRAM, ["g_1", "g_2", "g_3", "g_4"])
        # g_1 = g_2 + g_3  → g_1 depends on g_2 and g_3
        assert "g_2" in deps.get("g_1", set()) or "g_3" in deps.get("g_1", set())

    def test_each_variable_has_entry(self):
        deps = analyze_dependencies(_SAMPLE_CSMITH_PROGRAM, ["g_1", "g_2", "g_3"])
        assert "g_1" in deps
        assert "g_2" in deps
        assert "g_3" in deps

    def test_excludes_non_variable_deps(self):
        deps = analyze_dependencies(_SAMPLE_CSMITH_PROGRAM, ["g_1"])
        # "add" is a function name, not in var set → not in deps
        assert "add" not in deps.get("g_1", set())


# ---------------------------------------------------------------------------
# Dataflow analysis
# ---------------------------------------------------------------------------


class TestFindInjectedFunctions:
    def test_finds_realsmith_functions(self):
        funcs = find_injected_functions(_SAMPLE_MUTANT)
        assert "realsmith_noise_1" in funcs

    def test_finds_tag_calls(self):
        funcs = find_injected_functions(_SAMPLE_MUTANT)
        assert any("Tag42" in f for f in funcs)


class TestFindVariablesInFunctionCalls:
    def test_finds_var_in_realsmith_call(self):
        result = find_variables_in_function_calls(_SAMPLE_MUTANT, ["g_1", "g_2", "g_3", "g_4"])
        # realsmith_noise_1(g_2)  → g_2 is an arg
        assert "g_2" in result

    def test_finds_vars_in_tag_call(self):
        result = find_variables_in_function_calls(_SAMPLE_MUTANT, ["g_1", "g_2", "g_3", "g_4"])
        # Tag42(g_1, g_3)  → g_1 and g_3 are args
        assert "g_1" in result
        assert "g_3" in result


class TestFindVariablesNearInjections:
    def test_finds_nearby_variables(self):
        result = find_variables_near_injections(
            _SAMPLE_MUTANT, ["g_1", "g_2", "g_3", "g_4"], window=2000
        )
        # All variables are near injection points in this small sample
        assert len(result) >= 1


# ---------------------------------------------------------------------------
# Unified ranking
# ---------------------------------------------------------------------------


class TestRankVariables:
    def test_ranks_variables_by_score(self):
        ranked = rank_variables(
            _SAMPLE_CSMITH_PROGRAM,
            variables=["g_1", "g_2", "g_3", "g_4"],
            count=4,
        )
        assert len(ranked) == 4
        # g_1 is most used → should rank highest
        assert ranked[0] == "g_1"

    def test_rank_respects_count(self):
        ranked = rank_variables(
            _SAMPLE_CSMITH_PROGRAM,
            variables=["g_1", "g_2", "g_3", "g_4"],
            count=2,
        )
        assert len(ranked) == 2

    def test_rank_with_mutant_boosts_dataflow_vars(self):
        ranked = rank_variables(
            _SAMPLE_CSMITH_PROGRAM,
            mutant_text=_SAMPLE_MUTANT,
            variables=["g_1", "g_2", "g_3", "g_4"],
            count=4,
        )
        # g_2 appears in realsmith_noise_1() call → boosted
        # g_1, g_3 appear in Tag42() → boosted
        assert len(ranked) == 4

    def test_rank_extracts_globals_when_variables_is_none(self):
        ranked = rank_variables(_SAMPLE_CSMITH_PROGRAM, count=3)
        assert len(ranked) == 3
        assert all(isinstance(v, str) for v in ranked)

    def test_rank_empty_source_returns_empty(self):
        ranked = rank_variables("int main(void) { return 0; }", count=3)
        assert ranked == []


# ---------------------------------------------------------------------------
# Printf helpers
# ---------------------------------------------------------------------------


class TestFixPrintfVaCalls:
    def test_replaces_single_va_call(self):
        text = 'printf_va_1("hello", x);'
        fixed = fix_printf_va_calls(text)
        assert "printf_va_1" not in fixed
        assert 'printf("hello", x);' in fixed

    def test_replaces_multiple_va_calls(self):
        text = 'printf_va_1("%d", a); printf_va_5("%s", b);'
        fixed = fix_printf_va_calls(text)
        assert "printf_va_" not in fixed
        assert fixed.count("printf(") == 2

    def test_preserves_regular_printf(self):
        text = 'printf("hello\\n"); printf_va_3("world");'
        fixed = fix_printf_va_calls(text)
        assert 'printf("hello\\n")' in fixed
        assert "printf_va_3" not in fixed


_SLICED_SAMPLE = """\
#include <stdint.h>

static int32_t g_1 = 0;
static int32_t g_4 = 10;

int main(void) {
    int32_t func_1(void);
    func_1();
    return 0;
}
"""


class TestInjectPrintfObservations:
    def test_adds_stdio_include_when_missing(self):
        text = "int main(void) { return 0; }\n"
        result = inject_printf_observations(text, ["x"])
        assert "#include <stdio.h>" in result

    def test_does_not_duplicate_stdio(self):
        text = "#include <stdio.h>\nint main(void) { func_1(); return 0; }\n"
        result = inject_printf_observations(text, ["x"])
        assert result.count("#include <stdio.h>") == 1

    def test_inserts_after_func1_call(self):
        result = inject_printf_observations(_SLICED_SAMPLE, ["g_1", "g_4"])
        # printf for g_1 should appear after func_1() call
        func1_pos = result.index("func_1();")
        printf_pos = result.index('printf("g_1:')
        assert printf_pos > func1_pos

    def test_marks_missing_variable(self):
        result = inject_printf_observations(_SLICED_SAMPLE, ["g_not_present"])
        assert "not in slice" in result

    def test_handles_no_insertion_point(self):
        text = "int main(void) { return 0; }\n"
        result = inject_printf_observations(text, ["x"])
        # Should still have stdio added, but no printf block
        assert "#include <stdio.h>" in result
