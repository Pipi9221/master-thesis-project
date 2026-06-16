#!/usr/bin/env python3
from __future__ import annotations

import sys
from pathlib import Path


def main(argv: list[str]) -> int:
    input_path = Path(argv[0])
    output_flag_index = argv.index("-ocode")
    output_path = Path(argv[output_flag_index + 1])
    output_path.write_text(input_path.read_text(encoding="utf-8"), encoding="utf-8")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
