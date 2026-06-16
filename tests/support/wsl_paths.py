from __future__ import annotations

import shutil
from pathlib import Path


def to_wsl_path(path: str | Path) -> str:
    raw = str(path)
    if len(raw) >= 2 and raw[1] == ":":
        drive = raw[0].lower()
        tail = raw[2:].replace("\\", "/")
        if not tail.startswith("/"):
            tail = f"/{tail}"
        return f"/mnt/{drive}{tail}"
    return Path(raw).as_posix()


def has_wsl_command() -> bool:
    return shutil.which("wsl") is not None


def bash_command(command: str) -> list[str]:
    if has_wsl_command():
        return ["wsl", "bash", "-lc", command]
    return ["bash", "-lc", command]
