# DG Recheck Classification (2026-04-02)

??????????????????? dg ????????????????? bug / overlap-risk / ????? / ????? / ???????????

?????
- ?? 16 ? strict precision families ??????? bug????????????? `Unsupported` / `NYI` ???
- overlap-risk ???????????????????
- ?? Csmith ????`ConstantExpr` ???? family ???????
  1. ?? `Unsupported ConstantExpr` ????????????/????
  2. `missing value in graph` ??????????? bug??
- `UNHANDLED insertvalue` ???? warning ???????????????? bug?

| id | group | item | recheck_bucket | explicit_unsupported_signal | paper_handling | root_cause_summary |
| --- | --- | --- | --- | --- | --- | --- |
| 1 | precision | BUG-MEMMOVE-SOURCE | confirmed_bug | no | strict_counted | implemented memmove path still loses required source/data dependence, causing orig PASS / sliced FAIL |
| 2 | precision | BUG-STRNCAT-SIDEEFFECT | confirmed_bug | no | strict_counted | strncat side-effect call can be removed while assertion-dependent state is kept |
| 3 | precision | BUG-SETJMP-LONGJMP-MISSLICE | confirmed_bug | no | strict_counted | setjmp/longjmp control-transfer dependence is missliced, leading to assertion failure |
| 4 | precision | BUG-CALLBACK-ESCAPE-SYMBOL-LOSS | confirmed_bug | no | strict_counted | callback side effects escaping through external APIs are not preserved |
| 5 | precision | BUG-CONSTRUCTOR-INIT-DROPPED | confirmed_bug | no | strict_counted | constructor/global ctor initialization path is dropped, changing program state before main |
| 6 | precision | BUG-CMPXCHG-LOCAL-INIT-MISSLICE | confirmed_bug | no | strict_counted | local initialization before cmpxchg is not preserved |
| 7 | precision | BUG-BCOPY-LEN-SIDEEFFECT | confirmed_bug | no | strict_counted | bcopy-related memory update/length effect is removed by slicing |
| 8 | precision | BUG-EXPLICIT-BZERO-DROPPED | confirmed_bug | no | strict_counted | explicit_bzero state-changing effect is removed by slicing |
| 9 | precision | BUG-MEMFROB-LEN-SIDEEFFECT | confirmed_bug | no | strict_counted | memfrob side effect is removed, changing observable memory state |
| 10 | precision | BUG-QSORT-CALL-DROPPED | confirmed_bug | no | strict_counted | qsort call and its sorting effect can be sliced away |
| 11 | precision | BUG-SWAB-CALL-DROPPED | confirmed_bug | no | strict_counted | swab call is dropped although later observable state still depends on it |
| 12 | precision | BUG-STPCPY-STPNCPY-DISCARD-RET | confirmed_bug | no | strict_counted | write effects of stpcpy/stpncpy are not retained when return value is discarded |
| 13 | precision | BUG-WCHAR-MUTATOR-DROPPED | confirmed_bug | no | strict_counted | wide-character mutator API effects are removed by slicing |
| 14 | precision | BUG-SYSAPI-OUTBUF-DROPPED | confirmed_bug | no | strict_counted | output-buffer side effects of system APIs are removed, leaving buffers unchanged |
| 15 | precision | BUG-ERRNO-SIDEEFFECT-DROPPED | confirmed_bug | no | strict_counted | errno-related side effects are not preserved when return values are discarded |
| 16 | precision | BUG-STATEFUL-API-SIDEEFFECT-DROPPED | confirmed_bug | no | strict_counted | stateful libc/POSIX setup calls are sliced away, breaking later reads of hidden process state |
| 17 | fatal-overlap | BUG-INDIRECT-GOTO-CRASH | overlap_risk | no | overlap_risk_excluded | tool aborts on large indirect goto / indirectbr-style control-flow; still treated as overlap-risk |
| 18 | precision-overlap | BUG-INLINE-ASM-MEM-SIDEEFFECT | overlap_risk | no | overlap_risk_excluded | inline-asm memory side effects are not preserved, but currently kept in overlap-risk bucket |
| 19 | precision-overlap | BUG-VA-COPY-MISSLICE | overlap_risk | no | overlap_risk_excluded | va_copy vararg path is missliced and can crash, but currently overlaps with old upstream context |
| 20 | fatal-upstream | BUG-SWITCH-SUCCESSORS-CRASH | already_submitted_related | no | already_submitted_excluded | large switch CFG can trigger slicer abort; excluded from strict count due upstream relation |
| 21 | fatal-upstream | BUG-VECTOR-INSERTELEMENT-CRASH | already_submitted_related | no | already_submitted_excluded | vector insertelement path can crash slicer; excluded from strict count due upstream relation |
| 22 | fatal-upstream | BUG-COMDAT-INVALID-IR | already_submitted_related | no | already_submitted_excluded | C++ COMDAT/unwind slicing can produce invalid IR; excluded from strict count due upstream relation |
| 23 | fatal-upstream | BUG-DBG-VALUE-CRASH | already_submitted_related | no | already_submitted_excluded | criterion on llvm.dbg.value crashes in addDefUseEdges; excluded from strict count due upstream relation |
| 24 | precision-upstream | BUG-NORETURN-UNREACHABLE | already_submitted_related | no | already_submitted_excluded | noreturn/unreachable path is missliced into reachable unreachable; excluded from strict count due upstream relation |
| 25 | csmith-recheck | ConstantExpr pointer-compare explicit unsupported family (seed_40, seed_59) | explicit_unsupported_limitation | yes | explicit_unsupported_excluded | raw logs explicitly report Unsupported ConstantExpr on pointer-comparison ConstantExpr; this should be tracked as explicit unsupported/limitation, not mixed into ordinary bug counts |
| 26 | csmith-recheck | ConstantExpr pointer-compare missing-value crash family (seed_37, seed_68, seed_80) | confirmed_internal_bug_new_recheck | no | new_recheck_pending | dg mis-handles pointer-comparison-derived ConstantExpr/zext values, eventually aborting with missing value in graph; no explicit unsupported marker is emitted |
| 27 | probe-warning | manual IR probe warnings (UNHANDLED insertvalue, aggregate-return warning) | non_bug_warning | warning_only | not_counted | warnings were observed in manual probes but no semantic regression or stable crash was reproduced, so they are not counted as bugs |
