#!/usr/bin/env python3
"""Flaky fake LLM script for retry integration testing.

Fails the first N calls (configurable via FAKE_LLM_FAIL_COUNT env var),
then succeeds. Used to test retry logic in LlmOnlineSeedSource.

Usage:
    FAKE_LLM_FAIL_COUNT=2 python3 fake_llm_flaky.py \
        --prompt-file prompt.txt --output-file output.c
"""

from __future__ import annotations

import argparse
import os
import sys
from pathlib import Path


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
    int *p = &result;
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

_COUNTER_FILE = Path(os.environ.get("FAKE_LLM_COUNTER_FILE", "/tmp/fake_llm_flaky_counter"))


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--prompt-file", required=True)
    parser.add_argument("--output-file", required=True)
    args = parser.parse_args()

    fail_count = int(os.environ.get("FAKE_LLM_FAIL_COUNT", "0"))

    # Read current attempt count
    attempt = 0
    if _COUNTER_FILE.exists():
        attempt = int(_COUNTER_FILE.read_text(encoding="utf-8").strip())

    attempt += 1
    _COUNTER_FILE.parent.mkdir(parents=True, exist_ok=True)
    _COUNTER_FILE.write_text(str(attempt), encoding="utf-8")

    if attempt <= fail_count:
        print(f"Simulated failure (attempt {attempt}/{fail_count})", file=sys.stderr)
        return 1

    # Success - write the program
    output_path = Path(args.output_file)
    output_path.parent.mkdir(parents=True, exist_ok=True)
    output_path.write_text(_GOOD_PROGRAM, encoding="utf-8")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
