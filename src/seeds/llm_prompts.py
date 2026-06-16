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
