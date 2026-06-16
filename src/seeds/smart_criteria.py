"""Enhanced slicing-criteria selection for Creal/Csmith seed programs.

Provides three complementary analysis strategies for ranking global variables
by their suitability as slicing criteria, migrated from the reference
Creal + Frama-C batch experiment system.

Usage::

    from seeds.smart_criteria import rank_variables

    ranked = rank_variables(source_text, mutant_text=None, count=5)
    # Returns the top *count* variable names.
"""

from __future__ import annotations

import re
from dataclasses import dataclass, field

# ---------------------------------------------------------------------------
# Variable usage detection (migrated from variable_usage_detector.py)
# ---------------------------------------------------------------------------

_USAGE_PATTERNS: dict[str, str] = {
    "direct_use":       r"\b{var}\b",
    "array_access":     r"\b{var}\s*\[",
    "pointer_deref":    r"\*\s*{var}\b",
    "address_of":       r"&\s*{var}\b",
    "struct_member":    r"\b{var}\s*\.",
    "function_param":   r"\(\s*[^)]*\b{var}\b[^)]*\)",
    "assignment":       r"\b{var}\s*=(?!=)",
    "compound_assign":  r"\b{var}\s*(?:\+=|-=|\*=|/=|%=|<<=|>>=|&=|\|=|\^=)",
    "prefix_update":    r"(?:\+\+|--)\s*{var}\b",
    "postfix_update":   r"\b{var}\s*(?:\+\+|--)",
    "comparison":       r"\b{var}\s*[=!<>]=",
}


@dataclass(frozen=True, slots=True)
class VariableUsage:
    """Detailed usage report for a single variable."""

    name: str
    is_used: bool = False
    usage_count: int = 0
    usage_types: list[str] = field(default_factory=list)
    write_count: int = 0
    read_count: int = 0


def detect_variable_usage(source_text: str, variable_name: str) -> VariableUsage:
    """Analyse how *variable_name* is used in *source_text*."""
    usage_types: list[str] = []
    total_count = 0
    write_count = 0

    for usage_type, pattern_template in _USAGE_PATTERNS.items():
        pattern = pattern_template.format(var=re.escape(variable_name))
        count = len(re.findall(pattern, source_text))
        if count > 0:
            usage_types.append(usage_type)
            total_count += count
            if usage_type in {"assignment", "compound_assign", "prefix_update", "postfix_update"}:
                write_count += count

    return VariableUsage(
        name=variable_name,
        is_used=total_count > 0,
        usage_count=total_count,
        usage_types=usage_types,
        write_count=write_count,
        read_count=total_count - write_count,
    )


def detect_multiple_variables(source_text: str, variable_names: list[str]) -> dict[str, VariableUsage]:
    """Detect usage for every variable in *variable_names*."""
    return {name: detect_variable_usage(source_text, name) for name in variable_names}


# ---------------------------------------------------------------------------
# Dependency analysis (migrated from dependency_analyzer.py)
# ---------------------------------------------------------------------------

_DEPENDENCY_PATTERNS: dict[str, str] = {
    "direct_assignment": r"(\w+)\s*=\s*(\w+)",
    "arithmetic":        r"(\w+)\s*[+\-*/%]\s*(\w+)",
    "comparison":        r"(\w+)\s*[=!<>]=?\s*(\w+)",
    "logical":           r"(\w+)\s*[&|^]\s*(\w+)",
    "function_call":     r"(\w+)\s*\([^)]*(\w+)[^)]*\)",
    "array_access":      r"(\w+)\s*\[\s*(\w+)\s*\]",
    "struct_access":     r"(\w+)\.(\w+)",
}


def analyze_dependencies(source_text: str, variables: list[str]) -> dict[str, set[str]]:
    """Build a dependency graph: *{variable: {dependent_variables}}*."""
    var_set = frozenset(variables)
    dependencies: dict[str, set[str]] = {v: set() for v in variables}

    for _pattern_name, pattern in _DEPENDENCY_PATTERNS.items():
        for match in re.finditer(pattern, source_text):
            groups = match.groups()
            if len(groups) >= 2:
                v1, v2 = groups[0], groups[1]
                if v1 in var_set and v2 in var_set and v1 != v2:
                    dependencies[v1].add(v2)

    return dependencies


def _has_numeric_value(value: object) -> bool:
    """Check whether *value* looks like a number."""
    if value in (None, "", "未在切片中定义", "未找到"):
        return False
    try:
        float(str(value))
        return True
    except (ValueError, TypeError):
        return False


# ---------------------------------------------------------------------------
# Dataflow analysis (migrated from dataflow_analyzer.py)
# ---------------------------------------------------------------------------

_CREAL_FUNCTION_PATTERNS = (
    r"realsmith_\w+",
    r"Tag\d+\(",
)


def find_injected_functions(source_text: str) -> list[str]:
    """Find Creal-injected function names/calls in *source_text*."""
    functions: list[str] = []
    for pat in _CREAL_FUNCTION_PATTERNS:
        functions.extend(re.findall(pat, source_text))
    return list(dict.fromkeys(functions))  # dedup, preserve order


def find_variables_in_function_calls(source_text: str, variables: list[str]) -> set[str]:
    """Return the subset of *variables* that appear as function arguments."""
    found: set[str] = set()
    for var in variables:
        if re.search(rf"{re.escape(var)}\s*[,)]", source_text):
            found.add(var)
        if re.search(rf"{re.escape(var)}\s*[+\-*/%&|^]", source_text):
            found.add(var)
    return found


def find_variables_near_injections(
    mutant_text: str, variables: list[str], *, window: int = 1000
) -> set[str]:
    """Return variables whose names appear within *window* chars of an injection site."""
    injection_positions: list[int] = []
    for pat in _CREAL_FUNCTION_PATTERNS:
        for m in re.finditer(pat, mutant_text):
            injection_positions.append(m.start())

    nearby: set[str] = set()
    for pos in injection_positions:
        start = max(0, pos - window)
        end = min(len(mutant_text), pos + window)
        context = mutant_text[start:end]
        for var in variables:
            if re.search(rf"\b{re.escape(var)}\b", context):
                nearby.add(var)
    return nearby


# ---------------------------------------------------------------------------
# Combined scoring (unified ranking)
# ---------------------------------------------------------------------------


def rank_variables(
    source_text: str,
    *,
    mutant_text: str | None = None,
    variables: list[str] | None = None,
    count: int = 5,
) -> list[str]:
    """Rank *variables* by composite score and return the top *count*.

    When *variables* is ``None``, globals are extracted from *source_text*
    via :func:`_extract_scalar_globals`.

    Scoring weights (modelled after the reference system):

    - function-call usage:   ×3
    - source/mutant diff:    ×2
    - proximity to injection: ×1
    - dependency degree:     ×0.6
    - usage count in main:   ×0.4
    """
    if variables is None:
        variables = _extract_scalar_globals(source_text)

    if not variables:
        return []

    usages = detect_multiple_variables(source_text, variables)
    deps = analyze_dependencies(source_text, variables)

    # Per-variable composite score
    scores: dict[str, float] = {}
    for var in variables:
        score = 0.0

        # Usage count × write boost
        usage = usages[var]
        score += usage.usage_count * 0.5
        score += usage.write_count * 10.0  # writes are strong signal

        # Dependency degree
        outgoing = len(deps.get(var, set()))
        incoming = sum(1 for other in variables if var in deps.get(other, set()))
        score += (outgoing + incoming) * 0.6

        # g_ prefix bonus (Csmith convention)
        if var.startswith("g_"):
            score += 50.0

        scores[var] = score

    # Dataflow-aware boosts (only when mutant is available)
    if mutant_text is not None:
        func_call_vars = find_variables_in_function_calls(mutant_text, variables)
        injection_nearby = find_variables_near_injections(mutant_text, variables)

        # Source vs mutant usage count delta
        mutant_usages = detect_multiple_variables(mutant_text, variables)
        for var in variables:
            if var in func_call_vars:
                scores[var] += 30.0
            if var in injection_nearby:
                scores[var] += 10.0
            source_count = usages[var].usage_count
            mutant_count = mutant_usages[var].usage_count
            if source_count != mutant_count:
                scores[var] += 20.0

    ranked = sorted(scores.items(), key=lambda kv: (-kv[1], kv[0]))
    return [var for var, _ in ranked[:count]]


# ---------------------------------------------------------------------------
# Scalar global extraction helpers
# ---------------------------------------------------------------------------

_SCALAR_TYPES = frozenset({
    "unsigned", "signed", "int", "char", "float", "double", "_Bool",
    "long", "short", "void",
    "uint8_t", "uint16_t", "uint32_t", "uint64_t",
    "int8_t", "int16_t", "int32_t", "int64_t",
    "size_t", "ssize_t", "ptrdiff_t", "intptr_t", "uintptr_t",
})
_QUALIFIER_TOKENS = frozenset({"static", "const", "volatile", "register"})
_IDENTIFIER_RE = re.compile(r"^[A-Za-z_]\w*$")


def _extract_scalar_globals(source_text: str) -> list[str]:
    """Extract scalar global variable names from C source text.

    Filters out arrays, pointers, function declarations, reserved symbols,
    and variables declared inside function bodies.
    """
    candidates: list[str] = []
    seen: set[str] = set()

    depth = 0

    for line in source_text.splitlines():
        stripped = line.strip()
        if not stripped or stripped.startswith("#"):
            continue

        # Track brace depth to skip function-body locals
        depth += stripped.count("{") - stripped.count("}")

        if depth > 0:
            continue
        if "(" in stripped:
            continue

        # Must start with storage class or type
        tokens = stripped.replace(";", "").split("=", 1)[0].split()
        if len(tokens) < 2:
            continue

        # Filter out pointer / array declarations
        if "*" in stripped or "[" in stripped:
            continue

        name = tokens[-1]
        type_tokens = [t for t in tokens[:-1] if t not in _QUALIFIER_TOKENS]

        if not _IDENTIFIER_RE.match(name):
            continue
        if not type_tokens:
            continue
        if not any(t in _SCALAR_TYPES for t in type_tokens):
            continue
        if name.startswith("__"):
            continue
        if name in seen:
            continue

        seen.add(name)
        candidates.append(name)

    return candidates


# ---------------------------------------------------------------------------
# Printf injection helpers (migrated from batch_experiment.py)
# ---------------------------------------------------------------------------

_SIZED_FORMAT_MAP: dict[str, str] = {
    "uint64_t":  '"%lu"',
    "uint32_t":  '"%u"',
    "int64_t":   '"%ld"',
    "int32_t":   '"%d"',
    "uint16_t":  '"%u"',
    "uint8_t":   '"%u"',
    "int16_t":   '"%d"',
    "int8_t":    '"%d"',
    "uint8_t":   '"%u"',
    "size_t":    '"%zu"',
    "float":     '"%.9g"',
    "double":    '"%.17g"',
    "long long": '"%lld"',
}


def _infer_printf_format(source_text: str, variable_name: str) -> str:
    """Guess the correct printf format specifier for *variable_name*."""
    for line in source_text.splitlines():
        stripped = line.strip()
        if re.search(rf"\b{re.escape(variable_name)}\b", stripped) and not stripped.startswith("#"):
            for ctype, fmt in _SIZED_FORMAT_MAP.items():
                if ctype in stripped:
                    return fmt
    return '"%d"'


_FIX_VA_PRINTF_RE = re.compile(r"printf_va_\d+")


def fix_printf_va_calls(sliced_text: str) -> str:
    """Replace Frama-C ``printf_va_N`` calls with standard ``printf``."""
    return _FIX_VA_PRINTF_RE.sub("printf", sliced_text)


def inject_printf_observations(
    sliced_text: str,
    variables: list[str],
    *,
    source_text: str = "",
    include_stdio: bool = True,
) -> str:
    """Insert ``printf`` statements after the first function call in *sliced_text*.

    Returns the modified C source, or the original text if no suitable insertion
    point is found.
    """
    text = fix_printf_va_calls(sliced_text)

    if include_stdio and "#include <stdio.h>" not in text:
        text = "#include <stdio.h>\n" + text

    insertion_point = _find_insertion_point(text)
    if insertion_point is None:
        return text

    printf_lines: list[str] = []
    for var in variables:
        if var not in text:
            printf_lines.append(f'    printf("{var}: not in slice\\n");')
            continue
        fmt = _infer_printf_format(source_text or text, var)
        printf_lines.append(f'    printf("{var}: {fmt}\\n", {var});')

    printf_block = "\n".join(printf_lines)
    return text[:insertion_point] + "\n" + printf_block + "\n" + text[insertion_point:]


def _find_insertion_point(text: str) -> int | None:
    """Find the byte position after the first function call in ``main()``."""
    # Prefer func_1() call (Csmith convention)
    for pattern in (r"func_1\s*\(\s*\)\s*;", r"func_1_slice_\d+\s*\(\s*\)\s*;"):
        m = re.search(pattern, text)
        if m:
            return m.end()

    # Fallback: first function call after main
    main_match = re.search(r"int\s+main\s*\([^)]*\)\s*\{", text)
    if main_match is None:
        return None
    after_main = text[main_match.end():]
    func_call = re.search(r"\w+\s*\([^)]*\)\s*;", after_main)
    if func_call:
        return main_match.end() + func_call.end()

    # Last resort: right after main's opening brace
    return main_match.end()
