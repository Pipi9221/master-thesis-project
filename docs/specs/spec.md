# 基于 SA_Bugs 风格的 MR2/MR3 AST 插入器方案

## Summary

本方案按“科研实验原型”而不是“工程平台”来设计。核心目标不是统一所有工具实现，而是建立一套可复现实验协议：`seed -> MR 构造 -> same criterion -> slicing -> oracle -> violation -> confirmation`。

## 当前实现状态（2026-06-16）

当前 `project` 目录里的四个 MR 已经形成了可运行的统一实验入口，区别主要在 relation 构造阶段，而不是顶层使用方式。

| MR | 构造层 | Oracle 层 | 批量入口 | 当前判断 |
| --- | --- | --- | --- | --- |
| `MR1` | 已落地，走 `Creal` 适配器 | 已落地，`Frama` / `dg` 都可运行 | 已落地，`pipeline.run_experiment` 可直接串起来 | 已搭建完成 |
| `MR2` | 已落地，走 AST 插入器 | 已落地，`Frama` / `dg` 都可运行 | 已落地，`pipeline.run_experiment` 可直接串起来 | 已搭建完成 |
| `MR3` | 已落地，走 AST 插入器 | 已落地，`Frama` / `dg` 都可运行 | 已落地，`pipeline.run_experiment` 可直接串起来 | 已搭建完成 |
| `MR4` | 不需要 mutant 构造 | 已落地，`Frama` / `dg` 都可运行 | 已落地，`pipeline.run_experiment` 可直接串起来 | 已搭建完成 |

**种子源状态：**

| 种子源 | 描述 | 状态 |
| --- | --- | --- |
| `csmith` | Csmith 模糊生成 C 程序 | 已落地 |
| `creal` | Creal 语义保持种子/突变体对（仅 MR1） | 已落地 |
| `llm_files` | 从目录读取预生成的 LLM 种子文件 | 已落地 |
| `llm_online` | 在线调用外部 LLM 命令生成种子程序 | **新增** |

**LLM 在线种子筛选管道（§4.1.2）：**

新增 `--seed-source llm_online` 支持完整的种子筛选管道：
1. **提示词生成**：按 MR + 主题维度 + 附录 B 模板组合提示词
2. **LLM 调用**：通过外部命令（子进程模式）调用 LLM 生成候选 C 程序
3. **编译检查**：`clang -fsyntax-only` 语法验证
4. **运行可用性检查**：编译为可执行文件并验证 exit code 0
5. **语义特征筛选**：基于 5 个主题维度的正则模式匹配，验证程序覆盖目标 C 语言特性
6. **人工复核标记**：所有通过筛选的种子 `review_status` 为 `pending`，支持后续 `approved/rejected` 标记
7. **重试机制**：每个种子单个筛选阶段失败可自动重试（默认 3 次）

**MR2/MR3 构造层增强：**

- MR2/MR3 构造失败不再直接 `SystemExit`，改为自动重试循环（MR2 默认 20 次，MR3 默认 30 次）
- 构造后增加运行时行为检查（编译突变体并执行，验证 exit code 0）
- 增加种子-突变体行为等价性前提检查（编译运行双方，比较 exit code 和 stdout）

换句话说，当前真实状态不是”只有 `MR2/MR3` 有代码”，而是：

- `MR1` 到 `MR4` 都已经有可运行实现
- `MR1` 到 `MR4` 都已经接入统一总入口
- 当前顶层差异主要是 `MR1` 保持 Creal 特例、`MR4` 不产 mutant
- LLM 在线种子生成与筛选管道已实现并集成入 `generate_mutants` 入口

## 当前统一边界

按当前代码基线，可以把实验框架分成三层：

1. `case construction`
   - `MR1`：`Creal` 直接输出 `seed/mutant`
   - `MR2` / `MR3`：AST mutator 生成 `mutant.c + mutation_meta.json`
   - `MR4`：不生成 mutant，只消费 `seed + criteria`
2. `oracle execution`
   - `Frama` 和 `dg` 两条路径都支持 `MR1` 到 `MR4`
   - `MR1` 走值等价比较
   - `MR2` / `MR3` 走插入符号保留判定
   - `MR4` 走 `union(single-var slices) == multi-var slice` 集合比较
3. `batch experiment orchestration`
   - `pipeline.run_experiment` 已统一 `MR1`、`MR2`、`MR3`、`MR4`
   - 第一版主路径是单个 `tool + MR` 的直跑

难度评估：`总体中高难度，但可控`。  
原因是现在真正需要 AST 插入器的只有两类：

- `MR1`：继续由 `Creal` 提供语义改写
- `MR2`：AST 选点 + 插入与切片准则无关的数据流噪声
- `MR3`：AST 选点 + 插入位于恒不执行路径上的“准则相关”代码
- `MR4`：不需要构造突变体，单独实现切片协议比较

这意味着新项目不需要一开始就解决“全 MR 统一 AST 化”的高风险问题。  
推荐技术路线：`Clang LibTooling + C++ source-to-source mutation`，风格上参考 SA_Bugs，但不要建立在当前仓库的 Python 封装之上。当前仓库虽然有接入口，如 `sa_bugs_mutator.py` 和 `README.md`（位于上游 Slicing 仓库的 `mutation_generators/` 目录），但 `static_mutate` 本体并不在当前工作区，且现有封装没有 MR 感知的选点和插入规则，不适合作为后续新项目的实现基线。

## Key Changes

### 1. 新项目的研究原型边界

新项目只做四个子系统：

- `Seed Manager`
  - 接收 `Csmith` 和 `LLM` 两类种子
  - 输出统一 case 元数据：`seed_id`, `source`, `generator`, `criteria`
- `MR Mutator`
  - `MR1Adapter`：调用 Creal
  - `MR2AstMutator`：按 AST 规则插入无关数据流片段
  - `MR3AstMutator`：按 AST 规则插入不可达路径中的准则相关片段
- `Tool Adapter`
  - `FramaAdapter`：生成 sliced C，并支持后续运行/语句集提取
  - `DGAdapter`：生成 sliced IR，并支持 IR 级语句/指令集提取
- `Oracle Engine`
  - 逐 MR 判定是否违例
  - 保存违例证据和复现信息

不做统一底层表示，不强行把 Frama-C 和 dg 的 slice 结果做同构比较。统一的是实验协议与结果表结构。

### 2. AST 插入器的实现范围

`MR2` 的 AST 插入器目标：

- 在不影响切片准则的作用域中找到稳定插入点
- 插入独立的全局/局部变量、辅助函数、赋值链或纯副作用无关计算
- 保证插入代码可编译、可运行、且默认与准则无数据依赖连接
- 输出 `mutant.c + mutation_meta.json`

`MR3` 的 AST 插入器目标：

- 找到可容纳恒不执行路径的语句块或函数体插入点
- 构造如 `if (0) { ... }`、`switch(const)` 的死分支
- 在死分支内插入与切片准则“看起来相关”的代码
- 目标是检验 slicer 是否错误保留不可达路径中的相关语句

建议采用两阶段选点逻辑：

1. `AST candidate discovery`
   - 找函数体、复合语句块、主路径附近但不破坏语义的位置
2. `post-insertion validation`
   - 编译通过
   - 原程序与突变体行为一致
   - 失败则换下一个候选点

### 3. 推荐接口与产物

最小 CLI 设计：

- `generate_mutants --mr MR1 --seed-source creal --output-dir out/`
- `generate_mutants --mr MR2 --seed-source csmith|llm_files --mr-ast-tool <tool> --output-dir out/`
- `generate_mutants --mr MR3 --seed-source csmith|llm_files --mr-ast-tool <tool> --output-dir out/`
- `generate_mutants --mr MR2 --seed-source llm_online --llm-command "<cmd>" --llm-feature-focus "<focus>" --mr-ast-tool <tool> --output-dir out/`
- `generate_mutants --mr MR4 --seed-source llm_online --llm-command "<cmd>" --output-dir out/`
- `run_oracle --tool frama --mr MR1 --seed seed.c --mutant mutant.c --criteria criteria.json --mutation-meta mutation_meta.json`
- `run_oracle --tool frama --mr MR2 --seed seed.c --mutant mutant.c --criteria criteria.json --mutation-meta mutation_meta.json`
- `run_oracle --tool dg --mr MR3 --seed seed.c --mutant mutant.c --criteria criteria.json --mutation-meta mutation_meta.json`
- `run_oracle --tool dg --mr MR4 --seed seed.c --criteria criteria.json`

最小元数据设计：

- `criteria.json`
  - `program_point`
  - `variables`
  - `criterion_kind`
- `mutation_meta.json`
  - `mr`
  - `insertion_function`
  - `insertion_stmt_id`
  - `inserted_symbols`
  - `validation_status`
- `oracle_result.json`
  - `tool`
  - `mr`
  - `seed_id`
  - `violation`
  - `reason`
  - `artifacts`

### 4. 难度拆分

- `MR2 AST 插入器`：`中等`
  - 规则相对清晰，容易通过“独立噪声 + 编译/行为验证”兜底
- `MR3 AST 插入器`：`中高`
  - 难点在于“不可达但与准则相关”的构造要稳定，且不能误伤原语义
- `MR1`：`低`
  - 不走 AST，新项目只需要适配 Creal 接口
- `MR4`：`中等`
  - 难点在切片结果归一化与语句集合比较，不在突变器

综合判断：单人做科研原型是可行的，但前提是严格分阶段，先把 `MR2/MR3` 的 AST 插入器和 `FramaAdapter` 打通，再扩到 `dg`。

## 统一收口建议

如果后续要把四个 MR 统一成“一套实验框架”，建议按下面的顺序收口，而不是强行让四个 MR 共享同一个生成器。

### 1. 先统一 case bundle，而不是统一 mutation backend

先定义一份项目级 case contract：

- 通用必需项：`seed.c`、`criteria.json`、`seed_meta.json`
- 对 `MR1/MR2/MR3`：再要求 `mutant.c`、`mutation_meta.json`
- 对 `MR4`：明确 `requires_mutant = false`，不要求 `mutant.c`
- 所有 MR 都统一写 `relation_meta.json` 或在 manifest 中写清：
  - `mr`
  - `relation_kind`
  - `requires_mutant`
  - `seed_source`
  - `generator_backend`

这样 `MR4` 就不再像“特例”，而是“同协议下的不产 mutant 的 relation”。

### 2. 把统一入口从“先生成 mutant”改成“先解析 relation”

当前 `run_experiment` 的默认假设是：先生成或读取 mutant，再跑 oracle。  
后续更合理的入口应该是：

- `run_experiment --mr MR1`
  - 先走 `Creal` 生成
  - 再跑 oracle
- `run_experiment --mr MR2/MR3`
  - 先走 AST mutator
  - 再跑 oracle
- `run_experiment --mr MR4`
  - 跳过 mutant generation
  - 直接按多准则切片协议跑 oracle

也就是说，统一入口要分发到“relation handler”，而不是分发到“mutant generator”。

### 3. 统一 manifest 语义

建议把根 manifest 明确成项目级实验清单，而不是默认只有 mutant case：

- `kind`
- `mr`
- `relation_kind`
- `requires_mutant`
- `case_count`
- `tools`
- `cases[*].seed_path`
- `cases[*].criteria_path`
- `cases[*].mutant_path`
- `cases[*].mutation_meta_path`
- `cases[*].oracle_runs`

这样 `MR4` 可以自然复用同一个 `experiment_manifest.json`，只是它的 `mutant_path` 和 `mutation_meta_path` 为空。

### 4. 最后再统一 experiment 目录布局

目录层建议显式按 `MR1` 到 `MR4` 分仓：

- `experiment/mr1/`
- `experiment/mr2/`
- `experiment/mr3/`
- `experiment/mr4/`

每个目录都只保存 batch 输入、manifest 和结果索引，不把“是否有 mutant”编码在目录结构里。

## Test Plan

必须覆盖以下测试：

- `MR2` 基本成功例
  - 插入无关数据流后，程序编译运行成功，行为不变
  - 若切片保留了插入噪声，则判为违例
- `MR3` 基本成功例
  - 插入恒不执行分支后，程序编译运行成功，行为不变
  - 若切片保留了死路径相关语句，则判为违例
- `选点回退`
  - 候选插入点导致编译失败时，系统应自动尝试下一个点
- `工具适配一致性`
  - 同一 case 能分别走通 `Frama-C` 和 `dg` 的独立判定流程
- `MR4 协议测试`
  - `union(single-var slices) == multi-var slice` 的集合比较逻辑正确
- `证据保存`
  - 违例 case 必须落盘原程序、突变体、切片结果、命令和判定理由

验收标准：

- `MR2/MR3` 每类至少能稳定处理一批种子而非只对少数手工例子有效
- 插入失败、编译失败、无合法插入点都要有明确状态码和日志
- 所有 MR 判定结果必须可复现，不能只输出“发现 bug”而无中间证据

## Assumptions

- 新项目独立创建，不延续当前 `Slicing` 仓库的实现结构，只借鉴其实验经验
- AST 后端固定使用 `Clang LibTooling`
- 工具链版本默认优先与 `dg` 对齐，建议统一到 `LLVM/Clang 14`，除非后续环境确认有更稳定版本
- `MR1` 继续由 `Creal` 负责，不纳入 AST 插入器范围
- `MR4` 作为切片协议单独实现，不强行纳入“突变体生成器”框架
- Frama-C 与 dg 不做统一结果表示，只做统一实验协议和统一结果记录格式
