#!/usr/bin/env python3
"""DeepSeek LLM judge client for DG oracle result judgment.

Reads a bundle JSON and prompt text, sends them to the DeepSeek API, and outputs
a JSON verdict to stdout (consumed by :class:`SubprocessLlmJudge`).

Usage::

    python3 deepseek_judge.py \\
        --bundle bundle.json \\
        --prompt prompt.txt \\
        --output-dir /tmp/judge_output

The stdout must be a single JSON object matching::

    {"status": "PASS|VIOLATION|ERROR", "reason": "snake_case",
     "summary": "short explanation", "confidence": 0.0}
"""

from __future__ import annotations

import argparse
import json
import os
import sys
from pathlib import Path
from urllib import error, request


DEFAULT_BASE_URL = "https://api.deepseek.com/v1"
DEFAULT_MODEL = "deepseek-v4-pro"


def _call_deepseek_judge(
    *,
    bundle_text: str,
    prompt_text: str,
    api_key: str,
    base_url: str,
    model: str,
) -> str:
    url = f"{base_url}/chat/completions"

    system_prompt = (
        "You are a rigorous judge for a program slicing experiment. "
        "Your task is to review the evidence bundle and determine whether the "
        "slicing result is PASS (no violation), VIOLATION (the metamorphic relation "
        "is violated), or ERROR (evidence is insufficient or malformed).\n\n"
        "Key rules:\n"
        "- MR2: Inserted irrelevant data-flow noise should NOT survive in the slice.\n"
        "- MR3: Inserted dead-code control-flow payload should NOT survive in the slice.\n"
        "- If the deterministic prefilter already found a VIOLATION, trust it.\n"
        "- If the slice failed, that's an ERROR.\n"
        "- If evidence is incomplete, that's an ERROR.\n\n"
        "Output ONLY a single JSON object. No markdown, no explanation outside the JSON."
    )

    body = json.dumps(
        {
            "model": model,
            "messages": [
                {"role": "system", "content": system_prompt},
                {"role": "user", "content": prompt_text},
                {"role": "user", "content": f"Evidence bundle:\n\n```json\n{bundle_text}\n```"},
            ],
            "temperature": 0.3,
            "max_tokens": 1024,
        }
    ).encode("utf-8")

    req = request.Request(
        url,
        data=body,
        headers={
            "Authorization": f"Bearer {api_key}",
            "Content-Type": "application/json",
        },
    )

    try:
        with request.urlopen(req, timeout=120) as resp:
            payload = json.loads(resp.read().decode("utf-8"))
    except error.HTTPError as exc:
        detail = exc.read().decode("utf-8", errors="ignore")
        print(f"DeepSeek API error ({exc.code}): {detail}", file=sys.stderr)
        sys.exit(1)
    except error.URLError as exc:
        print(f"DeepSeek API connection error: {exc.reason}", file=sys.stderr)
        sys.exit(1)

    content = payload.get("choices", [{}])[0].get("message", {}).get("content", "")
    if not content:
        print("DeepSeek returned empty response", file=sys.stderr)
        sys.exit(1)
    return content


def _extract_json(text: str) -> str:
    """Extract the first JSON object from text, stripping markdown fences."""
    import re

    # Try to find JSON object directly
    match = re.search(r"\{[^{}]*\"status\"[^{}]*\}", text, re.DOTALL)
    if match:
        return match.group(0)

    # Try code block
    code_block = re.search(r"```(?:json)?\s*\n?(.*?)```", text, re.DOTALL)
    if code_block:
        inner = code_block.group(1).strip()
        obj_match = re.search(r"\{.*\}", inner, re.DOTALL)
        if obj_match:
            return obj_match.group(0)

    return text.strip()


def main() -> None:
    parser = argparse.ArgumentParser(description="DeepSeek DG LLM judge")
    parser.add_argument("--bundle", required=True, help="Path to bundle JSON file")
    parser.add_argument("--prompt", required=True, help="Path to prompt text file")
    parser.add_argument("--output-dir", default=None, help="Output directory for debug artifacts")
    parser.add_argument("--api-key", default=None, help="DeepSeek API key")
    parser.add_argument("--base-url", default=DEFAULT_BASE_URL, help="DeepSeek API base URL")
    parser.add_argument("--model", default=DEFAULT_MODEL, help="Model name")
    args = parser.parse_args()

    api_key = args.api_key or os.environ.get("DEEPSEEK_API_KEY") or os.environ.get("ANTHROPIC_AUTH_TOKEN")
    if not api_key:
        print("No DeepSeek API key provided.", file=sys.stderr)
        sys.exit(1)

    bundle_path = Path(args.bundle)
    prompt_path = Path(args.prompt)

    if not bundle_path.exists():
        print(f"Bundle file not found: {bundle_path}", file=sys.stderr)
        sys.exit(1)
    if not prompt_path.exists():
        print(f"Prompt file not found: {prompt_path}", file=sys.stderr)
        sys.exit(1)

    bundle_text = bundle_path.read_text(encoding="utf-8")
    prompt_text = prompt_path.read_text(encoding="utf-8")

    # Write debug info if output-dir is provided
    output_dir = Path(args.output_dir) if args.output_dir else None
    if output_dir:
        output_dir.mkdir(parents=True, exist_ok=True)

    response_text = _call_deepseek_judge(
        bundle_text=bundle_text,
        prompt_text=prompt_text,
        api_key=api_key,
        base_url=args.base_url,
        model=args.model,
    )

    if output_dir:
        (output_dir / "llm_response.txt").write_text(response_text, encoding="utf-8")

    json_text = _extract_json(response_text)

    # Validate it's parseable JSON
    try:
        parsed = json.loads(json_text)
        if "status" not in parsed:
            print(json.dumps({"status": "ERROR", "reason": "missing_status_field",
                              "summary": "LLM response missing status field",
                              "confidence": 0.0}))
        else:
            print(json.dumps(parsed))
    except json.JSONDecodeError:
        print(json.dumps({"status": "ERROR", "reason": "unparseable_llm_output",
                          "summary": "Could not parse JSON from LLM response",
                          "confidence": 0.0}))


if __name__ == "__main__":
    main()
