#!/usr/bin/env python3
import argparse
import pathlib
import re
import sys


def _read_text(path: pathlib.Path) -> str:
    return path.read_text(encoding="utf-8")


def _write_text(path: pathlib.Path, text: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(text, encoding="utf-8")


def _split_header(lines: list[str]) -> tuple[list[str], int]:
    i = 0
    while i < len(lines) and lines[i].lstrip().startswith("//"):
        i += 1
    while i < len(lines) and lines[i].strip() == "":
        i += 1
    return lines[:i], i


def _inject_dead_code(lines: list[str], tag: str) -> list[str]:
    header, idx = _split_header(lines)
    injected = [
        f"// EXPECT-ABSENT: mt_noise_{tag}\n",
        f"// EXPECT-ABSENT: mt_sink_{tag}\n",
        "\n",
        f"static volatile unsigned mt_sink_{tag} = 0U;\n",
        f"static void mt_noise_{tag}(unsigned x) {{\n",
        "  for (unsigned i = 0U; i < 256U; i++) {\n",
        f"    mt_sink_{tag} = (mt_sink_{tag} * 33U) ^ (x + i + 0x5AU);\n",
        "  }\n",
        "}\n",
        "\n",
    ]
    return header + injected + lines[idx:]


def _inject_dead_global(lines: list[str], tag: str) -> list[str]:
    header, idx = _split_header(lines)
    injected = [
        f"// EXPECT-ABSENT: mt_g_{tag}\n",
        "\n",
        f"static unsigned mt_g_{tag} = 0U;\n",
        f"static void mt_touch_{tag}(unsigned x) {{\n",
        f"  mt_g_{tag} = (mt_g_{tag} + x) ^ 0xA5U;\n",
        "}\n",
        "\n",
    ]
    return header + injected + lines[idx:]


def _refactor_temp(lines: list[str], tag: str) -> list[str]:
    header, idx = _split_header(lines)
    header = header + [f"// MT-KIND: refactor-temp {tag}\n"]

    re_assign = re.compile(r"^(\s*)g_out\s*=\s*(.+);\s*$")
    re_return = re.compile(r"^(\s*)return\s+(.+);\s*$")

    out: list[str] = []
    changed = False
    for line in lines[idx:]:
        if not changed:
            m = re_assign.match(line)
            if m:
                indent, rhs = m.group(1), m.group(2)
                out.append(f"{indent}uint32_t __mt_tmp_{tag} = {rhs};\n")
                out.append(f"{indent}g_out = __mt_tmp_{tag};\n")
                changed = True
                continue
            m = re_return.match(line)
            if m:
                indent, expr = m.group(1), m.group(2)
                out.append(f"{indent}int __mt_ret_{tag} = (int)({expr});\n")
                out.append(f"{indent}return __mt_ret_{tag};\n")
                changed = True
                continue
        out.append(line)

    if not changed:
        out = lines[idx:]
    return header + out


def generate_variants(src: pathlib.Path, out_dir: pathlib.Path, kinds: list[str]) -> list[pathlib.Path]:
    text = _read_text(src)
    lines = text.splitlines(keepends=True)
    variants: list[pathlib.Path] = []

    base_name = src.stem
    for k, kind in enumerate(kinds):
        tag = f"MT{k}"
        new_lines = lines[:]
        if kind == "dead-code":
            new_lines = _inject_dead_code(new_lines, tag)
        elif kind == "dead-global":
            new_lines = _inject_dead_global(new_lines, tag)
        elif kind == "refactor-temp":
            new_lines = _refactor_temp(new_lines, tag)
        else:
            raise ValueError(f"unknown kind: {kind}")

        out_path = out_dir / f"{base_name}.{kind}.{tag}.c"
        _write_text(out_path, "".join(new_lines))
        variants.append(out_path)

    return variants


def main(argv: list[str]) -> int:
    p = argparse.ArgumentParser()
    p.add_argument("src", type=pathlib.Path)
    p.add_argument("--out-dir", type=pathlib.Path, required=True)
    p.add_argument(
        "--kinds",
        default="dead-code,dead-global",
        help="Comma-separated: dead-code,dead-global,refactor-temp",
    )
    args = p.parse_args(argv)

    kinds = [k.strip() for k in args.kinds.split(",") if k.strip()]
    if not kinds:
        raise SystemExit("no kinds specified")

    generated = generate_variants(args.src, args.out_dir, kinds)
    for path in generated:
        print(str(path))
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
