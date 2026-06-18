from __future__ import annotations

import re
from pathlib import Path

_C_KEYWORDS = frozenset({
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if", "int",
    "long", "register", "return", "short", "signed", "sizeof", "static",
    "struct", "switch", "typedef", "union", "unsigned", "void", "volatile",
    "while",
})

_IDENTIFIER_CALL_RE = re.compile(r"\b([A-Za-z_]\w*)\s*\(")

# Matches a function definition/declaration header after parameter
# normalization (i.e. "static return_type name(...)" or "return_type name(...)"),
# capturing the function name.
_FUNC_DECL_RE = re.compile(
    r"^\s*(?:static\s+)?(?:const\s+)?"
    r"(?:\w[\w\s*]*?)\s+"          # return type (greedy-but-backtrack)
    r"([A-Za-z_]\w*)\s*\(\.\.\.\)" # func_name(...)
    r"\s*;?\s*$",                   # optional semicolon
)


def _normalize_frama_signatures(text: str) -> str:
    """Replace function parameter/argument lists with ``(...)`` across the
    entire *text* so that multi-line calls and definitions are handled."""
    result = text
    for m in reversed(list(_IDENTIFIER_CALL_RE.finditer(text))):
        identifier = m.group(1)
        if identifier in _C_KEYWORDS:
            continue
        start = m.end() - 1
        depth = 0
        end = start
        for i in range(start, len(result)):
            if result[i] == "(":
                depth += 1
            elif result[i] == ")":
                depth -= 1
                if depth == 0:
                    end = i
                    break
        result = result[:start] + "(...)" + result[end + 1:]
    return result


def _strip_return_type(line: str) -> str:
    """For function definition/declaration headers, keep only the function
    name so that Frama-C return-type normalisation does not cause mismatches."""
    m = _FUNC_DECL_RE.match(line)
    if m is None:
        return line
    func_name = m.group(1)
    if line.rstrip().endswith(";"):
        return f"{func_name}(...);"
    return f"{func_name}(...)"


def extract_frama_statement_set(path: Path) -> set[str]:
    text = path.read_text(encoding="utf-8", errors="ignore")
    text = re.sub(r"/\*.*?\*/", "", text, flags=re.S)
    text = _normalize_frama_signatures(text)
    statements: set[str] = set()
    for raw_line in text.splitlines():
        line = raw_line.strip()
        if not line or line.startswith("//") or line.startswith("#"):
            continue
        if line in {"{", "}", "};"}:
            continue
        line = _strip_return_type(line)
        normalized = re.sub(r"\s+", " ", line)
        # Strip trailing brace — Frama-C sometimes places "{" on the same line
        # as the if/else/while/for header, sometimes on the next line.
        normalized = re.sub(r"\s*\{\s*$", "", normalized).strip()
        if normalized:
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
        # Strip LLVM comments and check for label-only lines
        line_no_comment = line.split(";", 1)[0].strip()
        if not line_no_comment or line_no_comment.endswith(":"):
            continue
        if line_no_comment.startswith("attributes "):
            continue
        # Skip debug intrinsics (not real program instructions)
        if "@llvm.dbg." in line:
            continue
        # Normalize SSA registers, attribute groups, metadata nodes, and debug locations
        line = re.sub(r"%\d+", "%v", line)
        line = re.sub(r"!dbg\s+!\d+", "", line)
        line = re.sub(r"metadata\s+!\d+", "metadata !M", line)
        line = re.sub(r"!\d+\s*=\s*!", "!M = !", line)
        line = re.sub(r"#\d+", "#A", line)
        normalized = re.sub(r"\s+", " ", line).strip()
        if normalized:
            instructions.add(normalized)
    return instructions
