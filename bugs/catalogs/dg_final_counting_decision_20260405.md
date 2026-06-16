# dg Final Counting Decision (2026-04-05)

本文件用于冻结 `dg` 在论文后续写作中的最终统计口径。在其他章节和表格尚未同步前，以本文件为准，不直接沿用旧的 `27` 条目级统计说法。

## Final Decision

### Family-Level Final Count

- 已并入目录并可直接用于论文主统计的真实 bug family：`24`
- 新增确认但尚未并入目录的真实 bug family：`2`
  - `ConstantExpr pointer-compare missing-value crash family`
  - `MR3-F1 / control_unreachable_payload_retained`
- 因而，`dg` 的最终 family 级真实 bug 总数定为：`26`

### Non-Bug / Excluded Items

- explicit unsupported family：`1`
  - `ConstantExpr pointer-compare explicit unsupported family`
- warning-only item：`1`
  - manual IR probe warnings (`UNHANDLED insertvalue`, aggregate-return warning)

### Instance-Level Recheck Count

- full rerun 总 case 数：`29`
- 其中 `existing_functionality_error` case：`27`
- 其中 `explicit_unsupported_limitation` case：`2`

补充说明：

- 这里的 full rerun 统计只对应 2026-04-02 那一批目录化复跑
- 它**不包含** 2026-04-05 后续确认的 `MR3-F1` 手工/矩阵样例
- 因此，实例级 `27` 与最终 family 总数 `26` 不是同一口径

说明：`27` 只表示实例级复跑条目数，不表示 `27` 个独立 bug family。该数的来源是：

- 目录中 `24` 个已复现 family
- `+ 3` 个来自同一 `Csmith missing-value family` 的复现实例

因此：

- `27 != 27 families`
- `27 = 24 catalog families + 3 instances of 1 new family`

## Source of Each Count

### Catalog-Aligned Counts

来自：

- `overall_counting_options.csv`
- `dg_paper_bug_catalog.csv`

对应拆分：

- strict unreported families：`16`
- overlap-risk families：`3`
- already-submitted-related families：`5`
- catalog 内已复现 family 合计：`24`

### Newly Confirmed Csmith Family

来自：

- `dg_recheck_classification_20260402.csv`
- `dg-full-rerun-20260402/dg_full_recheck_20260402.csv`

分类结论：

- `ConstantExpr pointer-compare missing-value crash family (seed_37, seed_68, seed_80)`
- 当前应视为 `1` 个新增真实 bug family，而不是 `3` 个不同 bug

### Explicit Unsupported Family

来自：

- `dg_recheck_classification_20260402.csv`
- `dg-full-rerun-20260402/dg_full_recheck_20260402.csv`

分类结论：

- `ConstantExpr pointer-compare explicit unsupported family (seed_40, seed_59)`
- 日志包含直接 `Unsupported ConstantExpr` 信号
- 该 family 不计入 bug 总数

## Independent Verification of the New Csmith Family

2026-04-05 进行了独立复跑验证。复跑环境：

- `clang-14`
- `lli-14`
- `llvm-slicer`
- include path: `/usr/include/csmith`
- slicing criterion: `printf`

复跑结果如下：

| seed | original program | unsliced bitcode | slicer result | key signal |
| --- | --- | --- | --- | --- |
| `37` | PASS | PASS | abort | `missing value in graph` |
| `68` | PASS | PASS | abort | `missing value in graph` |
| `80` | PASS | PASS | abort | `missing value in graph` |

三条实例具有一致模式：

- 原程序可编译、可运行
- unsliced LLVM bitcode 可执行
- `llvm-slicer -c printf` 在切片阶段直接 abort
- 错误均落在 `LLVMPointerGraphBuilder::getOperand()` 与 `createConstantExpr()` 路径
- 共同指向“指针比较派生的 `ConstantExpr` / `icmp` / `zext` 值在图构建阶段被错误处理”

因此，本文件将其冻结为：

- `1` 个新增真实 bug family
- `3` 个稳定复现实例

## Newly Confirmed MR3 Family

来自：

- `05-2-dg-mr23-analysis-20260405.md`
- `05-2-dg-mr3-family-instance-catalog-20260405.md`
- `05-2-dg-mr3-family-instance-catalog-20260405.csv`

分类结论：

- `MR3-F1 / control_unreachable_payload_retained`
- 当前以 `1` 个新增真实 bug family 计入总数
- 当前已确认 `16` 个不重复实例
- 当前只在 family 内部区分 `2` 个子类，而不拆成多个独立 bug family：
  - `contradiction_dead_path_like`：`12`
  - `dead_switch_case_like`：`4`

说明：

- 这批实例的共同现象是“控制上不可达的插入负载在切片后仍被保留”
- 现阶段更稳妥的做法是把它们视为同一 `MR3` family 的不同触发形态
- 因而它应当按 `+1 family` 计入，而不是按 `+16` 计入

## Writing Rules for Later Thesis Updates

- 当正文采用“论文主目录 / 附录统一编号 / 已并入问题表”视图时，`dg` 仍写 `24`
- 当正文需要给出“最终内部确认的真实 bug family 总数”时，`dg` 写 `26`
- `25` 只是“纳入 Csmith 新 family 但尚未纳入 MR3 family”的中间统计，不再作为最终写法使用
- 不再把 `27` 写成 `dg` 的 bug family 总数
- `27` 只允许在“实例级 full rerun 条目数”语境下出现
- `ConstantExpr unsupported family` 不计入 bug 总数

## Seed-Source Note

当前 `24` 个 catalog family 的原始 `Csmith/LLM` seed-source 轨迹并未完整保留，因此后续正文如需写 `dg` 的种子来源贡献，应单独说明这是后验归纳视图，而不是完整保留的原始实验日志视图。
