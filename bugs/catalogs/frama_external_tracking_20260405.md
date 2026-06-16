# Frama-C 外部跟踪信息对账底稿（2026-04-05）

本底稿用于支撑论文附录中的 “Frama-C 公开 issue 与补充提交档案的跟踪信息”。当前只整理 Frama-C；`dg` 的公开 issue 链接另行映射。

## 公开 GitLab issue

| 统一编号 | 当前状态 | 主关系 | 上游编号 | 上游状态 | 公开链接 |
|---|---|---|---|---|---|
| 1 | 已确认 | MR1 | 2735 | closed | https://git.frama-c.com/pub/frama-c/-/issues/2735 |
| 2 | 已确认 | MR1 | 2736 | opened | https://git.frama-c.com/pub/frama-c/-/issues/2736 |
| 3 | 已确认 | MR1 | 2737 | closed | https://git.frama-c.com/pub/frama-c/-/issues/2737 |
| 4 | 已确认 | MR1 | 2739 | closed | https://git.frama-c.com/pub/frama-c/-/issues/2739 |
| 5 | 已确认 | MR1 | 2740 | closed | https://git.frama-c.com/pub/frama-c/-/issues/2740 |
| 6 | 已确认 | MR1 | 2741 | closed | https://git.frama-c.com/pub/frama-c/-/issues/2741 |
| 7 | 已确认 | MR1 | 2742 | closed | https://git.frama-c.com/pub/frama-c/-/issues/2742 |
| 8 | 已确认 | MR1 | 2746 | closed | https://git.frama-c.com/pub/frama-c/-/issues/2746 |
| 9 | 已确认 | MR1 | 2747 | closed | https://git.frama-c.com/pub/frama-c/-/issues/2747 |
| 10 | 已确认 | MR1 | 2748 | closed | https://git.frama-c.com/pub/frama-c/-/issues/2748 |
| 11 | 已确认 | MR1 | 2749 | closed | https://git.frama-c.com/pub/frama-c/-/issues/2749 |
| 12 | 已确认 | MR4 | 2750 | closed | https://git.frama-c.com/pub/frama-c/-/issues/2750 |
| 13 | 已确认 | MR3 | 2751 | closed | https://git.frama-c.com/pub/frama-c/-/issues/2751 |

## 补充问题档案

| 统一编号 | 当前状态 | 主关系 | 档案编号 | 档案标识 |
|---|---|---|---|---|
| 14 | 已提交 | MR1 | 2753-007 | `issues/007-c11-atomics-undefined-symbols` |
| 15 | 已提交 | MR1 | 2753-010 | `issues/010-gnu-constructor-dropped` |
| 16 | 已提交 | MR1 | 2753-015 | `issues/015-posix-pid_t-missing` |
| 17 | 已提交 | MR1 | 2753-016 | `issues/016-slicing-term-lval-deps` |

## 说明

- 2734 在外部系统中被判定为 `not_a_bug`，未进入正文统计，因此未列入附录跟踪表。
- 公开 issue 编号与链接来自 `$SLICING_REPO/paper-verification-2026-03-27/results/gitlab_issues.csv`。
- 统一编号与主关系映射来自 `$THESIS_REPO/chapters/appendix-chapter5-defect-list.tex` 和 `$THESIS_DATA/05-4-overall-defects/frama_paper_master_table.csv`。
- 用户已补充 `dg` 公共 issue 范围为 `#471` 至 `#475`，后续需要再与统一编号 37--41 做一一映射。
