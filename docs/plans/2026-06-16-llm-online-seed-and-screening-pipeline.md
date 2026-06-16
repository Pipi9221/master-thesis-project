# LLM 在线种子生成与筛选管道实施计划

> **For agentic workers:** REQUIRED: Use superpowers:subagent-driven-development (if subagents available) or superpowers:executing-plans to implement this plan. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** 将 LLM 种子程序从离线文件搬运模式升级为在线生成模式，并补齐论文第四章 §4.1.2 要求的种子筛选管道（编译检查 → 运行可用性检查 → 语义特征筛选 → 人工复核标记），同时实现附录 B 中的提示词模板管理。

**Architecture:** 新增 `LlmOnlineSeedSource`（复用 `CommandRunner` + 外部命令模式），新增 `llm_prompts` 模块管理基础提示词 + MR 附加约束 + 主题维度，新增 `llm_feature_checker` 模块检查程序是否包含目标 C 语言语义特征。保留 `LLMFileSeedSource` 作为离线兼容。

**Tech Stack:** Python 3.11, 现有 `common.runner.CommandRunner`, 现有 `validators.compile_validator.CompileValidator`, pytest

**论文依据：**
- 第四章 §4.1.2：种子程序准备阶段的四类检查（表 4-1）
- 第四章 §4.1.2：LLM 种子采用"主题约束提示词—候选程序生成—编译检查—语义特征筛选—人工复核"流程
- 附录 B.1.1：基础提示词模板
- 附录 B.1.2：面向四类 MR 的附加约束（表 B-1）
- 附录 B.1.3：提示词主题维度（表 B-2）

---

## Chunk 1: 提示词模板管理

### Task 1: 实现提示词模板管理模块

**Files:**
- Create: `src/seeds/llm_prompts.py`
- Create: `tests/unit/test_llm_prompts.py`

**设计要点：**

基础提示词模板（来自附录 B.1.1）：

```
请生成一个用于测试静态后向程序切片工具的单文件 C11 程序。程序应可独立编译运行，并包含明确的观测点或输出语句，便于后续设置切片准则与比较切片结果。

请优先围绕 <feature_focus> 构造高风险语义场景，重点考虑多级指针、函数指针、结构体字段、数组与内存操作等数据相关结构，以及回调、setjmp/longjmp、switch/goto、构造/析构函数、原子操作、变参、VLA 等 C 语言特性，并使 <criteria> 的值依赖于 <dependency_focus>。

请避免把未定义行为作为触发前提，不依赖大型外部工程或复杂构建系统；程序在切片导出后应尽可能保持可重编译性。输出仅包含完整 C 源代码，不要附加解释。
```

MR 附加约束（来自附录 B.1.2 表 B-1）：

| MR | 附加要求 |
|---|---|
| MR1 | 生成观测点清晰、语义边界明确的程序，便于后续构造重命名、等价替换或语义保持变体。 |
| MR2 | 在不改变准则相关结果的前提下，强化冗余赋值、额外缓冲区、中间指针、拷贝链与无关数据传播。 |
| MR3 | 在不改变准则相关结果的前提下，引入额外分支、switch、goto、短路求值、不可达路径或非局部控制转移。 |
| MR4 | 要求程序同时提供多个单准则观测点，并能自然组成组合准则，便于比较单准则与联合准则结果。 |

主题维度（来自附录 B.1.3 表 B-2）：

| 主题维度 | 代表性特征 |
|---|---|
| C 语言特性与前端构造 | varargs、VLA、原子操作、位域、volatile、restrict、函数属性、弱符号、内联汇编、constructor/destructor |
| 指针、数组与数据依赖 | 多级指针、结构体字段访问、数组索引、指针算术、memcpy/memmove/字符串操作、类型穿透 |
| 控制流与控制依赖 | switch、goto、短路求值、循环控制、死代码包装、setjmp/longjmp、noreturn/unreachable |
| 过程间传播与调用边 | 函数指针、回调、全局状态更新、库调用副作用、初始化与清理函数、副作用型 API |
| 准则设置与结果导出 | 明确的观测点、可组合的多准则、稳定输出位置、切片后可重编译约束 |

- [x] Step 1: 实现 `PromptTemplate` 数据类，包含 template_text 和 placeholders
- [x] Step 2: 实现 `BASE_PROMPT_TEMPLATE` 常量（附录 B 基础模板）
- [x] Step 3: 实现 `MR_SUPPLEMENT_CONSTRAINTS` 字典（4 个 MR 的附加约束）
- [x] Step 4: 实现 `TOPIC_DIMENSIONS` 字典（5 个主题维度及其代表性特征）
- [x] Step 5: 实现 `build_prompt(mr, feature_focus, criteria, dependency_focus)` 函数，组合基础模板 + MR 约束 + 主题维度
- [x] Step 6: 实现 `render_prompt_file(prompt, output_path)` 函数，将 prompt 写入文件供 LLM 命令使用
- [x] Step 7: 编写单元测试覆盖 prompt 组合逻辑
- [x] Step 8: 运行单元测试确认通过

---

## Chunk 2: 语义特征筛选模块

### Task 2: 实现语义特征检查器

**Files:**
- Create: `src/seeds/llm_feature_checker.py`
- Create: `tests/unit/test_llm_feature_checker.py`

**设计要点：**

语义特征筛选检查程序是否包含目标 C 语言语义结构。基于附录 B.1.3 的 5 个主题维度，为每个维度定义一组关键词/模式匹配规则：

```python
TOPIC_PATTERNS = {
    "c_language_features": [
        r"\bva_list\b", r"\bva_start\b", r"\bva_end\b",    # varargs
        r"\bvolatile\b",                                      # volatile
        r"\brestrict\b",                                      # restrict
        r"\b__attribute__\b", r"\b__asm__\b",                # 函数属性/内联汇编
        r"\b__constructor__\b|\b__destructor__\b",            # 生命周期
        r"\b_Atomic\b",                                       # 原子操作
    ],
    "pointer_array_data": [
        r"\*\*",                                               # 多级指针
        r"->",                                                 # 结构体字段
        r"\bmemcpy\b|\bmemmove\b|\bmemset\b",                  # 内存操作
        r"\[.*\]",                                             # 数组索引
    ],
    "control_flow": [
        r"\bswitch\b",                                         # switch
        r"\bgoto\b",                                           # goto
        r"\bsetjmp\b|\blongjmp\b",                             # 非局部控制转移
        r"\b__builtin_unreachable\b|\b_Noreturn\b",            # unreachable/noreturn
    ],
    "interprocedural": [
        r"\bfunction\s+pointer\b|\(\*\w+\)\s*\(",             # 函数指针
        r"\bcallback\b",                                       # 回调
        r"\bqsort\b|\batexit\b|\bsignal\b",                    # 库调用副作用
        r"\bstatic\s+\w+\s*=",                                 # 全局状态
    ],
    "criterion_export": [
        r"\breturn\b",                                         # 返回语句（常见观测点）
        r"\bprintf\b|\bfprintf\b",                             # 输出语句
    ],
}
```

输出 `FeatureCheckResult`：
- `matched_topics: dict[str, list[str]]` — 命中的主题维度及其具体匹配
- `topic_coverage: dict[str, bool]` — 每个维度是否有命中
- `min_topics_satisfied: bool` — 是否满足最低主题覆盖要求
- `detected_features: list[str]` — 检测到的所有特征列表

- [x] Step 1: 定义 `TOPIC_PATTERNS` 常量（5 个维度的正则模式）
- [x] Step 2: 实现 `FeatureCheckResult` 数据类
- [x] Step 3: 实现 `check_semantic_features(source_code, required_topics=None, min_topics=2)` 函数
- [x] Step 4: 实现 `summarize_features(result)` 函数，生成可读摘要
- [x] Step 5: 编写单元测试（含正例和反例）
- [x] Step 6: 运行单元测试确认通过

---

## Chunk 3: LLM 在线种子源

### Task 3: 实现 LlmOnlineSeedSource

**Files:**
- Create: `src/seeds/llm_online.py`
- Create: `tests/unit/test_llm_online_seed_source.py`
- Modify: `src/seeds/__init__.py`

**设计要点：**

复用 `SubprocessLlmJudge` 的子进程调用模式。LLM 调用命令模板支持占位符替换：

```
command_template 示例:
  ["python3", "-m", "llm_cli", "--prompt-file", "{prompt_file}", "--output-file", "{output_file}"]
  ["curl", "-s", "-X", "POST", "https://api.openai.com/v1/chat/completions", ...]
```

占位符：
- `{prompt_file}` — 提示词文件路径
- `{output_file}` — LLM 输出文件路径（LLM 应将生成的 C 代码写入此文件）

配置项：
```python
@dataclass(frozen=True, slots=True)
class LlmOnlineConfig:
    mr: str                              # 目标蜕变关系
    count: int = 1                       # 生成数量
    feature_focus: str = ""              # 主题维度
    criteria: str = "keep"               # 观测变量名
    dependency_focus: str = ""           # 依赖焦点
    command_template: tuple[str, ...] = () # LLM 调用命令模板
    max_retries: int = 3                 # 单个种子的最大重试次数
    required_topics: list[str] | None = None  # 要求覆盖的主题维度
    min_topics: int = 2                  # 最低主题覆盖数
    clang_binary: str = "clang"          # 编译检查用的编译器
    compile_include_dir: str = ""        # 编译检查的 include 目录
    run_check: bool = True               # 是否执行运行可用性检查
```

核心流程：

```
for each seed_index in range(count):
    1. build_prompt(mr, feature_focus, criteria, dependency_focus) → prompt
    2. write prompt to temp file
    3. for retry in range(max_retries):
        a. call LLM command → candidate.c
        b. compile_check(candidate.c) → pass?
           - fail → continue retry
        c. run_check(candidate.c) → pass?
           - fail → continue retry
        d. feature_check(candidate.c) → pass?
           - fail → continue retry
        e. SUCCESS → materialize SeedCase, break
    4. if all retries exhausted → record failure, continue to next seed
```

SeedCase 输出：
- `generator: "llm_online"`
- `source_meta` 包含：
  - `mr`: 目标 MR
  - `feature_focus`: 主题维度
  - `prompt_hash`: 提示词哈希（可追溯性）
  - `compile_ok`: 编译检查结果
  - `run_ok`: 运行检查结果
  - `feature_check`: 语义特征检查结果
  - `review_status`: "pending"（等待人工复核）
  - `retry_count`: 实际重试次数

- [x] Step 1: 实现 `LlmOnlineConfig` 数据类
- [x] Step 2: 实现 `LlmOnlineSeedSource.__init__` 和 `build_llm_command` 方法
- [x] Step 3: 实现 `materialize_cases` 主循环（含重试逻辑）
- [x] Step 4: 实现 `_call_llm` 内部方法（写 prompt → 调用命令 → 读取输出文件）
- [x] Step 5: 实现 `_compile_check` 内部方法（复用 CompileValidator）
- [x] Step 6: 实现 `_run_check` 内部方法（编译执行 + 退出码检查）
- [x] Step 7: 实现 `_feature_check` 内部方法（调用 llm_feature_checker）
- [x] Step 8: 实现 `_write_seed_meta` 方法，写入完整筛选记录
- [x] Step 9: 编写单元测试（用 fake runner 模拟 LLM 调用）
- [x] Step 10: 更新 `src/seeds/__init__.py` 导出
- [x] Step 11: 运行单元测试确认通过

---

## Chunk 4: 种子筛选管道集成

### Task 4: 将 LLM 在线种子源集成到 generate_mutants 管道

**Files:**
- Modify: `src/pipeline/generate_mutants.py`
- Modify: `tests/unit/test_generate_mutants_config.py`（如存在）

**设计要点：**

在 `generate_mutants.py` 的 `_build_seed_source` 和 `_parse_args` 中新增 `llm_online` 选项：

```python
# _parse_args 新增参数
parser.add_argument("--seed-source", choices=("csmith", "llm_files", "llm_online", "creal"), required=True)
parser.add_argument("--llm-command", default="", help="LLM command template for llm_online")
parser.add_argument("--llm-feature-focus", default="", help="Feature focus for LLM prompt")
parser.add_argument("--llm-criteria", default="keep", help="Criteria variable name for LLM prompt")
parser.add_argument("--llm-dependency-focus", default="", help="Dependency focus for LLM prompt")
parser.add_argument("--llm-max-retries", type=int, default=3, help="Max retries per LLM seed")
parser.add_argument("--llm-required-topics", default="", help="Comma-separated required topic dimensions")
parser.add_argument("--llm-min-topics", type=int, default=2, help="Minimum topic coverage")
parser.add_argument("--no-run-check", action="store_true", help="Skip runtime availability check")
```

- [x] Step 1: 扩展 `GenerateMutantsConfig` 新增 LLM 在线配置字段
- [x] Step 2: 扩展 `_parse_args` 新增 LLM 相关参数
- [x] Step 3: 扩展 `config_from_args` 映射新参数
- [x] Step 4: 扩展 `_build_seed_source` 支持 `llm_online` 分支
- [ ] Step 5: 确保编译检查和重试逻辑在 MR2/MR3 路径中正确工作
- [ ] Step 6: 手动验证（dry run）`generate_mutants --seed-source llm_online --mr MR2 ...` 参数解析

---

## Chunk 5: 人工复核标记与种子元数据

### Task 5: 完善种子元数据和复核支持

**Files:**
- Modify: `src/seeds/models.py`
- Modify: `src/validators/behavior.py`（接入管道）
- Modify: `src/pipeline/generate_mutants.py`

**设计要点：**

扩展 `SeedCase` 或 `seed_meta.json` 的字段：

```json
{
  "seed_id": "llm_online_0001",
  "generator": "llm_online",
  "source_name": "generated.c",
  "source_meta": {
    "mr": "MR2",
    "feature_focus": "pointer_array_data",
    "prompt_hash": "sha256:abc123...",
    "compile_ok": true,
    "run_ok": true,
    "exit_code": 0,
    "feature_check": {
      "matched_topics": {"pointer_array_data": ["**", "->"]},
      "topic_coverage": {"pointer_array_data": true, "c_language_features": false, ...},
      "min_topics_satisfied": true,
      "detected_features": ["**", "->", "memcpy"]
    },
    "review_status": "pending",
    "retry_count": 1
  }
}
```

复核状态机：`pending → approved | rejected`

- [x] Step 1: 扩展 `seed_meta.json` 的 `source_meta` 模式（增加筛选和复核字段）
- [x] Step 2: 实现 `update_review_status(case_dir, status, reviewer, notes)` 工具函数
- [ ] Step 3: 将 `BehaviorValidator` 接入 `generate_mutants.py` 的运行可用性检查
- [ ] Step 4: 更新 `validation_status` 字段（从 `not_run` 更新为实际状态）
- [x] Step 5: 编写单元测试验证元数据完整性
- [x] Step 6: 运行测试确认通过

---

## Chunk 6: 关系前提检查完善

### Task 6: 实现 MR2/MR3 的重试逻辑与前提检查

**Files:**
- Modify: `src/pipeline/generate_mutants.py`
- Create: `tests/unit/test_prerequisite_checks.py`

**设计要点：**

当前 `generate_mutants.py` 遇到编译失败直接 `raise SystemExit`。需改为重试循环：

```python
for retry in range(max_retries):
    # 尝试生成突变体
    result = _try_generate_mutant(...)
    compile_check = _run_compile_gate(...)
    if compile_check["compile_ok"]:
        # 运行可用性检查
        run_check = _run_behavior_check(...)
        if run_check.behavior_equivalent:
            break  # 成功
    # 重试：换 rng_seed
    rng_seed += 1
else:
    # 所有重试用尽，记录失败
    _record_failure(case, retry_count=max_retries)
```

MR1 默认不需要重试（Creal 适配器自带合法性保证）。
MR2 默认重试 20 次。
MR3 默认重试 30 次。

- [ ] Step 1: 为 `GenerateMutantsConfig` 添加 `max_retries` 字段
- [ ] Step 2: 实现 `_try_generate_mutant` 封装单次尝试逻辑
- [ ] Step 3: 实现 `_record_failure` 记录失败信息到 manifest
- [ ] Step 4: 将 MR2/MR3 编译失败从 `raise SystemExit` 改为重试循环
- [ ] Step 5: 实现 MR1 观测值一致性前提检查（seed/mutant 未切片版本观测一致）
- [ ] Step 6: 实现 MR2/MR3 新增成分合规性前提检查
- [ ] Step 7: 编写单元测试覆盖重试逻辑和前提检查
- [ ] Step 8: 运行测试确认通过

---

## Chunk 7: 集成测试与文档

### Task 7: 集成测试与最终验证

**Files:**
- Create: `tests/integration/test_llm_online_pipeline.py`
- Modify: `docs/specs/spec.md`

**设计要点：**

集成测试使用 fake LLM 脚本（返回预设 C 代码），验证完整管道：
1. prompt 生成 → 文件写入
2. LLM 调用 → 候选程序写入
3. 编译检查通过
4. 运行检查通过
5. 语义特征筛选通过
6. SeedCase 正确生成
7. seed_meta.json 包含完整筛选记录

- [ ] Step 1: 创建 fake LLM 脚本测试固件
- [ ] Step 2: 编写端到端集成测试（MR2 场景）
- [ ] Step 3: 编写端到端集成测试（MR3 场景）
- [ ] Step 4: 编写重试场景集成测试（首次编译失败，重试成功）
- [ ] Step 5: 运行全部集成测试确认通过
- [ ] Step 6: 更新 `docs/specs/spec.md` 文档反映新增功能
- [ ] Step 7: 更新 `README.md` 中 LLM 在线种子的使用说明

---

## 验收标准

1. **提示词模板管理**：能按 MR + 主题维度组合出完整提示词，输出到文件供 LLM 命令使用
2. **在线生成**：`--seed-source llm_online` 可调用外部 LLM 命令生成候选 C 程序
3. **编译检查**：所有种子在进入种子池前必须通过 `clang -fsyntax-only` 编译检查
4. **运行可用性检查**：种子程序可编译为可执行文件并正常退出（exit code 0）
5. **语义特征筛选**：检测候选程序是否包含目标 C 语言语义特征，不满足要求的被拒绝
6. **人工复核标记**：所有通过筛选的种子 `review_status` 为 `pending`，支持后续 `approved/rejected` 标记
7. **重试逻辑**：MR2/MR3 编译失败时自动重试，不直接 SystemExit
8. **元数据完整性**：`seed_meta.json` 包含完整的筛选过程记录
9. **与论文一致性**：实现的功能与论文第四章 §4.1.2 和附录 B 的描述一致

## 依赖与约束

- LLM 调用采用子进程模式，不绑定特定 API
- 保留 `LLMFileSeedSource` 作为离线兼容入口
- 所有新增代码遵循现有项目结构和代码风格
- 测试使用 fake 适配器，不依赖真实 LLM 服务
