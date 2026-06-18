#!/usr/bin/env bash
# Batch experiment launcher for MR slicing-oracle pipeline.
#
# Usage:
#   source ../.env
#   ./run_batch.sh frama          # all 4 MRs, frama-c only
#   ./run_batch.sh dg             # DG only
#   ./run_batch.sh all            # both tools, all MRs
#   ./run_batch.sh frama MR1 MR4  # specific MRs
#   ./run_batch.sh frama MR1 -- --count 50 --rng-seed-base 100
#
# Output: experiment/batch-run/<tool>/<mr>/experiment_manifest.json

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
PROJECT_DIR="$(dirname "$SCRIPT_DIR")"
OUTPUT_BASE="${PROJECT_DIR}/experiment/batch-run"

# ---------------------------------------------------------------------------
# Resolve tool(s)
# ---------------------------------------------------------------------------
TOOL="${1:-}"
shift 2>/dev/null || true

case "${TOOL:-}" in
    frama|dg) TOOLS="$TOOL" ;;
    all)      TOOLS="frama,dg" ;;
    *)
        echo "Usage: $0 {frama|dg|all} [MR1 MR2 MR3 MR4] [-- extra args]"
        exit 1
        ;;
esac

# ---------------------------------------------------------------------------
# Resolve MR list
# ---------------------------------------------------------------------------
MRS=()
while [[ $# -gt 0 && ! "$1" =~ ^-- ]]; do
    MRS+=("$1")
    shift
done
[[ ${#MRS[@]} -eq 0 ]] && MRS=(MR1 MR2 MR3 MR4)

# Consume optional "--"
[[ "${1:-}" == "--" ]] && shift
EXTRA_ARGS="$*"

# ---------------------------------------------------------------------------
# Run experiments
# ---------------------------------------------------------------------------
PASS=0
FAIL=0

run_one() {
    local MR="$1" SEED="$2" OUTPUT_DIR="$3"
    local TMPFILE
    TMPFILE=$(mktemp) || { echo "  FAIL: mktemp error"; return 1; }

    PYTHONPATH="${PROJECT_DIR}/src" python3 -m pipeline.run_experiment \
        --seed-source "$SEED" \
        --mr "$MR" \
        --tools "$TOOLS" \
        --output-dir "$OUTPUT_DIR" \
        --count 1 \
        $EXTRA_ARGS \
        >"$TMPFILE" 2>&1
    local RC=$?

    if [[ $RC -ne 0 ]]; then
        echo "  FAIL: pipeline exited with code $RC"
        tail -3 "$TMPFILE"
        rm -f "$TMPFILE"
        return 1
    fi

    python3 -c "
import json, sys

raw = open('$TMPFILE').read()
# The pipeline may print warnings before the JSON manifest.  Strip everything
# up to the first '{' so we can parse the manifest cleanly.
json_start = raw.find('{')
if json_start == -1:
    print('  FAIL: no JSON output from pipeline')
    print('  Pipeline output:', raw[:300] if raw else '(empty)')
    sys.exit(1)
d = json.loads(raw[json_start:])

cases = d.get('cases', [])
failed = d.get('failed_cases', [])
if failed:
    for fc in failed:
        print(f'  FAIL: {fc.get(\"seed_id\",\"?\")} — {fc.get(\"error\",\"?\")[:120]}')
    sys.exit(1)
if not cases:
    print('  FAIL: no cases generated')
    sys.exit(1)
for c in cases:
    for tool, r in c.get('oracle_runs', {}).items():
        mode = r.get('mode', '')
        if mode == 'multi_run':
            sub = r.get('sub_runs', [])
            ok = sum(1 for s in sub if s.get('status') == 'PASS')
            print(f'  [{tool}] multi_run: {ok}/{len(sub)} PASS')
        else:
            status = r.get('status', 'UNKNOWN')
            print(f'  [{tool}] {status} — {r.get(\"reason\",\"?\")}')
"
    local PRC=$?
    rm -f "$TMPFILE"
    return $PRC
}

for MR in "${MRS[@]}"; do
    case "$TOOL" in
        dg) SEED="llm_online" ;;
        *)
            case "$MR" in
                MR1) SEED="creal" ;;
                *)   SEED="csmith" ;;
            esac
            ;;
    esac

    OUTPUT_DIR="${OUTPUT_BASE}/${TOOL}/${MR}"
    echo "=== ${TOOL} ${MR} (seed=${SEED}) → ${OUTPUT_DIR} ==="

    if run_one "$MR" "$SEED" "$OUTPUT_DIR"; then
        ((PASS++))
    else
        ((FAIL++))
    fi
    echo ""
done

echo "=== Done: ${PASS} passed, ${FAIL} failed ==="
[[ $FAIL -eq 0 ]]
