from __future__ import annotations

import re
from dataclasses import dataclass
from pathlib import Path


NOT_FOUND = "not_found"
DG_OBSERVER_FUNCTION = "mr_observe_value"


@dataclass(frozen=True, slots=True)
class ObservationInstrumentation:
    output_path: Path
    inserted_line: int


def extract_observed_values(
    output: str,
    *,
    variables: tuple[str, ...] | None = None,
) -> dict[str, str]:
    selected = None if variables is None else set(variables)
    values: dict[str, str] = {}
    for line in output.splitlines():
        if ":" not in line:
            continue
        name, raw_value = line.split(":", 1)
        name = name.strip()
        if selected is not None:
            if name not in selected:
                continue
        elif not name.startswith("g_"):
            continue
        values[name] = raw_value.strip()
    return values


def instrument_program_for_observation(
    *,
    source_path: Path,
    output_path: Path,
    variables: tuple[str, ...],
    single_line: bool = False,
) -> ObservationInstrumentation:
    source = source_path.read_text(encoding="utf-8-sig")
    instrumented = _ensure_stdio_include(source)
    insertion_offset = _find_main_insertion_offset(instrumented)
    inserted_line = instrumented[:insertion_offset].count("\n") + 1
    if single_line:
        print_block = "".join(
            _build_printf_line(instrumented, variable, compact=True) for variable in variables
        )
    else:
        print_block = "\n".join(_build_printf_line(instrumented, variable) for variable in variables)
    instrumented = (
        instrumented[:insertion_offset]
        + print_block
        + ("\n" if single_line else "\n")
        + instrumented[insertion_offset:]
    )
    output_path.write_text(instrumented, encoding="utf-8")
    return ObservationInstrumentation(output_path=output_path, inserted_line=inserted_line)


def instrument_program_for_dg_observation(
    *,
    source_path: Path,
    output_path: Path,
    variables: tuple[str, ...],
) -> ObservationInstrumentation:
    source = source_path.read_text(encoding="utf-8-sig")
    instrumented = _ensure_stdio_include(source)
    if re.search(rf"\b{re.escape(DG_OBSERVER_FUNCTION)}\s*\(", instrumented) is None:
        helper_block = (
            f"static void {DG_OBSERVER_FUNCTION}(const char *name, long double value) {{\n"
            '    printf("%s: %.17Lg\\n", name, value);\n'
            "}\n\n"
        )
        helper_offset = _find_post_include_offset(instrumented)
        instrumented = (
            instrumented[:helper_offset]
            + helper_block
            + instrumented[helper_offset:]
        )
    insertion_offset = _find_main_insertion_offset(instrumented)
    inserted_line = instrumented[:insertion_offset].count("\n") + 1
    observe_block = "\n".join(
        f'    {DG_OBSERVER_FUNCTION}("{variable}", (long double)({variable}));'
        for variable in variables
    )
    instrumented = (
        instrumented[:insertion_offset]
        + observe_block
        + "\n"
        + instrumented[insertion_offset:]
    )
    output_path.write_text(instrumented, encoding="utf-8")
    return ObservationInstrumentation(output_path=output_path, inserted_line=inserted_line)


def build_value_comparisons(
    *,
    variables: tuple[str, ...],
    original_values: dict[str, str],
    mutant_values: dict[str, str],
    original_slice_values: dict[str, str],
    mutant_slice_values: dict[str, str],
) -> dict[str, dict[str, object]]:
    comparisons: dict[str, dict[str, object]] = {}
    for variable in variables:
        values = {
            "original": original_values.get(variable, NOT_FOUND),
            "mutant": mutant_values.get(variable, NOT_FOUND),
            "original_slice": original_slice_values.get(variable, NOT_FOUND),
            "mutant_slice": mutant_slice_values.get(variable, NOT_FOUND),
        }
        numeric_values = [value for value in values.values() if _is_numeric(value)]
        comparisons[variable] = {
            **values,
            "different": len(set(numeric_values)) > 1 if len(numeric_values) >= 2 else False,
            "missing": [key for key, value in values.items() if value == NOT_FOUND],
        }
    return comparisons


def _build_printf_line(source: str, variable: str, *, compact: bool = False) -> str:
    declared_type = _detect_declared_type(source, variable)
    prefix = "" if compact else "    "
    suffix = "" if compact else ""
    if declared_type is None:
        return f'{prefix}printf("{variable}: {NOT_FOUND}\\n");{suffix}'
    if declared_type in {"float", "double"}:
        return f'{prefix}printf("{variable}: %f\\n", (double){variable});{suffix}'
    if declared_type.startswith("u") or "unsigned" in declared_type:
        return f'{prefix}printf("{variable}: %lu\\n", (unsigned long){variable});{suffix}'
    return f'{prefix}printf("{variable}: %d\\n", {variable});{suffix}'


def _detect_declared_type(source: str, variable: str) -> str | None:
    typedef_types = r"(?:[A-Za-z_][A-Za-z0-9_]*_t)"
    base_types = r"(?:int|char|float|double|bool|long\s+long|long\s+int|short\s+int)"
    qualifiers = r"(?:(?:static|const|volatile|signed|unsigned|short|long)\s+)*"
    pattern = re.compile(
        rf"\b(?P<qualifiers>{qualifiers})(?P<base>{base_types}|{typedef_types})\s+{re.escape(variable)}\s*(?:=|\[|;|\*)"
    )
    match = pattern.search(source)
    if match is None:
        return None
    qualifiers = " ".join(part for part in match.group("qualifiers").split() if part)
    base = match.group("base").strip()
    return " ".join(part for part in (qualifiers, base) if part)


def _ensure_stdio_include(source: str) -> str:
    if "#include <stdio.h>" in source:
        return source
    return "#include <stdio.h>\n" + source


def _find_post_include_offset(source: str) -> int:
    last_include_end = 0
    for match in re.finditer(r"(?m)^#include[^\n]*\n?", source):
        last_include_end = match.end()
    return last_include_end


def _find_main_insertion_offset(source: str) -> int:
    main_match = re.search(r"\bint\s+main\s*\([^)]*\)\s*\{", source)
    if main_match is None:
        raise ValueError("main function not found for observation instrumentation")
    brace_start = main_match.end() - 1
    brace_end = _find_matching_brace(source, brace_start)
    main_body = source[brace_start + 1 : brace_end]
    return_match = list(re.finditer(r"(?m)^\s*return\b", main_body))
    if return_match:
        return brace_start + 1 + return_match[-1].start()
    return brace_end


def _find_matching_brace(source: str, brace_start: int) -> int:
    depth = 0
    in_string = False
    in_char = False
    in_line_comment = False
    in_block_comment = False
    escape = False
    for index in range(brace_start, len(source)):
        char = source[index]
        nxt = source[index + 1] if index + 1 < len(source) else ""
        if in_line_comment:
            if char == "\n":
                in_line_comment = False
            continue
        if in_block_comment:
            if char == "*" and nxt == "/":
                in_block_comment = False
            continue
        if in_string:
            if char == '"' and not escape:
                in_string = False
            escape = char == "\\" and not escape
            continue
        if in_char:
            if char == "'" and not escape:
                in_char = False
            escape = char == "\\" and not escape
            continue
        if char == "/" and nxt == "/":
            in_line_comment = True
            continue
        if char == "/" and nxt == "*":
            in_block_comment = True
            continue
        if char == '"':
            in_string = True
            escape = False
            continue
        if char == "'":
            in_char = True
            escape = False
            continue
        if char == "{":
            depth += 1
        elif char == "}":
            depth -= 1
            if depth == 0:
                return index
    raise ValueError("main function closing brace not found")


def _is_numeric(value: str) -> bool:
    try:
        float(value)
    except (TypeError, ValueError):
        return False
    return True
