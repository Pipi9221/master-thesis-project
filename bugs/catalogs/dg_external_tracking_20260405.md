# dg 外部跟踪信息对账底稿（2026-04-05）

本底稿用于支撑论文附录中的 “\textit{dg} 已提交问题的外部跟踪信息”。

## 公共 issue 范围

根据用户补充信息，\textit{dg} 当前已有 5 个提交至 GitHub 公共仓库、但尚未被上游确认的问题：

| 上游编号 | 当前状态 | 公开链接 |
|---|---|---|
| 471 | 已提交 | https://github.com/mchalupa/dg/issues/471 |
| 472 | 已提交 | https://github.com/mchalupa/dg/issues/472 |
| 473 | 已提交 | https://github.com/mchalupa/dg/issues/473 |
| 474 | 已提交 | https://github.com/mchalupa/dg/issues/474 |
| 475 | 已提交 | https://github.com/mchalupa/dg/issues/475 |

## 本地统一编号集合

当前可以稳定对应到论文统一编号表中 “已提交” 状态的 \textit{dg} 条目为 37--41：

| 统一编号 | 主关系 | 当前状态 | 问题概述 |
|---|---|---|---|
| 37 | MR1 | 已提交 | `switch` 后继关系处理会触发崩溃 |
| 38 | MR1 | 已提交 | `vector insertelement` 相关 IR 会触发崩溃 |
| 39 | MR1 | 已提交 | `COMDAT` 相关无效 IR 会触发崩溃 |
| 40 | MR1 | 已提交 | `dbg.value` 相关 IR 会触发崩溃 |
| 41 | MR1 | 已提交 | `noreturn` / `unreachable` 处理会导致切片错误 |

## 说明

- 当前能够稳定确认的是：GitHub 上存在 `#471--#475` 这 5 个已提交问题；论文统一编号表中存在 5 个 \textit{dg} “已提交”条目，即 37--41。
- 现有本地归档尚未保存“统一编号 37--41 与 GitHub `#471--#475` 的逐条一一回填映射”，因此论文附录只并列给出公共 issue 范围与本地问题集合，不强行写入可能失真的精确对应。
- 这 5 个条目当前都不并入本文对 \textit{dg} 已确认真实 bug family 的统计总数。
