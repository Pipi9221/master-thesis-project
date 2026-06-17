"""Resolve paths to external tooling binaries.

Prefer environment variables, then well-known local build paths, then fall back
to bare command names (relying on ``$PATH``).
"""

from __future__ import annotations

import os
import shutil
from pathlib import Path


def resolve_dg_slicer() -> str:
    """Return the path to the ``llvm-slicer`` binary."""
    env = os.environ.get("DG_SLICER", "").strip()
    if env:
        return env

    # Well-known build paths under DG_HOME
    dg_home = os.environ.get("DG_HOME", "").strip()
    if dg_home:
        candidate = os.path.join(dg_home, "build", "tools", "llvm-slicer")
        if Path(candidate).exists():
            return candidate

    return "llvm-slicer"


def resolve_dg_clang() -> str:
    """Return the path to the clang binary for DG slicing."""
    env = os.environ.get("DG_CLANG_BINARY", "").strip()
    if env:
        return env
    # Prefer clang-14 if available
    if shutil.which("clang-14"):
        return "clang-14"
    return "clang"


def resolve_dg_llvm_dis() -> str:
    env = os.environ.get("DG_LLVM_DIS_BINARY", "").strip()
    if env:
        return env
    if shutil.which("llvm-dis-14"):
        return "llvm-dis-14"
    return "llvm-dis"


def resolve_dg_lli() -> str:
    env = os.environ.get("DG_LLI_BINARY", "").strip()
    if env:
        return env
    if shutil.which("lli-14"):
        return "lli-14"
    return "lli"


def resolve_dg_llvm_link() -> str:
    env = os.environ.get("DG_LLVM_LINK_BINARY", "").strip()
    if env:
        return env
    if shutil.which("llvm-link-14"):
        return "llvm-link-14"
    return "llvm-link"
