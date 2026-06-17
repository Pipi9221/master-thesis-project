#!/usr/bin/env bash
set -euo pipefail

base="${1:-}"
if [[ -z "${base}" ]]; then
  echo "Usage: $0 path/to/base_case.c [count] [check_stdout]" >&2
  exit 2
fi

count="${2:-2}"
check_stdout="${3:-0}"

root_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
gen_py="${root_dir}/metamorphic/gen_variants.py"
mt_py="${root_dir}/metamorphic/mt_correctness.py"

tmp_dir="$(mktemp -d "/tmp/framac-mt-eqgen.XXXXXX")"
cleanup() { rm -rf "${tmp_dir}"; }
trap cleanup EXIT

kinds="refactor-temp"
if [[ "${count}" -gt 1 ]]; then
  kinds="$(printf 'refactor-temp,%.0s' $(seq 1 "${count}"))"
  kinds="${kinds%,}"
fi

mapfile -t variants < <(python3 "${gen_py}" "${base}" --out-dir "${tmp_dir}" --kinds "${kinds}")
if [[ "${#variants[@]}" -eq 0 ]]; then
  echo "No variants generated." >&2
  exit 1
fi

args=()
if [[ "${check_stdout}" == "1" ]]; then
  args+=(--check-stdout)
fi

echo "Base: ${base}"
i=0
for v in "${variants[@]}"; do
  echo "Variant: ${v}"
  python3 "${mt_py}" "${base}" "${v}" "${args[@]}"
  i=$((i+1))
done

echo "PASS metamorphic correctness: $(basename "${base}") (${i} variants)"
