#!/usr/bin/env python3
"""DeepSeek API client for LLM online seed generation.

Reads a prompt from ``--prompt-file``, calls the DeepSeek chat API, extracts the
generated C code, and writes it to ``--output-file``.

Usage::

    python3 deepseek_client.py --prompt-file prompt.txt --output-file generated.c
"""

from __future__ import annotations

import argparse
import json
import os
import re
import sys
from pathlib import Path
from urllib import request, error

# Ensure src/ is on the path so we can import prompt definitions.
_SRC = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "src")
if _SRC not in sys.path:
    sys.path.insert(0, _SRC)


DEFAULT_BASE_URL = "https://api.deepseek.com/v1"
DEFAULT_MODEL = "deepseek-v4-pro"


def _extract_c_code(text: str) -> str:
    """Extract C code from an LLM response, stripping markdown fences if present."""
    code_block = re.search(r"```(?:c|C)?\s*\n?(.*?)```", text, re.DOTALL)
    if code_block:
        return code_block.group(1).strip()
    return text.strip()


def _call_deepseek(prompt: str, *, api_key: str, base_url: str, model: str) -> str:
    from seeds.llm_prompts import SEED_GENERATION_SYSTEM_PROMPT

    url = f"{base_url}/chat/completions"
    body = json.dumps(
        {
            "model": model,
            "messages": [
                {"role": "system", "content": SEED_GENERATION_SYSTEM_PROMPT},
                {"role": "user", "content": prompt},
            ],
            "temperature": 0.8,
            "max_tokens": 4096,
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
    return _extract_c_code(content)


def main() -> None:
    parser = argparse.ArgumentParser(description="DeepSeek C code generator")
    parser.add_argument("--prompt-file", required=True, help="Path to prompt text file")
    parser.add_argument("--output-file", required=True, help="Path to output C source file")
    parser.add_argument("--api-key", default=None, help="DeepSeek API key")
    parser.add_argument("--base-url", default=DEFAULT_BASE_URL, help="DeepSeek API base URL")
    parser.add_argument("--model", default=DEFAULT_MODEL, help="Model name")
    args = parser.parse_args()

    api_key = args.api_key or os.environ.get("DEEPSEEK_API_KEY") or os.environ.get("ANTHROPIC_AUTH_TOKEN")
    if not api_key:
        print("No DeepSeek API key provided. Set DEEPSEEK_API_KEY or ANTHROPIC_AUTH_TOKEN.", file=sys.stderr)
        sys.exit(1)

    prompt_file = Path(args.prompt_file)
    if not prompt_file.exists():
        print(f"Prompt file not found: {prompt_file}", file=sys.stderr)
        sys.exit(1)

    prompt_text = prompt_file.read_text(encoding="utf-8")
    c_code = _call_deepseek(prompt_text, api_key=api_key, base_url=args.base_url, model=args.model)

    output_file = Path(args.output_file)
    output_file.parent.mkdir(parents=True, exist_ok=True)
    output_file.write_text(c_code, encoding="utf-8")
    print(f"Generated {len(c_code)} bytes of C code → {output_file}")


if __name__ == "__main__":
    main()
