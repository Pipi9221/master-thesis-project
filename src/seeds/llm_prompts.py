from __future__ import annotations

import hashlib
from dataclasses import dataclass, field
from pathlib import Path


@dataclass(frozen=True, slots=True)
class PromptTemplate:
    """A prompt template with named placeholders."""

    template_text: str
    placeholders: tuple[str, ...] = ()

    def render(self, **kwargs: str) -> str:
        missing = set(self.placeholders) - set(kwargs.keys())
        if missing:
            raise ValueError(f"Missing placeholders: {missing}")
        text = self.template_text
        for key, value in kwargs.items():
            text = text.replace(f"<{key}>", value)
        return text


# ---------------------------------------------------------------------------
# Appendix B.1.1: Base prompt template
# ---------------------------------------------------------------------------

BASE_PROMPT_TEMPLATE = PromptTemplate(
    template_text=(
        "请生成一个用于测试静态后向程序切片工具的单文件 C11 程序。"
        "程序应可独立编译运行，并包含明确的观测点或输出语句，"
        "便于后续设置切片准则与比较切片结果。\n\n"
        "请优先围绕 <feature_focus> 构造高风险语义场景，"
        "重点考虑多级指针、函数指针、结构体字段、数组与内存操作等数据相关结构，"
        "以及回调、setjmp/longjmp、switch/goto、构造/析构函数、原子操作、变参、VLA 等 C 语言特性，"
        "并使 <criteria> 的值依赖于 <dependency_focus>。\n\n"
        "请避免把未定义行为作为触发前提，不依赖大型外部工程或复杂构建系统；"
        "程序在切片导出后应尽可能保持可重编译性。输出仅包含完整 C 源代码，不要附加解释。"
    ),
    placeholders=("feature_focus", "criteria", "dependency_focus"),
)

# MR1 dual-output prompt: asks the LLM to generate both a seed program and a
# semantically-equivalent variant in a single response, separated by a delimiter.
MR1_DUAL_OUTPUT_PROMPT_TEMPLATE = PromptTemplate(
    template_text=(
        "请生成一对语义等价的单文件 C11 程序，用于测试静态后向程序切片工具。\n\n"
        "要求：\n"
        "1. 第一个程序（种子程序）和第二个程序（语义保持变体）都必须能独立编译运行\n"
        "2. 两个程序必须产生完全相同的可观测输出（通过 printf 输出观测变量值）\n"
        "3. 变体程序必须通过以下一种或多种变换从种子程序派生：\n"
        "   - 局部变量和函数参数重命名\n"
        "   - 等价表达式替换（如数组索引 ↔ 指针算术）\n"
        "   - 独立语句或声明的重排序\n"
        "   - 等价控制流重构（for↔while、if↔switch）\n"
        "4. **重要**：观测变量 <criteria> 在种子和变体中必须保持完全相同的名称，"
        "不得重命名。其他所有符号可以自由重命名。\n\n"
        "请优先围绕 <feature_focus> 构造高风险语义场景，"
        "使 <criteria> 的值依赖于 <dependency_focus>。\n\n"
        "输出格式：先输出完整的种子程序，然后单独一行输出 // ===VARIANT===，"
        "再输出完整的变体程序。两个程序各自必须包含完整的 #include 和 main 函数。"
        "仅输出 C 代码和分隔符，不要附加任何解释。"
    ),
    placeholders=("feature_focus", "criteria", "dependency_focus"),
)


# MR4 seed prompt: asks the LLM to generate a program with multiple independent
# criterion variables that can naturally form single- and multi-variable slices.
MR4_SEED_PROMPT_TEMPLATE = PromptTemplate(
    template_text=(
        "请生成一个用于测试静态后向程序切片工具的单文件 C11 程序。"
        "程序应可独立编译运行，并包含明确的 printf 输出语句。\n\n"
        "**关键要求**：\n"
        "1. 必须定义至少 2 个标量全局变量（如 int、float 等），变量名必须以 g_ 开头（如 g_a、g_b）\n"
        "2. 每个 g_ 全局变量必须在 main 函数中通过 printf 输出其最终值\n"
        "3. 每个 g_ 全局变量的值应依赖于不同的计算路径或数据依赖链\n"
        "4. 两个全局变量的依赖路径应部分独立但可组合——即各有独立的依赖节点，也可共享部分中间节点\n"
        "5. 程序中应包含 3-5 个辅助局部变量或中间计算，形成清晰的依赖层次\n\n"
        "请优先围绕 <feature_focus> 构造高风险语义场景，"
        "重点考虑多级指针、函数指针、结构体字段、数组与内存操作等数据相关结构，"
        "以及回调、switch/goto、变参等 C 语言特性，"
        "使每个 g_ 全局变量的值依赖于 <dependency_focus>。\n\n"
        "请避免把未定义行为作为触发前提，不依赖大型外部工程或复杂构建系统；"
        "程序在切片导出后应尽可能保持可重编译性。输出仅包含完整 C 源代码，不要附加解释。"
    ),
    placeholders=("feature_focus", "dependency_focus"),
)


# ---------------------------------------------------------------------------
# Appendix B.1.2 Table B-1: MR-specific supplementary constraints
# ---------------------------------------------------------------------------

MR_SUPPLEMENT_CONSTRAINTS: dict[str, str] = {
    "MR1": (
        "生成观测点清晰、语义边界明确的程序，"
        "便于后续构造重命名、等价替换或语义保持变体。"
    ),
    "MR2": (
        "在不改变准则相关结果的前提下，"
        "强化冗余赋值、额外缓冲区、中间指针、拷贝链与无关数据传播。"
    ),
    "MR3": (
        "在不改变准则相关结果的前提下，"
        "引入额外分支、switch、goto、短路求值、不可达路径或非局部控制转移。"
    ),
    "MR4": (
        "要求程序同时提供多个单准则观测点，"
        "并能自然组成组合准则，便于比较单准则与联合准则结果。"
    ),
}


# ---------------------------------------------------------------------------
# Appendix B.1.3 Table B-2: Topic dimensions
# ---------------------------------------------------------------------------

TOPIC_DIMENSIONS: dict[str, dict[str, str]] = {
    "c_language_features": {
        "label": "C 语言特性与前端构造",
        "features": (
            "varargs、VLA、原子操作、位域、volatile、restrict、"
            "函数属性、弱符号、内联汇编、constructor/destructor"
        ),
        "target_analysis": "语法前端、AST 构造、结果导出与重编译",
    },
    "pointer_array_data": {
        "label": "指针、数组与数据依赖",
        "features": (
            "多级指针、结构体字段访问、数组索引、指针算术、"
            "memcpy/memmove/字符串操作、类型穿透"
        ),
        "target_analysis": "别名分析、数据依赖边构建、切片保留/删除决策",
    },
    "control_flow": {
        "label": "控制流与控制依赖",
        "features": (
            "switch、goto、短路求值、循环控制、死代码包装、"
            "setjmp/longjmp、noreturn/unreachable"
        ),
        "target_analysis": "控制流图构建、控制依赖传播、控制相关切片规则",
    },
    "interprocedural": {
        "label": "过程间传播与调用边",
        "features": (
            "函数指针、回调、全局状态更新、库调用副作用、"
            "初始化与清理函数、副作用型 API"
        ),
        "target_analysis": "调用图构建、过程间传播、跨函数切片路径",
    },
    "criterion_export": {
        "label": "准则设置与结果导出",
        "features": (
            "明确的观测点、可组合的多准则、"
            "稳定输出位置、切片后可重编译约束"
        ),
        "target_analysis": "切片计算、准则合并、结果导出与人工复核",
    },
}

TOPIC_KEYS = tuple(TOPIC_DIMENSIONS.keys())


# ---------------------------------------------------------------------------
# Prompt building
# ---------------------------------------------------------------------------

def build_prompt(
    *,
    mr: str,
    feature_focus: str = "",
    criteria: str = "keep",
    dependency_focus: str = "",
) -> str:
    """Build a complete prompt by combining base template + MR constraint + topic hints.

    Parameters
    ----------
    mr : str
        Target metamorphic relation (MR1, MR2, MR3, MR4).
    feature_focus : str
        The <feature_focus> placeholder value. If empty, a default based on MR
        and topic dimensions is generated.
    criteria : str
        The <criteria> placeholder value (variable name to observe).
    dependency_focus : str
        The <dependency_focus> placeholder value. If empty, a default based on
        MR is generated.

    Returns
    -------
    str
        The assembled prompt text.
    """
    if mr not in MR_SUPPLEMENT_CONSTRAINTS:
        raise ValueError(f"Unknown MR: {mr!r}. Expected one of {list(MR_SUPPLEMENT_CONSTRAINTS)}")

    if not feature_focus:
        feature_focus = _default_feature_focus(mr)

    if not dependency_focus:
        dependency_focus = _default_dependency_focus(mr)

    base = BASE_PROMPT_TEMPLATE.render(
        feature_focus=feature_focus,
        criteria=criteria,
        dependency_focus=dependency_focus,
    )

    supplement = MR_SUPPLEMENT_CONSTRAINTS[mr]

    topic_hint = _build_topic_hint(mr)

    parts = [base, "", "## 附加要求", "", supplement, "", topic_hint]
    return "\n".join(parts)


def build_mr1_dual_prompt(
    *,
    feature_focus: str = "",
    criteria: str = "keep",
    dependency_focus: str = "",
) -> str:
    """Build the MR1 dual-output prompt (seed + variant in one LLM call)."""
    if not feature_focus:
        feature_focus = _default_feature_focus("MR1")
    if not dependency_focus:
        dependency_focus = _default_dependency_focus("MR1")
    base = MR1_DUAL_OUTPUT_PROMPT_TEMPLATE.render(
        feature_focus=feature_focus,
        criteria=criteria,
        dependency_focus=dependency_focus,
    )
    topic_hint = _build_topic_hint("MR1")
    parts = [base, "", topic_hint]
    return "\n".join(parts)


def build_mr4_prompt(
    *,
    feature_focus: str = "",
    dependency_focus: str = "",
) -> str:
    """Build the MR4-specific prompt for multi-criterion seed program generation."""
    if not feature_focus:
        feature_focus = _default_feature_focus("MR4")
    if not dependency_focus:
        dependency_focus = _default_dependency_focus("MR4")
    base = MR4_SEED_PROMPT_TEMPLATE.render(
        feature_focus=feature_focus,
        dependency_focus=dependency_focus,
    )
    topic_hint = _build_topic_hint("MR4")
    parts = [base, "", topic_hint]
    return "\n".join(parts)


def _default_feature_focus(mr: str) -> str:
    """Return a sensible default feature_focus for each MR."""
    defaults: dict[str, str] = {
        "MR1": "语义边界场景，如函数指针、变参、生命周期函数",
        "MR2": "无关数据流，如冗余赋值链、额外缓冲区、中间指针",
        "MR3": "无关控制流，如额外分支、switch、goto、不可达路径",
        "MR4": "多准则观测点，如多个可组合的变量输出",
    }
    return defaults.get(mr, "")


def _default_dependency_focus(mr: str) -> str:
    """Return a sensible default dependency_focus for each MR."""
    defaults: dict[str, str] = {
        "MR1": "多种等价表达形式（如数组 vs 指针、箭头 vs 解引用）",
        "MR2": "独立局部变量链，不与准则变量形成别名",
        "MR3": "不可达路径内的局部计算，不改变准则变量取值",
        "MR4": "两个独立但可组合的依赖路径",
    }
    return defaults.get(mr, "")


def _build_topic_hint(mr: str) -> str:
    """Build a short hint about relevant topic dimensions for the given MR."""
    mr_topics: dict[str, list[str]] = {
        "MR1": ["c_language_features", "criterion_export"],
        "MR2": ["pointer_array_data", "interprocedural"],
        "MR3": ["control_flow", "interprocedural"],
        "MR4": ["criterion_export", "interprocedural"],
    }
    relevant = mr_topics.get(mr, list(TOPIC_KEYS))
    lines = ["## 相关主题维度", ""]
    for key in relevant:
        dim = TOPIC_DIMENSIONS[key]
        lines.append(f"- **{dim['label']}**：{dim['features']}")
    lines.append("")
    lines.append("请确保程序覆盖上述至少一个维度的特征。")
    return "\n".join(lines)


# ===========================================================================
# Judge prompts
# ===========================================================================

# System prompt used by the seed-generation LLM (deepseek_client.py).
SEED_GENERATION_SYSTEM_PROMPT = (
    "You are an expert C11 programmer. Generate complete, compilable C source "
    "code. Output ONLY the C code, no explanations, no markdown fences."
)

# System prompt used by the judge LLM (deepseek_judge.py).
JUDGE_SYSTEM_PROMPT = (
    "You are a rigorous judge for a program slicing experiment. "
    "Your task is to review the evidence bundle and determine whether the "
    "slicing result is PASS (no violation), VIOLATION (the metamorphic relation "
    "is violated), or ERROR (evidence is insufficient or malformed).\n\n"
    "Key rules:\n"
    "- MR1: Seed and mutant slices must preserve equivalent data-dependency "
    "chains for the criterion variable. Symbol renaming is expected and not "
    "a violation.\n"
    "- MR2: Inserted irrelevant data-flow noise should NOT survive in the slice.\n"
    "- MR3: Inserted dead-code control-flow payload should NOT survive in the slice.\n"
    "- MR4: The union of single-variable slice instruction sets must equal "
    "the multi-variable slice instruction set. Trivial formatting/metadata "
    "differences are not violations.\n"
    "- If the deterministic prefilter already found a VIOLATION, trust it.\n"
    "- If the slice failed, that is an ERROR.\n"
    "- If evidence is incomplete, that is an ERROR.\n\n"
    "Output ONLY a single JSON object. No markdown, no explanation outside the JSON."
)


JUDGE_MR_EXPECTATIONS: dict[str, str] = {
    "MR1": (
        "DG slices at the LLVM IR level. The seed and mutant are semantically equivalent "
        "C programs. After slicing both for the same criterion variable, the two slices "
        "should preserve equivalent data-dependency chains for that variable. "
        "Compare the slice IR evidence (retained instructions, criterion variable "
        "appearances, source snippets) for seed and mutant. "
        "If both slices capture equivalent computation paths for the criterion "
        "variable, that is PASS. If one slice preserves dependencies the other "
        "loses, that is a VIOLATION. "
        "Note: symbol renaming between seed and mutant is expected; do not treat "
        "renamed symbols as violations."
    ),
    "MR2": "Inserted irrelevant executable noise should not survive in the DG slice.",
    "MR3": "Inserted dead-code payload should not survive in the DG slice.",
    "MR4": (
        "The union of single-variable slice instruction sets must equal the "
        "multi-variable slice instruction set. Discrepancies that represent "
        "genuine semantic differences are VIOLATIONs; trivial formatting or "
        "metadata differences may be PASS."
    ),
}


def build_judge_prompt(mr: str) -> str:
    """Build the judge prompt for a specific metamorphic relation."""
    expectation = JUDGE_MR_EXPECTATIONS.get(
        mr,
        "Judge the DG slicing result against the requested metamorphic relation.",
    )
    return (
        "You are judging a DG slicing result.\n"
        f"Metamorphic relation: {mr}\n"
        f"Expectation: {expectation}\n"
        "Read the bundle JSON and decide whether the result is PASS, VIOLATION, or ERROR.\n"
        "Treat malformed or insufficient evidence as ERROR.\n"
        "Return only JSON with this schema:\n"
        '{"status":"PASS|VIOLATION|ERROR","reason":"snake_case","summary":"short explanation","confidence":0.0}\n'
    )


# ---------------------------------------------------------------------------
# Prompt file I/O
# ---------------------------------------------------------------------------

def render_prompt_file(prompt: str, output_path: Path) -> Path:
    """Write the prompt text to a file and return the path.

    Also writes a companion `.sha256` file with the prompt hash for traceability.
    """
    output_path.parent.mkdir(parents=True, exist_ok=True)
    output_path.write_text(prompt, encoding="utf-8")

    digest = hashlib.sha256(prompt.encode("utf-8")).hexdigest()
    hash_path = output_path.with_suffix(".sha256")
    hash_path.write_text(f"sha256:{digest}\n", encoding="utf-8")

    return output_path


def compute_prompt_hash(prompt: str) -> str:
    """Return the sha256 hash of a prompt string (prefixed with 'sha256:')."""
    digest = hashlib.sha256(prompt.encode("utf-8")).hexdigest()
    return f"sha256:{digest}"


# ---------------------------------------------------------------------------
# Topic dimension queries
# ---------------------------------------------------------------------------

def get_topic_label(key: str) -> str:
    """Return the human-readable label for a topic dimension key."""
    return TOPIC_DIMENSIONS.get(key, {}).get("label", key)


def get_topic_features(key: str) -> str:
    """Return the feature description for a topic dimension key."""
    return TOPIC_DIMENSIONS.get(key, {}).get("features", "")


def get_topic_target_analysis(key: str) -> str:
    """Return the target analysis description for a topic dimension key."""
    return TOPIC_DIMENSIONS.get(key, {}).get("target_analysis", "")
