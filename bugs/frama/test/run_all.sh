#!/usr/bin/env bash
set -euo pipefail

root_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

failed=0
mode="${1:-core}"
shopt -s nullglob
for cfile in "${root_dir}/cases"/*.c; do
  criteria_line="$(sed -n 's@^// CRITERIA: @@p' "${cfile}" | head -n 1 || true)"
  if [[ -z "${criteria_line}" ]]; then
    continue
  fi
  read -r criteria_kind _criteria_arg <<<"${criteria_line}"
  if [[ "${mode}" != "all" ]]; then
    if [[ "${criteria_kind}" != "return" && "${criteria_kind}" != "value" ]]; then
      continue
    fi
  fi
  if ! bash "${root_dir}/run_case.sh" "${cfile}"; then
    failed=1
  fi
done

exit "${failed}"
