# Bug Collection

Confirmed bugs discovered during metamorphic testing of C program slicing tools.

- **Frama-C: 17 bugs** (from `frama_paper_master_table.csv`)
- **DG/llvm-slicer: 26 bugs** (from `dg_paper_bug_catalog.csv` + 2 newly confirmed)
- **Total: 43 bugs**

## Structure

```
bugs/
├── frama/              # 17 Frama-C bugs (2735-2751 + 2753-xxx)
│   ├── 2735-g_371-unsequenced-write/
│   ├── 2736-dead-loop/
│   ├── 2737-l_4351-init-loss/
│   ├── 2739-pointer-init-crash/
│   ├── 2740-function-pointer-rename/
│   ├── 2741-vla-runtime-stub/
│   ├── 2742-varargs-type-system/
│   ├── 2746-init-expression-dropped/
│   ├── 2747-uninit-div-zero/
│   ├── 2748-init-plus-pointer-chain/
│   ├── 2749-function-slicing-dataflow-break/
│   ├── 2750-unused-global-over-preserved/
│   ├── 2751-criterion-over-preserved/
│   ├── 2753-007-atomic-symbols/
│   ├── 2753-010-constructor-dropped/
│   ├── 2753-015-pid_t-visibility/
│   └── 2753-016-term-lval-abort/
├── dg/                 # 26 DG bugs
│   ├── U01-U16/        # strict unreported (16)
│   ├── O01-O03/        # overlap risk (3)
│   ├── S01-S05/        # already submitted upstream (5)
│   ├── N01/            # Csmith ConstExpr missing-value crash
│   └── N02/            # MR3-F1 control_unreachable_payload_retained
└── catalogs/           # Classification CSVs and tracking docs
```

## Sources

| Source | Count | Reference |
|--------|-------|-----------|
| Frama-C bugs | 17 | `catalogs/frama_paper_master_table.csv` |
| DG bugs | 26 | `catalogs/dg_paper_bug_catalog.csv` + `dg_final_counting_decision_20260405.md` |
