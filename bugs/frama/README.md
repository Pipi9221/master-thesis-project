# bugs/frama/ 目录说明

Frama-C 30.0 (Zinc) 切片工具的 bug 数据库，数据来源 `/home/cyuan/projects/Slicing/`。

---

## 目录结构与用途

```
bugs/frama/
├── README.md                    ← 本文件（目录说明）
│
├── confirmed/                   ★ 核心：17 个确认的真 bug（论文用）
│   ├── README.md                # 完整索引表（分类、严重度、MR 覆盖、根因）
│   ├── 2735-ub-evaluation-order/
│   ├── 2736-loop-nontermination/
│   ├── 2737-init-loss-array/
│   ├── ...（共 17 个目录）
│   └── 2753-016-loop-inv-nyi/
│
├── issues/                      按 C 语言特性分类的 16 个 issue（001-016）
│   ├── 001-fnptr-undefined-symbols/   # 真 bug / 编译失败
│   ├── 002-main-void/                 # 设计决定（非 bug）
│   ├── 004-vla-support/               # 真 bug（对应 2741）
│   ├── 010-gnu-constructor-dropped/   # 真 bug（对应 2753-010）
│   ├── ...（共 16 个目录）
│   └── 016-slicing-term-lval-deps/    # 真 bug（对应 2753-016）
│
├── defects/                     蜕变测试批次实验原始目录
│   ├── defect/                  # 最小复现用例（bug1-bug6）
│   ├── test1_数组初始化丢失/      # 对应 2737
│   ├── test5_函数被错误切片/      # 对应 2749
│   ├── test26-未初始化导致除零/   # 对应 2747
│   ├── test34_切片后运行退出/     # 对应 2739
│   ├── test80_表达式丢失/         # 对应 2746
│   ├── test87_源程序和突变体.../  # 对应 2735/2751
│   ├── debug_deadloop_test47/    # 对应 2736
│   └── ...（共 17 个批次目录）
│
├── test/                        独立测试用例和运行脚本
│   ├── cases/                   # 70+ C 测试用例文件
│   ├── metamorphic/             # 蜕变测试用例
│   ├── run_case.sh              # 单用例运行脚本
│   └── run_all.sh               # 批量运行脚本
│
├── paper-verification/          2026-03-27 论文验证结果
│   ├── results/
│   │   ├── PAPER_MASTER_BUG_TABLE_18.md   # 18 项追踪表（17 真 bug + 1 not-a-bug）
│   │   ├── *_ROOT_CAUSE_ANALYSIS.md       # 各 bug 根因分析
│   │   ├── SUMMARY_WITH_CAUSES.md         # 14-issue 汇总
│   │   └── gitlab_issues_pipi9221.json    # 已提交 GitLab 的 issue
│   └── submitted-issues/                  # 提交材料
│
├── BUG_CLASSIFICATION.md        16 issue 分类报告（真 bug / 设计决定 / 已知限制）
├── BUG_REPORT.md                最初的 bug 报告
├── TRAE.md                      实验目的和方法论
└── SLICE_ONE_SHOT_CONFIRMED_BUGS_2026-03-09_EN.md  一次提交确认清单
```

---

## 三个维度之间的关系

```
┌─────────────────────────────────────────────────────────┐
│  confirmed/  (17 bugs)  ← 论文主表                        │
│  ┌──────────────┐  ┌──────────────────┐  ┌────────────┐ │
│  │ 2735-2751    │  │ 2753-007/010/    │  │            │ │
│  │ (13 bugs)    │  │ 015/016 (4 bugs) │  │            │ │
│  │ 来源:        │  │ 来源:            │  │            │ │
│  │ defects/     │  │ issues/          │  │            │ │
│  └──────────────┘  └──────────────────┘  └────────────┘ │
└─────────────────────────────────────────────────────────┘
         ↑                      ↑
    defects/              issues/
    (批次实验)            (C 特性分类, 16 issues)
    ├─ 13 个对应 confirmed
    ├─ 其余为中间产物
    └─ defect/ 为最小复现

    issues/
    ├─ 4 个对应 confirmed (007/010/015/016)
    ├─ 5 个额外真 bug (001/004/005/011/013)
    └─ 7 个非 bug (设计决定/已知限制)
```

---

## 使用指南

| 场景 | 从哪里开始 |
|------|-----------|
| **论文写作** — 需要 bug 列表、分类、根因 | `confirmed/README.md` |
| **深入某个 bug** — 看源码、切片产物、复现步骤 | `confirmed/<bug-id>/` |
| **了解根因** — 源码级分析 | `paper-verification/results/*_ROOT_CAUSE_ANALYSIS.md` |
| **运行测试** — 复现所有 bug | `tooling/test_frama_bugs.py` |
| **C 语言特性测试** — 独立用例 | `test/cases/` |
| **查看已提交的 GitLab issue** | `paper-verification/results/gitlab_issues_pipi9221.json` |
| **理解 Frama-C 源码 bug 位置** | `issues/*/notes/SOURCE_ANALYSIS.md` |

---

## Bug 数量澄清

- **17** — confirmed/ 中的真 bug（论文主表）
- **16** — issues/ 中的 issue（9 真 bug + 7 非 bug）
- **18** — 论文追踪总数（17 真 bug + 2734 not-a-bug）
- 三个数字不同是因为分类维度不同，没有矛盾
