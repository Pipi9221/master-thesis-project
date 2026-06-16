#!/usr/bin/env python3

from __future__ import annotations

import argparse
from pathlib import Path


PROGRAM = """/*
 * Deterministic fake CSmith output for integration tests.
 */

#include "csmith.h"

static int g_1 = 1;
static int g_2 = 2;

int main(void) {
    int x = g_1 + g_2;
    return x;
}
"""


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--output", required=True)
    args = parser.parse_args()
    Path(args.output).write_text(PROGRAM, encoding="utf-8")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
