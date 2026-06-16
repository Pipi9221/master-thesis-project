#!/usr/bin/env python3
"""Fake LLM script that writes a valid C program for integration testing.

Usage (matches the command template pattern):
    python3 fake_llm.py --prompt-file prompt.txt --output-file output.c
"""

from __future__ import annotations

import argparse
import sys
from pathlib import Path


# A well-featured C program that passes compile, run, and feature checks
_GOOD_PROGRAM = """\
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int global_counter = 0;

typedef int (*op_fn)(int, int);

static int add(int a, int b) { return a + b; }
static int sub(int a, int b) { return a - b; }

static int compute(op_fn fn, int x, int y) {
    volatile int result = fn(x, y);
    int *p = &result;  /* extra pointer */
    (void)p;
    return result;
}

int main(void) {
    int keep = 0;
    char buf[32];
    int *data = (int *)malloc(4 * sizeof(int));
    if (!data) return 1;

    for (int i = 0; i < 4; ++i) data[i] = i * 10;

    op_fn f = add;
    keep = compute(f, data[0], data[1]);
    f = sub;
    keep += compute(f, keep, data[2]);

    switch (keep) {
        case 10: sprintf(buf, "case10"); break;
        case 30: sprintf(buf, "case30"); break;
        default: sprintf(buf, "other"); break;
    }

    memcpy(data + 2, data, 2 * sizeof(int));
    printf("result=%d buf=%s\\n", keep, buf);
    free(data);
    return 0;
}
"""


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--prompt-file", required=True, help="Path to prompt file")
    parser.add_argument("--output-file", required=True, help="Path to write generated C code")
    args = parser.parse_args()

    prompt_path = Path(args.prompt_file)
    output_path = Path(args.output_file)

    # Read prompt (proof that we were called with content from the pipeline)
    prompt_text = prompt_path.read_text(encoding="utf-8", errors="ignore")

    # Simple behavior: if prompt text is too short, fail (simulating LLM rejection)
    if len(prompt_text.strip()) < 10:
        print("Error: prompt too short", file=sys.stderr)
        return 1

    # Write the generated C program
    output_path.parent.mkdir(parents=True, exist_ok=True)
    output_path.write_text(_GOOD_PROGRAM, encoding="utf-8")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
