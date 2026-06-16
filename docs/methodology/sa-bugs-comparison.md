# SA_Bugs 对照与统一入口草案

## 1. 目的

这份文档用于回答两个问题：

- `SA_Bugs` 是如何组织“多工具、多批次、分阶段后处理”实验流程的
- 当前 `project` 可以从中借鉴什么，以及不应照搬什么

这里的对照对象是：

- 上游仓库：[SA_Bugs](https://github.com/Geoffrey1014/SA_Bugs)
- 当前工作区参考快照：
  - [tools.py]($PROJECT/artifacts/SA_Bugs_ref/tools.py)
  - [config.py]($PROJECT/artifacts/SA_Bugs_ref/config.py)
  - [fuzz_sa_fp.py]($PROJECT/artifacts/SA_Bugs_ref/fuzz_sa_fp.py)
  - [fuzz_sa_fn.py]($PROJECT/artifacts/SA_Bugs_ref/fuzz_sa_fn.py)
  - [fuzz_sa_eval.py]($PROJECT/artifacts/SA_Bugs_ref/fuzz_sa_eval.py)

## 2. SA_Bugs 的总体组织方式

`SA_Bugs` 更接近一个“实验运营脚本集合”，而不是严格分层的研究框架。

它的第一层分流维度不是 `MR`，而是“实验类型”：

- `fuzz-fp`
  - 面向误报发现
- `fuzz-fn`
  - 面向漏报发现
- `fuzz-eval`
  - 面向 `__analyzer_eval` / `clang_analyzer_eval` 语义检查

总控入口是 [tools.py]($PROJECT/artifacts/SA_Bugs_ref/tools.py#L656)，通过子命令把实验拆成多个阶段：

- 创建工作目录
- 并发拉起 fuzz worker
- 检查 warning line 是否可达
- 生成 reduce 脚本
- 运行 `creduce`

它的第二层分流维度是 `analyzer`：

- `gcc`
- `clang`
- `pinpoint`

第三层才是 `checker`：

- `npd`
- `oob`
- `dz`
- `sco`
- `upos`

也就是说，它的主心骨是：

`experiment type -> analyzer -> checker -> post-processing`

而不是：

`relation(MR) -> case -> oracle -> evidence`

## 3. SA_Bugs 的典型运行流程

### 3.1 批次创建

[create_fuzzing_place]($PROJECT/artifacts/SA_Bugs_ref/tools.py#L115) 会：

- 创建带时间戳的批次目录
- 创建多个 `fuzz_i/` 子目录
- 把脚本、配置文件和工具辅助文件复制进去
- 让每个子目录成为一个独立 worker

这一步解决的是“实验批次隔离”和“多进程并发”。

### 3.2 生成程序并调用分析器

在 `fuzz_sa_fp.py` 和 `fuzz_sa_eval.py` 里，每一轮都会：

1. 用 `csmith` 生成 `test_<n>.c`
2. 调指定 analyzer
3. 解析输出报告
4. 根据 checker 或语义结果把 case 分类落盘

可参考：

- [analyze_with_gcc]($PROJECT/artifacts/SA_Bugs_ref/fuzz_sa_fp.py#L18)
- [analyze_with_clang]($PROJECT/artifacts/SA_Bugs_ref/fuzz_sa_fp.py#L48)
- [analyze_with_pinpoint]($PROJECT/artifacts/SA_Bugs_ref/fuzz_sa_fp.py#L76)
- [generate_code]($PROJECT/artifacts/SA_Bugs_ref/fuzz_sa_eval.py#L194)

### 3.3 后处理和筛选

`SA_Bugs` 不把所有决策都压到一次运行里，而是拆成多个可重复的后处理阶段：

- `check-reach`
  - 检查 warning line 是否可达
- `gen-reduce`
  - 为筛出的 case 生成 reduce 脚本
- `run-reduce`
  - 调 `creduce` 缩减 case

对应入口：

- [check_reachable]($PROJECT/artifacts/SA_Bugs_ref/tools.py#L170)
- [gen_reduce]($PROJECT/artifacts/SA_Bugs_ref/tools.py#L414)
- [run_reduce]($PROJECT/artifacts/SA_Bugs_ref/tools.py#L543)

### 3.4 配置集中化

环境依赖、工具路径、超时、checker 列表基本都集中在 [config.py]($PROJECT/artifacts/SA_Bugs_ref/config.py#L4)：

- CSmith 头文件路径
- 编译器与 analyzer 路径
- 预处理和插桩工具路径
- timeout
- checker 名称

这降低了批处理脚本之间的参数重复。

## 4. SA_Bugs 值得借鉴的组织点

### 4.1 有一个真正的“实验运营层”

`SA_Bugs` 最值得学的不是它具体怎么写 analyzer 逻辑，而是它有清晰的“运营脚本层”：

- 统一入口
- 子命令分阶段
- 批次目录自动生成
- 多 worker 并行
- 后处理独立重跑

这正是我们当前 `project` 相对欠缺的一层。

### 4.2 每个阶段都落盘

它很少依赖“内存中的流程状态”，而是不断把状态和中间产物写到文件系统：

- 运行参数
- 统计结果
- 筛选出的 `.c`
- 报告文件
- 可达性检查结果
- reduce 结果

这种风格对科研复现非常有利。

### 4.3 后处理阶段可独立重跑

这点很重要。  
在 `SA_Bugs` 里，“发现候选 case”和“确认这个 case 值不值得保留”不是一步做完，而是拆成：

- 粗筛
- reachability 校验
- reduction

这对我们的 bug triage 也很有参考价值。

## 5. SA_Bugs 不应直接照搬的部分

### 5.1 目录和命名强耦合

它大量依赖文件名约定和目录命名：

- `test_<n>.c`
- `fuzz_i/`
- `reachable/`
- `reduce/`

这种方式短期快，但后期一旦要扩展更多 MR、更多工具、更多证据文件，就会变脆。

### 5.2 缺少统一 manifest

`SA_Bugs` 有很多结果文件，但没有一个像我们现在这样明确的项目级 case manifest：

- 没有统一 `case_id`
- 没有统一 `oracle_result.json`
- 没有统一 `artifact schema`

这使得它更像脚本流水线，而不是结构化实验框架。

### 5.3 逻辑大量内嵌在脚本里

例如 analyzer 适配、case 筛选、文件清理、统计写入，很多都写在单个脚本内部。  
这会带来两个问题：

- 复用困难
- 很难给不同 relation 或不同 tool 复用同一套协议

### 5.4 工程健壮性一般

参考快照里的 [config.py]($PROJECT/artifacts/SA_Bugs_ref/config.py#L18) 甚至保留了冲突标记，说明它更偏实验脚本，不适合直接作为我们项目结构的基线。

## 6. 与当前 project 的结构对照

| 维度 | SA_Bugs | 当前 project |
| --- | --- | --- |
| 第一分流维度 | `fuzz-fp/fn/eval` | `MR1/MR2/MR3/MR4` |
| 第二分流维度 | analyzer | tool / seed-source |
| 统一入口 | `tools.py` | `run_experiment` 已可作为单个 `tool + MR` 的统一入口 |
| 中间协议 | 目录和文件命名约定 | manifest + metadata + oracle result |
| 后处理 | `check-reach` / `run-reduce` | 目前较弱，尚未形成独立层 |
| 结果模型 | 脚本输出文件集合 | 结构化 JSON 结果更强 |
| 并发批跑 | 有 | 还不够明确 |

当前 `project` 的优势：

- relation 语义更清晰
- `oracle_result.json` 和 metadata 更结构化
- 代码层分层更明显

当前 `project` 的短板：

- 还缺一个像 `tools.py` 那样的项目级运营层来做矩阵批跑
- 缺显式的 post-processing / triage / reduction 子命令层
- 批次目录和 worker 组织还不够强

## 7. 我们应该学它什么

建议只学习它的“流程骨架”，不要学习它的“脚本耦合写法”。

最值得借鉴的四点：

1. 增加项目级统一入口
   - 类似 `tools.py`
   - 但内部调用我们已有的 `pipeline.*`
2. 把实验拆成多个可独立运行阶段
   - `generate`
   - `oracle`
   - `confirm`
   - `reduce`
   - `report`
3. 显式支持批次目录和并发 worker
   - 每次实验创建一个 batch root
   - 每个 worker 独立处理一组 case
4. 给后处理阶段单独建命令
   - 不把 bug triage、case minimization 混在 `run_experiment` 里

## 8. 面向当前 project 的统一入口草案

建议新增一个项目级 CLI，例如：

```bash
python3 -m pipeline.tools create-batch
python3 -m pipeline.tools run-generate
python3 -m pipeline.tools run-oracle
python3 -m pipeline.tools confirm
python3 -m pipeline.tools reduce
python3 -m pipeline.tools report
```

其中推荐的职责边界如下。

### 8.1 `create-batch`

职责：

- 创建批次目录
- 写入批次级配置快照
- 记录工具链版本
- 固定输出路径和 batch id

输出：

- `batch_config.json`
- `environment.json`
- `batch_manifest.json`

### 8.2 `run-generate`

职责：

- 对 `MR1` 调 `Creal`
- 对 `MR2/MR3` 调 AST mutator
- 对 `MR4` 跳过 mutant 生成，但仍创建 case bundle

输出：

- `case_manifest.json`
- `seed.c`
- `criteria.json`
- `seed_meta.json`
- `mutant.c` / `mutation_meta.json`（若需要）

### 8.3 `run-oracle`

职责：

- 对每个 case 按 `Frama` / `dg` 跑 oracle
- 汇总成结构化结果

输出：

- `oracle-<tool>/oracle_result.json`
- `experiment_manifest.json`

### 8.4 `confirm`

职责：

- 对违反 relation 的候选 case 做进一步确认
- 可以按 MR 定义独立确认策略

示例：

- `MR1`：重新观测值等价
- `MR2/MR3`：重放 retained symbol 证据
- `MR4`：重跑单变量 / 多变量集合比较

### 8.5 `reduce`

职责：

- 对已确认候选 bug 的 case 进行最小化
- 单独管理 reduction 脚本和 reduction 结果

这一步正是最适合从 `SA_Bugs` 学习的地方。

### 8.6 `report`

职责：

- 统计各 MR、各 tool 的通过率 / violation 数
- 输出 thesis-facing summary

## 9. 推荐结论

对当前项目最合理的策略是：

- 保留我们现有的 `pipeline / oracle / metadata` 分层
- 额外引入一个类似 `SA_Bugs tools.py` 的“实验运营层”
- 把 `MR4` 统一进这个运营层，而不是强行塞进 mutant generator
- 把后处理和 reduction 设计成独立子命令

简化地说：

- `SA_Bugs` 强在“跑实验”
- 当前 `project` 强在“关系建模和结果结构化”

最优路线不是二选一，而是：

`保留我们的协议层 + 学习 SA_Bugs 的运营层`
