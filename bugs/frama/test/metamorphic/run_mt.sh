#!/usr/bin/env bash
set -euo pipefail

src="${1:-}"
if [[ -z "${src}" ]]; then
  echo "Usage: $0 path/to/base_case.c [kinds]" >&2
  echo "kinds: dead-code,dead-global (comma-separated)" >&2
  exit 2
fi

kinds="${2:-dead-code,dead-global}"

root_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
gen_py="${root_dir}/metamorphic/gen_variants.py"
run_case="${root_dir}/run_case.sh"

if [[ ! -f "${gen_py}" ]]; then
  echo "Missing generator: ${gen_py}" >&2
  exit 2
fi
if [[ ! -f "${run_case}" ]]; then
  echo "Missing runner: ${run_case}" >&2
  exit 2
fi

tmp_dir="$(mktemp -d "/tmp/framac-mt.XXXXXX")"
cleanup() { rm -rf "${tmp_dir}"; }
trap cleanup EXIT

mapfile -t variants < <(python3 "${gen_py}" "${src}" --out-dir "${tmp_dir}" --kinds "${kinds}")
if [[ "${#variants[@]}" -eq 0 ]]; then
  echo "No variants generated." >&2
  exit 1
fi

echo "Base: ${src}"
for v in "${variants[@]}"; do
  echo "Variant: ${v}"
  bash "${run_case}" "${v}"
done

echo "PASS metamorphic: $(basename "${src}") (${#variants[@]} variants)"

