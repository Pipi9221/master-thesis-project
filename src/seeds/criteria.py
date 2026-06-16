from __future__ import annotations

import json
import re
from pathlib import Path


_IDENTIFIER = re.compile(r"^[A-Za-z_]\w*$")
_SCALAR_TOKENS = {
    "unsigned",
    "signed",
    "int",
    "char",
    "float",
    "double",
    "_Bool",
    "long",
    "short",
    "uint8_t",
    "uint16_t",
    "uint32_t",
    "uint64_t",
    "int8_t",
    "int16_t",
    "int32_t",
    "int64_t",
}
_QUALIFIERS = {"static", "const", "volatile", "register"}
_RESERVED_PREFIXES = ("__",)
_CSMITH_GLOBAL_PREFIX = "g_"


def choose_criterion_variable(source: str) -> str:
    return choose_criterion_variables(source, 1)[0]


def choose_criterion_variables(source: str, count: int) -> tuple[str, ...]:
    if count <= 0:
        raise ValueError("count must be positive")

    ranked_candidates = _rank_unique_candidates(source)
    if len(ranked_candidates) < count:
        raise ValueError("unable to choose enough scalar criterion variables")
    return tuple(ranked_candidates[:count])


def write_criteria_file(
    path: Path,
    *,
    seed_id: str,
    variables: tuple[str, ...] | list[str],
) -> None:
    payload = {
        "criterion_kind": "value",
        "variables": list(variables),
        "seed_id": seed_id,
    }
    path.write_text(
        json.dumps(payload, indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )


def _looks_like_global_declaration(line: str) -> bool:
    stripped = line.strip()
    if not stripped:
        return False
    return not line[:1].isspace() or stripped.startswith("static ")


def _candidate_name_from_declaration(line: str) -> str | None:
    stripped = line.strip()
    if (
        not stripped
        or "(" in stripped
        or "*" in stripped
        or "[" in stripped
        or not stripped.endswith(";")
    ):
        return None

    declaration = stripped.split("=", 1)[0].rstrip(";").strip()
    tokens = declaration.split()
    if len(tokens) < 2:
        return None

    name = tokens[-1]
    type_tokens = [token for token in tokens[:-1] if token not in _QUALIFIERS]
    if not _IDENTIFIER.match(name):
        return None
    if not type_tokens:
        return None
    if not any(token in _SCALAR_TOKENS for token in type_tokens):
        return None
    if any(token not in _SCALAR_TOKENS for token in type_tokens):
        return None
    if name.startswith(_RESERVED_PREFIXES):
        return None
    return name


def _extract_main_body(source: str) -> str:
    main_match = re.search(r"\bmain\s*\([^)]*\)\s*\{", source)
    if main_match is None:
        return ""

    index = main_match.end() - 1
    depth = 0
    for position in range(index, len(source)):
        char = source[position]
        if char == "{":
            depth += 1
        elif char == "}":
            depth -= 1
            if depth == 0:
                return source[index + 1 : position]
    return ""


def _rank_global_candidates(source: str) -> list[str]:
    seen: set[str] = set()
    scored: list[tuple[int, str]] = []
    main_body = _extract_main_body(source)

    for line in source.splitlines():
        if not _looks_like_global_declaration(line):
            continue
        candidate = _candidate_name_from_declaration(line)
        if candidate is None or candidate in seen:
            continue
        seen.add(candidate)
        score = 0
        if candidate.startswith(_CSMITH_GLOBAL_PREFIX):
            score += 1000
        if "volatile" not in line:
            score += 25
        score += _count_usage(source, candidate)
        score += _count_writes(source, candidate) * 10
        if candidate in main_body:
            score += 50
        scored.append((score, candidate))

    scored.sort(key=lambda item: (-item[0], item[1]))
    return [candidate for _, candidate in scored]


def _rank_unique_candidates(source: str) -> list[str]:
    ranked: list[str] = []
    seen: set[str] = set()

    for candidate in _rank_global_candidates(source):
        if candidate in seen:
            continue
        seen.add(candidate)
        ranked.append(candidate)

    for candidate in _rank_main_local_candidates(source):
        if candidate in seen:
            continue
        seen.add(candidate)
        ranked.append(candidate)

    return ranked


def _rank_main_local_candidates(source: str) -> list[str]:
    main_body = _extract_main_body(source)
    seen: set[str] = set()
    scored: list[tuple[int, str]] = []

    for line in main_body.splitlines():
        candidate = _candidate_name_from_declaration(line)
        if candidate is None or candidate in seen:
            continue
        seen.add(candidate)
        score = _count_usage(main_body, candidate) + _count_writes(main_body, candidate) * 10
        scored.append((score, candidate))

    scored.sort(key=lambda item: (-item[0], item[1]))
    return [candidate for _, candidate in scored]


def _count_usage(source: str, variable: str) -> int:
    return len(re.findall(rf"\b{re.escape(variable)}\b", source))


def _count_writes(source: str, variable: str) -> int:
    plain_assign = re.findall(rf"\b{re.escape(variable)}\b\s*=(?!=)", source)
    compound_assign = re.findall(
        rf"\b{re.escape(variable)}\b\s*(?:\+=|-=|\*=|/=|%=|<<=|>>=|&=|\|=|\^=)",
        source,
    )
    prefix_update = re.findall(rf"(?:\+\+|--)\s*{re.escape(variable)}\b", source)
    postfix_update = re.findall(rf"\b{re.escape(variable)}\s*(?:\+\+|--)", source)
    return len(plain_assign) + len(compound_assign) + len(prefix_update) + len(postfix_update)
