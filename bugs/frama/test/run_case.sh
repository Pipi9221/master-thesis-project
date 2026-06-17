#!/usr/bin/env bash
set -euo pipefail

src="${1:-}"
if [[ -z "${src}" ]]; then
  echo "Usage: $0 path/to/case.c" >&2
  exit 2
fi

if [[ ! -f "${src}" ]]; then
  echo "Case not found: ${src}" >&2
  exit 2
fi

case_name="$(basename "${src}" .c)"
root_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
out_dir="${root_dir}/out"
mkdir -p "${out_dir}"

criteria_line="$(sed -n 's@^// CRITERIA: @@p' "${src}" | head -n 1 || true)"
if [[ -z "${criteria_line}" ]]; then
  echo "Missing criteria line in ${src}. Add e.g. '// CRITERIA: return main' or '// CRITERIA: value g'." >&2
  exit 2
fi

extra_frama_line="$(sed -n 's@^// FRAMAC-ARGS: @@p' "${src}" | head -n 1 || true)"
extra_frama_args=()
if [[ -n "${extra_frama_line}" ]]; then
  read -r -a extra_frama_args <<<"${extra_frama_line}"
fi

gcc_std="$(sed -n 's@^// GCC-STD: @@p' "${src}" | head -n 1 || true)"
if [[ -z "${gcc_std}" ]]; then
  gcc_std="c11"
fi
gcc_extra_line="$(sed -n 's@^// GCC-ARGS: @@p' "${src}" | head -n 1 || true)"
gcc_extra_args=()
if [[ -n "${gcc_extra_line}" ]]; then
  read -r -a gcc_extra_args <<<"${gcc_extra_line}"
fi

skip_cc=0
if grep -Eq '^[[:space:]]*//[[:space:]]*SKIP-CC:[[:space:]]*1[[:space:]]*$' "${src}"; then
  skip_cc=1
fi
skip_run=0
if grep -Eq '^[[:space:]]*//[[:space:]]*SKIP-RUN:[[:space:]]*1[[:space:]]*$' "${src}"; then
  skip_run=1
fi

check_stdout=0
if grep -Eq '^[[:space:]]*//[[:space:]]*CHECK-STDOUT:[[:space:]]*1[[:space:]]*$' "${src}"; then
  check_stdout=1
fi

check_reparse=0
if grep -Eq '^[[:space:]]*//[[:space:]]*CHECK-REPARSE:[[:space:]]*1[[:space:]]*$' "${src}"; then
  check_reparse=1
fi

expect_framac_fail="$(sed -n 's@^// EXPECT-FRAMAC-FAIL: @@p' "${src}" | head -n 1 || true)"
expect_sliced_cc_fail="$(sed -n 's@^// EXPECT-SLICED-CC-FAIL: @@p' "${src}" | head -n 1 || true)"
expect_sliced_main="$(sed -n 's@^// EXPECT-SLICED-MAIN: @@p' "${src}" | head -n 1 || true)"
expect_reparse_fail="$(sed -n 's@^// EXPECT-REPARSE-FAIL: @@p' "${src}" | head -n 1 || true)"

slice_args=()
read -r criteria_kind criteria_arg <<<"${criteria_line}"
case "${criteria_kind}" in
  return)
    slice_args+=("-slice-return" "${criteria_arg}")
    ;;
  value)
    slice_args+=("-slice-value" "${criteria_arg}")
    ;;
  annot)
    slice_args+=("-slice-annot" "${criteria_arg}")
    ;;
  rd)
    slice_args+=("-slice-rd" "${criteria_arg}")
    ;;
  wr)
    slice_args+=("-slice-wr" "${criteria_arg}")
    ;;
  calls)
    slice_args+=("-slice-calls" "${criteria_arg}")
    ;;
  assert)
    slice_args+=("-slice-assert" "${criteria_arg}")
    ;;
  loop-inv)
    slice_args+=("-slice-loop-inv" "${criteria_arg}")
    ;;
  pragma)
    slice_args+=("-slice-pragma" "${criteria_arg}")
    ;;
  *)
    echo "Unknown criteria kind '${criteria_kind}' in ${src} (expected 'return', 'value', 'annot', 'rd', 'wr', 'calls', 'assert', 'loop-inv', or 'pragma')." >&2
    exit 2
    ;;
esac

sliced_should_have_int_main=0
if grep -Eq '^[[:space:]]*int[[:space:]]+main[[:space:]]*[(]' "${src}"; then
  sliced_should_have_int_main=1
fi

sliced_c="${out_dir}/${case_name}.sliced.c"
tmp_dir="$(mktemp -d "/tmp/framac-slicing-${case_name}.XXXXXX")"
orig_bin="${tmp_dir}/${case_name}.orig.bin"
sliced_bin="${tmp_dir}/${case_name}.sliced.bin"
orig_out="${tmp_dir}/${case_name}.orig.out"
sliced_out="${tmp_dir}/${case_name}.sliced.out"
frama_log="${tmp_dir}/${case_name}.frama.log"
orig_cc_log="${tmp_dir}/${case_name}.orig.cc.log"
sliced_cc_log="${tmp_dir}/${case_name}.sliced.cc.log"
reparse_log="${tmp_dir}/${case_name}.reparse.log"

set +e
opam exec --switch=4.14.2 -- frama-c "${src}" \
  "${extra_frama_args[@]}" \
  "${slice_args[@]}" \
  -then-on "Slicing export" -print -ocode "${sliced_c}" >"${frama_log}" 2>&1
frama_status=$?
set -e

if [[ "${frama_status}" -ne 0 ]]; then
  if [[ -n "${expect_framac_fail}" ]] && grep -Fq "${expect_framac_fail}" "${frama_log}"; then
    rm -rf "${tmp_dir}"
    echo "PASS ${case_name}"
    exit 0
  fi
  echo "Frama-C failed for ${case_name}: exit=${frama_status}" >&2
  cat "${frama_log}" >&2 || true
  echo "Artifacts kept in ${tmp_dir}" >&2
  exit 1
fi

if [[ -n "${expect_framac_fail}" ]]; then
  echo "Expected Frama-C failure for ${case_name} but it succeeded." >&2
  echo "Artifacts kept in ${tmp_dir}" >&2
  exit 1
fi

if [[ -n "${expect_sliced_main}" ]]; then
  case "${expect_sliced_main}" in
    int)
      if ! grep -Eq '^[[:space:]]*int[[:space:]]+main[[:space:]]*[(]' "${sliced_c}"; then
        echo "Invalid main signature in sliced output for ${case_name}: expected 'int main(...)'." >&2
        echo "Artifacts kept in ${tmp_dir}" >&2
        exit 1
      fi
      ;;
    void)
      if ! grep -Eq '^[[:space:]]*void[[:space:]]+main[[:space:]]*[(]' "${sliced_c}"; then
        echo "Invalid main signature in sliced output for ${case_name}: expected 'void main(...)'." >&2
        echo "Artifacts kept in ${tmp_dir}" >&2
        exit 1
      fi
      ;;
    any)
      ;;
    *)
      echo "Unknown EXPECT-SLICED-MAIN value '${expect_sliced_main}' in ${src} (expected 'int', 'void', or 'any')." >&2
      echo "Artifacts kept in ${tmp_dir}" >&2
      exit 1
      ;;
  esac
else
  if [[ "${sliced_should_have_int_main}" -eq 1 ]]; then
    if ! grep -Eq '^[[:space:]]*int[[:space:]]+main[[:space:]]*[(]' "${sliced_c}"; then
      echo "Invalid main signature in sliced output for ${case_name}: expected 'int main(...)'." >&2
      echo "Artifacts kept in ${tmp_dir}" >&2
      exit 1
    fi
  fi
fi

orig_cc_status=0
sliced_cc_status=0
if [[ "${skip_cc}" -eq 0 ]]; then
  set +e
  gcc -std="${gcc_std}" -O0 -Wall -Wextra "${gcc_extra_args[@]}" "${src}" -o "${orig_bin}" >"${orig_cc_log}" 2>&1
  orig_cc_status=$?
  gcc -std="${gcc_std}" -O0 -Wall -Wextra "${gcc_extra_args[@]}" "${sliced_c}" -o "${sliced_bin}" >"${sliced_cc_log}" 2>&1
  sliced_cc_status=$?
  set -e
fi

if [[ "${orig_cc_status}" -ne 0 || "${sliced_cc_status}" -ne 0 ]]; then
  if [[ -n "${expect_sliced_cc_fail}" ]] && [[ "${orig_cc_status}" -eq 0 ]] && grep -Fq "${expect_sliced_cc_fail}" "${sliced_cc_log}"; then
    rm -rf "${tmp_dir}"
    echo "PASS ${case_name}"
    exit 0
  fi
  echo "Compile failed for ${case_name}: orig_cc=${orig_cc_status}, sliced_cc=${sliced_cc_status}" >&2
  if [[ "${orig_cc_status}" -ne 0 ]]; then
    cat "${orig_cc_log}" >&2 || true
  fi
  if [[ "${sliced_cc_status}" -ne 0 ]]; then
    cat "${sliced_cc_log}" >&2 || true
  fi
  echo "Artifacts kept in ${tmp_dir}" >&2
  exit 1
fi

if [[ -n "${expect_sliced_cc_fail}" ]]; then
  echo "Expected sliced compilation failure for ${case_name} but it succeeded." >&2
  echo "Artifacts kept in ${tmp_dir}" >&2
  exit 1
fi

if [[ "${check_reparse}" -eq 1 ]]; then
  set +e
  opam exec --switch=4.14.2 -- frama-c "${sliced_c}" -print >"${reparse_log}" 2>&1
  reparse_status=$?
  set -e
  if [[ "${reparse_status}" -ne 0 ]]; then
    if [[ -n "${expect_reparse_fail}" ]] && grep -Fq "${expect_reparse_fail}" "${reparse_log}"; then
      rm -rf "${tmp_dir}"
      echo "PASS ${case_name}"
      exit 0
    fi
    echo "Re-parse failed for ${case_name}: exit=${reparse_status}" >&2
    cat "${reparse_log}" >&2 || true
    echo "Artifacts kept in ${tmp_dir}" >&2
    exit 1
  fi
  if [[ -n "${expect_reparse_fail}" ]]; then
    echo "Expected re-parse failure for ${case_name} but it succeeded." >&2
    echo "Artifacts kept in ${tmp_dir}" >&2
    exit 1
  fi
fi

set +e
orig_status=0
sliced_status=0
if [[ "${skip_run}" -eq 0 ]]; then
  "${orig_bin}" >"${orig_out}"
  orig_status=$?
  "${sliced_bin}" >"${sliced_out}"
  sliced_status=$?
fi
set -e

if [[ "${orig_status}" -ne "${sliced_status}" ]]; then
  echo "Exit code mismatch for ${case_name}: orig=${orig_status}, sliced=${sliced_status}" >&2
  echo "--- orig stdout ---" >&2
  cat "${orig_out}" >&2 || true
  echo "--- sliced stdout ---" >&2
  cat "${sliced_out}" >&2 || true
  echo "Artifacts kept in ${tmp_dir}" >&2
  exit 1
fi

if [[ "${check_stdout}" -eq 1 && "${skip_run}" -eq 0 ]]; then
  if ! cmp -s "${orig_out}" "${sliced_out}"; then
    echo "Stdout mismatch for ${case_name}" >&2
    echo "--- orig stdout ---" >&2
    cat "${orig_out}" >&2 || true
    echo "--- sliced stdout ---" >&2
    cat "${sliced_out}" >&2 || true
    echo "Artifacts kept in ${tmp_dir}" >&2
    exit 1
  fi
fi

while IFS= read -r expected_absent; do
  [[ -z "${expected_absent}" ]] && continue
  if grep -Fq "${expected_absent}" "${sliced_c}"; then
    echo "Precision check failed for ${case_name}: found '${expected_absent}' in sliced output." >&2
    echo "Artifacts kept in ${tmp_dir}" >&2
    exit 1
  fi
done < <(sed -n 's@^// EXPECT-ABSENT: @@p' "${src}")

while IFS= read -r expected_present; do
  [[ -z "${expected_present}" ]] && continue
  if ! grep -Fq "${expected_present}" "${sliced_c}"; then
    echo "Presence check failed for ${case_name}: missing '${expected_present}' in sliced output." >&2
    echo "Artifacts kept in ${tmp_dir}" >&2
    exit 1
  fi
done < <(sed -n 's@^// EXPECT-PRESENT: @@p' "${src}")

rm -rf "${tmp_dir}"
echo "PASS ${case_name}"
