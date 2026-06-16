from __future__ import annotations

import re
from pathlib import Path


def extract_frama_statement_set(path: Path) -> set[str]:
    text = path.read_text(encoding="utf-8", errors="ignore")
    text = re.sub(r"/\*.*?\*/", "", text, flags=re.S)
    statements: set[str] = set()
    for raw_line in text.splitlines():
        line = raw_line.strip()
        if not line or line.startswith("//") or line.startswith("#"):
            continue
        if line in {"{", "}", "};"}:
            continue
        normalized = re.sub(r"\s+", " ", line)
        statements.add(normalized)
    return statements


def extract_dg_instruction_set(path: Path) -> set[str]:
    text = path.read_text(encoding="utf-8", errors="ignore")
    instructions: set[str] = set()
    inside_function = False
    for raw_line in text.splitlines():
        line = raw_line.strip()
        if not line or line.startswith(";") or line.startswith("!"):
            continue
        if line.startswith("define "):
            inside_function = True
            continue
        if inside_function and line == "}":
            inside_function = False
            continue
        if not inside_function:
            continue
        if line.endswith(":"):
            continue
        if line.startswith("attributes "):
            continue
        normalized = re.sub(r"\s+", " ", line)
        instructions.add(normalized)
    return instructions
