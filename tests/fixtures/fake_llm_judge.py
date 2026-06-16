#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
from pathlib import Path


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--bundle", required=True)
    parser.add_argument("--status", default="VIOLATION")
    parser.add_argument("--reason", default="llm_judge_violation")
    parser.add_argument("--summary", default="fake llm judge decided this case is a violation")
    args = parser.parse_args()

    bundle = json.loads(Path(args.bundle).read_text(encoding="utf-8"))
    payload = {
        "status": args.status,
        "reason": args.reason,
        "summary": args.summary,
        "confidence": 0.42,
        "bundle_mr": bundle.get("mr"),
    }
    print(json.dumps(payload))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
