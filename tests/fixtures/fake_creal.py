from __future__ import annotations

import argparse
from pathlib import Path


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--dst", required=True)
    parser.add_argument("--syn-prob", required=True)
    parser.add_argument("--num-mutants", required=True)
    args = parser.parse_args()

    output_dir = Path(args.dst)
    output_dir.mkdir(parents=True, exist_ok=True)

    seed = output_dir / "FAKE01_seed.c"
    mutant = output_dir / "FAKE01_seed_syn0.c"

    seed.write_text(
        "int main(void) {\n"
        "    int x = 1;\n"
        "    return x;\n"
        "}\n",
        encoding="utf-8",
    )
    mutant.write_text(
        "static int creal_helper(void) {\n"
        "    return 1;\n"
        "}\n"
        "\n"
        "int main(void) {\n"
        "    int x = creal_helper();\n"
        "    return x;\n"
        "}\n",
        encoding="utf-8",
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
