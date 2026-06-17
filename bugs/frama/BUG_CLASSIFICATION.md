# Frama-C Slicing Bug 分类报告

> 更新时间：2026-02-13
> 基于 Frama-C 30.0 (Zinc) 源码分析

---

## 一、Bug 分类总览

### ❌ 已知限制（非 Bug）— 官方明确声明不支持

| Issue | 问题 | 官方声明位置 | 源码分析 |
|-------|------|-------------|---------|
| **006** | setjmp/longjmp 语义不正确 | `share/libc/setjmp.h:29-31` | ✅ 已分析 |
| **008** | complex.h 不支持 | `share/libc/complex.h:27` | - |
| **012** | tgmath.h 不支持 | `share/libc/tgmath.h:25` | - |
| **009** | _Alignas 不支持 | 解析阶段报错 | - |
| **014** | _Alignof 不支持 | 解析阶段报错 | - |

**说明**：这些是 Frama-C 的设计决定，使用这些特性本身就超出支持范围。

### ⚠️ 设计决定（有副作用，优先级较低）

| Issue | 问题 | 源码证据 | 分析结论 |
|-------|------|---------|---------|
| **002** | `int main()` 变成 `void main()` | `filter.ml:231-232` | 设计行为：返回值不可见时设为 void，但违反 C 标准 |
| **003** | `-main foo` 时缺少 main 函数 | `kernel.ml:1499-1502` | 设计行为：用于库函数分析，预期行为 |

**说明**：Issue 002 值得报告但不紧急；Issue 003 是正确用法，不是 Bug。

### ✅ 真正的 Bug — 应该正确工作但没有

| Issue | 问题类型 | 严重程度 | 源码分析 | 描述 |
|-------|---------|---------|---------|------|
| **001** | 编译失败 | 🟡 中 | ✅ 已分析 | 函数指针导出未定义符号 |
| **004** | 编译失败 | 🟡 中 | ✅ 已分析 | VLA 导出 `__fc_vla_alloc` 未定义 |
| **005** | 编译失败 | 🟡 中 | ✅ 已分析 | varargs 生成非法C代码 |
| **007** | 编译失败 | 🟡 中 | ✅ 已分析 | C11原子操作导出未定义符号 |
| **010** | 正确性 | 🔴 高 | ✅ 已分析 | constructor/atexit 被丢弃 |
| **011** | 编译失败 | 🟡 中 | ✅ 已分析 | `sizeof(expr)` 临时变量未声明 |
| **013** | 编译失败 | 🟡 中 | ✅ 已分析 | `sizeof(*p)` 临时变量未声明（与011同根因） |
| **015** | 编译失败 | 🟡 中 | ✅ 已分析 | `pid_t` 在 `-std=c11` 下未定义 |
| **016** | 内部错误 | 🟡 中 | ✅ 已分析 | ACSL逻辑变量依赖未实现 |

---

## 二、Bug 类型统计

| 类别 | 数量 | 占比 | Issue编号 |
|------|------|------|----------|
| **真正的 Bug** | **9** | 56.25% | 001, 004, 005, 007, 010, 011, 013, 015, 016 |
| **设计决定** | **2** | 12.5% | 002, 003 |
| **已知限制（非Bug）** | **5** | 31.25% | 006, 008, 009, 012, 014 |

### 按严重程度分类

| 严重程度 | 数量 | Issue编号 |
|---------|------|----------|
| 🔴 高（正确性问题） | 1 | 010 |
| 🟡 中（编译/链接失败） | 8 | 001, 004, 005, 007, 011, 013, 015, 016 |

### 按问题类型分类

| 类型 | 数量 | Issue编号 |
|------|------|----------|
| 导出产物不可编译/链接 | 7 | 001, 004, 005, 007, 011, 013, 015 |
| 正确性问题 | 1 | 010 |
| 内部未实现 | 1 | 016 |

---

## 三、已分析 Bug 详细报告

### 🔴 Issue 010: GNU constructor/dropped

**问题**：切片丢失 constructor/destructor/atexit 等生命周期钩子，导致返回值改变。

**严重性**：正确性 Bug，违反切片基本原则。

**源码分析**：
- `rmtmps.ml:225-231`：能识别 constructor 属性
- `rmtmps.ml:307-318`：将其标记为根节点
- **问题**：PDG 依赖分析未正确建模隐式调用

**修复方向**：在 Eva 分析初始化时执行 constructor，或在 PDG 中添加隐式调用边。

**详细报告**：`issues/010-gnu-constructor-dropped/notes/SOURCE_ANALYSIS.md`

---

### 🟡 Issue 007: C11 原子操作导出未定义符号

**问题**：`atomic_fetch_add` 等操作导出为 `__fc_atomic_*`，但无定义。

**源码分析**：
- `share/libc/stdatomic.h:52-53`：`#define _Atomic` 为空（忽略原子语义）
- `src/kernel_services/ast_printing/cil_printer.ml:97-110`：`rename_builtins` 未包含原子操作
- **问题**：宏展开后参数数量变化，无法简单重命名

**修复方向**：在 CIL 打印器中特殊处理 `__fc_atomic_*`，还原为标准 C11 原子操作。

**详细报告**：`issues/007-c11-atomics-undefined-symbols/notes/SOURCE_ANALYSIS.md`

---

### 🟡 Issue 011/013: sizeof 临时变量未声明

**问题**：`sizeof(p)` 或 `sizeof(*p)` 中的临时变量 `tmp_0` 未声明。

**源码分析**：
- `cabs2cil.ml:1658-1682`：有意创建 `tmp_*` 占位符
- `filter.ml:517-521`：过滤局部变量，`tmp_*` 被删除
- `slicingTransform.ml:450-468`：VLA 的 `SizeOfE` 未转换
- **问题**：声明被删除，但表达式中仍引用

**修复方向**：正确标记 `SizeOfE` 中引用的变量为可见。

**详细报告**：`issues/011-sizeof-tmp-undeclared/notes/SOURCE_ANALYSIS.md`

---

### 🟡 Issue 015: POSIX pid_t 类型未定义

**问题**：`getpid()` 返回值引入 `pid_t tmp`，但在 `-std=c11` 下编译失败。

**源码分析**：
- `cabs2cil.ml`：为返回值创建临时变量
- `share/libc/__fc_define_pid_t.h`：定义 `pid_t` 为 `int`
- **问题**：引入了原程序未依赖的类型名

**修复方向**：使用底层类型 `int` 替代 `pid_t`，或添加特性宏。

**详细报告**：`issues/015-posix-pid_t-missing/notes/SOURCE_ANALYSIS.md`

---

### 🟡 Issue 002: void main（设计决定）

**问题**：`int main()` 变成 `void main()`。

**源码分析**：
```ocaml
(* filter.ml:231-232 *)
if not (Info.result_visible kf finfo) then
  Cil.setReturnTypeVI ff_var Cil_const.voidType;
```

**结论**：设计行为，当返回值不可见时设为 void。但违反 C 标准。

**建议**：可报告，但优先级较低。

---

### 🟡 Issue 003: -main foo 缺少 main（设计决定）

**问题**：使用 `-main foo` 时导出产物无 `main` 函数。

**源码分析**：
```ocaml
(* kernel.ml:1499-1502 *)
let help = "use <f> as entry point for analysis. See \"-lib-entry\" \
            if this is not for a complete application. Defaults to main"
```

**结论**：设计行为，用于库函数分析。如果需要可执行程序，应保留 main。

---

### 🟡 Issue 001: 函数指针导出未定义符号

**问题**：切片导出的代码中函数指针指向的函数只有声明没有定义，导致链接失败。

**源码分析**：
- `slicingTransform.ml:65-76`：当 `need_addr = true`（函数地址被取用）时，保留原始函数体
- 导出时函数被重命名（如 `f2` → `f2_slice_1`），但全局函数指针仍指向原符号
- 例如：`static uint32_t (*fp)(uint32_t) = &f1;` 中 `f1` 只有声明

**详细报告**：`issues/001-fnptr-undefined-symbols/notes/SOURCE_ANALYSIS.md`

---

### 🟡 Issue 004: VLA 支持问题

**现象 A**：`__fc_vla_alloc` 未定义
- `cabs2cil.ml:2886`：`__fc_vla_alloc` 是 Frama-C 内置函数
- 切片导出时只有声明没有定义，导致链接失败

**现象 B**：多维 VLA 解析 abort
- Frama-C 内核限制，只支持第一维 VLA
- 这是已知限制，非切片 bug

**详细报告**：`issues/004-vla-support/notes/SOURCE_ANALYSIS.md`

---

### 🟡 Issue 005: varargs 导出非法 C 代码

**问题**：切片导出的代码包含非法的 C 语法。

**源码分析**：
- 导出代码将 varargs 转换为 `void* const*` 数组
- 错误 1：`va_list ap; ap = __va_params;` - `va_list` 可能不是指针类型
- 错误 2：`ap++` - 不能对 `va_list` 使用递增运算符

**详细报告**：`issues/005-varargs-broken-export/notes/SOURCE_ANALYSIS.md`

---

### 🟡 Issue 016: ACSL 逻辑变量依赖未实现

**问题**：使用 `-slice-loop-inv` 时遇到包含逻辑变量的 loop invariant 会导致切片中止。

**源码分析**：
- `logic_deps.ml:400`：`raise (NYI "[logic_interp] dependencies of a term lval")`
- `compute_term_deps` 由 EVA 提供，默认返回 `None`
- ACSL 逻辑变量（如 `\forall` 引入的变量）没有对应的 C lvalue，无法计算依赖

**详细报告**：`issues/016-slicing-term-lval-deps/notes/SOURCE_ANALYSIS.md`

---

## 四、官方设计层级

根据源码分析，Frama-C 对 C 特性的支持分为以下层级：

| 层级 | 描述 | 示例 |
|------|------|------|
| **Level 1** | 完全支持 | 基本C语法、指针、数组、结构体 |
| **Level 2** | 解析支持，语义不完整 | setjmp/longjmp (unsound)、_Atomic (语义忽略) |
| **Level 3** | 仅解析支持，无导出保证 | VLA、某些 builtin 函数 |
| **Level 4** | 完全不支持 | complex.h、tgmath.h、_Alignas、_Alignof |

---

## 五、问题根因分析

### 1. 内置符号问题（001, 004, 007）

```
用户代码 → Frama-C 内部表示 → 导出产物
           (builtin functions)
                 ↓
           __fc_atomic_*
           __fc_vla_alloc
                 ↓
           只有声明，无定义 ❌
```

**原因**：Frama-C 将内部建模函数直接导出，未转换为标准 C 或提供运行时实现。

### 2. AST 重写问题（011, 013）

```
原始代码 → 规范化/切片 → 导出
               ↓
        sizeof(*p) → sizeof(*tmp_0)
               ↓
        tmp_0 声明被删除 ❌
```

**原因**：声明过滤和表达式规范化不同步。

### 3. 副作用追踪问题（010）

```
constructor 函数
       ↓
PDG 中无显式调用边
       ↓
被切片删除 ❌
```

**原因**：生命周期钩子的隐式调用未被建模。

### 4. 类型依赖问题（015）

```
原程序: uint32_t x = (uint32_t)getpid();
                ↓
切片后: pid_t tmp; tmp = getpid(); ...
                ↓
引入了新的类型依赖 ❌
```

**原因**：临时变量类型使用了原程序未依赖的类型名。

---

## 六、修复优先级建议

| 优先级 | Issue | 理由 |
|--------|-------|------|
| 🔴 高 | 010 | 正确性问题，行为不一致 |
| 🟡 中 | 011/013 | 编译失败，但可规避（避免 VLA sizeof） |
| 🟡 中 | 007 | 编译失败，C11 标准特性 |
| 🟡 中 | 015 | 编译失败，但可通过编译选项规避 |
| 🟢 低 | 002 | 违反规范但可工作 |
| ⚪ 无 | 003 | 预期行为 |

---

## 七、后续工作

- [x] 分析 Issue 007 源码
- [x] 分析 Issue 010 源码
- [x] 分析 Issue 011/013 源码
- [x] 分析 Issue 015 源码
- [x] 确认 Issue 002/003 是否为 Bug
- [x] 分析 Issue 001 源码
- [x] 分析 Issue 004 源码
- [x] 分析 Issue 005 源码
- [x] 分析 Issue 016 源码

## 九、所有分析已完成

所有 16 个 Issue 的源码分析均已完成，分类如下：

| 类别 | 数量 | Issue编号 |
|------|------|----------|
| 真正的 Bug | 9 | 001, 004, 005, 007, 010, 011, 013, 015, 016 |
| 设计决定 | 2 | 002, 003 |
| 已知限制（非Bug）| 5 | 006, 008, 009, 012, 014 |

---

## 八、相关文件

- `BUG_REPORT.md` - 最初的 Bug 报告
- `TRAE.md` - 实验目的和方法说明
- `issues/` - 各个 issue 的详细记录
  - `issues/001-fnptr-undefined-symbols/notes/SOURCE_ANALYSIS.md`
  - `issues/004-vla-support/notes/SOURCE_ANALYSIS.md`
  - `issues/005-varargs-broken-export/notes/SOURCE_ANALYSIS.md`
  - `issues/007-c11-atomics-undefined-symbols/notes/SOURCE_ANALYSIS.md`
  - `issues/010-gnu-constructor-dropped/notes/SOURCE_ANALYSIS.md`
  - `issues/011-sizeof-tmp-undeclared/notes/SOURCE_ANALYSIS.md`
  - `issues/015-posix-pid_t-missing/notes/SOURCE_ANALYSIS.md`
  - `issues/016-slicing-term-lval-deps/notes/SOURCE_ANALYSIS.md`
- `test/` - 测试用例和运行脚本
