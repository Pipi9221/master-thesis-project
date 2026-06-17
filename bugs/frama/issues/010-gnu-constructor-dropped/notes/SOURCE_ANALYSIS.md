# Issue 010 源码分析：GNU Constructor/Destructor 被丢弃

> 分析时间：2026-02-13
> Frama-C 版本：30.0 (Zinc)

---

## 一、问题现象

当源程序依赖"main 之外的生命周期钩子"产生可观察行为时，切片导出的 `.sliced.c` 丢失这些钩子逻辑，导致程序行为不一致。

### 测试用例 1：constructor

```c
// 原始程序
static uint32_t g = 0U;

__attribute__((constructor)) static void init(void) {
  g = (7U * 33U) ^ 0x5Au;  // g = 182
}

int main(void) {
  uint32_t out = g + 1U;   // out = 183
  return (int)(out & 0xFFU);
}
```

**原始返回值**: 183  
**切片后返回值**: 1 （`g` 保持为 0）

### 测试用例 2：atexit

```c
// 原始程序
static void on_exit_hook(void) {
  exit(200);
}

int main(void) {
  atexit(on_exit_hook);
  return 0;
}
```

**原始返回值**: 200  
**切片后返回值**: 0

---

## 二、问题根因

### 2.1 核心问题

```
┌──────────────────────────────────────────────────────────────────────┐
│                    问题根因分析                                       │
├──────────────────────────────────────────────────────────────────────┤
│                                                                       │
│  程序实际执行顺序:                                                    │
│  ─────────────────                                                   │
│                                                                       │
│  1. 运行时初始化                                                      │
│  2. constructor 函数执行  ──> g = 182                                │
│  3. main() 执行           ──> out = g + 1 = 183                      │
│  4. destructor/atexit 执行                                            │
│                                                                       │
│                                                                       │
│  Frama-C 分析顺序:                                                    │
│  ─────────────────                                                   │
│                                                                       │
│  1. 从入口点(main)开始分析                                            │
│  2. constructor 函数"没有被调用"                                      │
│  3. g 保持初始值 0                                                    │
│  4. 切片删除 init() 函数                                              │
│                                                                       │
└──────────────────────────────────────────────────────────────────────┘
```

### 2.2 关键源码定位

#### A. 入口点分析 (`register.ml:25-63`)

```ocaml
let main () =
  if SlicingParameters.is_on () then begin
    Eva.Analysis.compute ();  // 从入口点开始分析
    
    (* 如果没有切片请求，且开启了 -slice-callers，则从入口点开始 *)
    if Api.Request.is_request_empty_internal () then
      begin
        let kf_entry, _library = Globals.entry_point () in
        (* 从入口点函数开始选择调用 *)
        let set = Api.Select.select_func_calls_into set ~spare:true kf_entry;
      end;
  end
```

#### B. 完整程序根节点识别 (`rmtmps.ml:307-318`)

```ocaml
(* 识别"完整程序"的根节点 - 包括 constructor/destructor *)
let isCompleteProgramRoot global =
  let result = match global with
    | GFun ({svar = {vname = "main"; vstorage = vstorage}}, _) ->
      vstorage <> Static
    | GFun (fundec, _)
      when hasExportingAttribute fundec.svar ->  // constructor/destructor
      true
    | _ ->
      false
  in
  result
```

#### C. Constructor 属性检测 (`rmtmps.ml:225-231`)

```ocaml
let hasExportingAttribute funvar =
  let isExportingAttribute = function
    | Attr ("constructor", []) -> true
    | Attr ("destructor", []) -> true
    | _ -> false
  in
  List.exists isExportingAttribute funvar.vattr
```

### 2.3 问题所在

| 阶段 | Frama-C 行为 | 问题 |
|------|-------------|------|
| **Eva 分析** | 从 `main` 开始，不执行 constructor | constructor 副作用未被建模 |
| **PDG 构建** | 只有显式调用才建立依赖 | constructor 对全局变量的写无依赖边 |
| **切片选择** | 只选择 `main` 的返回值依赖 | constructor 函数被删除 |

---

## 三、为什么 `rmtmps.ml` 的处理无效？

`rmtmps.ml` 中的 `isCompleteProgramRoot` 确实能识别 constructor 函数为"根节点"，但：

1. **这是用于"删除未使用代码"**，不是用于"依赖分析"
2. **切片使用的是 PDG（程序依赖图）**，不是这个根节点列表
3. **PDG 只跟踪显式调用**，不跟踪运行时隐式调用

---

## 四、生命周期钩子的分类

| 钩子类型 | 触发时机 | Frama-C 支持 |
|---------|---------|-------------|
| `__attribute__((constructor))` | main 之前 | ❌ 不追踪 |
| `__attribute__((destructor))` | main 之后/exit | ❌ 不追踪 |
| `atexit(handler)` | exit 时 | ❌ 不追踪 |
| `__attribute__((cleanup(func)))` | 变量作用域结束 | ❌ 不追踪 |

---

## 五、数据流对比

### 正确的依赖关系

```
main.return ──依赖──> g ──依赖──> init() (constructor)
                                      │
                                      └── 运行时在 main 之前调用
```

### Frama-C 的依赖分析

```
main.return ──依赖──> g (初始值 0)
                    │
                    └── init() 未被分析为调用者
```

---

## 六、修复方案

### 方案 A：在依赖分析中添加隐式调用边

修改 PDG 构建，在入口点函数分析时，添加对 constructor 函数的隐式调用边：

```ocaml
(* 伪代码：在分析入口点时添加对 constructor 的调用 *)
let add_constructor_calls pdg entry_kf =
  let constructors = find_constructor_functions () in
  List.iter (fun ctor_kf ->
    (* 添加从 entry 到 constructor 的调用边 *)
    Pdg.add_call_edge pdg entry_kf ctor_kf
  ) constructors
```

### 方案 B：将 constructor 副作用传播到入口点

在 Eva 分析初始化阶段，将 constructor 的副作用合并到入口点的初始状态：

```ocaml
let compute_from_entry_point kf ~lib_entry =
  (* 先执行 constructor 函数 *)
  let constructors = find_constructor_functions () in
  let state = List.fold_left (fun s ctor_kf ->
    execute_function ctor_kf s
  ) initial_state constructors in
  (* 然后从 main 开始分析 *)
  analyze_from kf state
```

### 方案 C：警告用户

在切片时检测程序是否包含 constructor/destructor/atexit，给出警告：

```ocaml
let check_lifecycle_hooks () =
  let has_constructor = exists_constructor_function () in
  if has_constructor then
    SlicingParameters.warning 
      "Program contains constructor functions. Slicing may be unsound.";
```

---

## 七、相关代码引用

- `src/kernel_internals/typing/rmtmps.ml:225-231` - `hasExportingAttribute` 检测
- `src/kernel_internals/typing/rmtmps.ml:307-318` - `isCompleteProgramRoot` 根节点识别
- `src/plugins/slicing/register.ml:25-63` - 切片入口
- `src/plugins/slicing/slicingCmds.ml:267-282` - `select_func_return` 选择返回值
- `src/plugins/eva/engine/analysis.ml:215-220` - Eva 从入口点开始分析

---

## 八、结论

Issue 010 是一个**正确性 Bug**：

1. **根本原因**：Frama-C 的分析从 `main` 开始，没有建模运行时对 constructor/destructor 的隐式调用
2. **影响范围**：所有依赖生命周期钩子产生副作用的程序
3. **严重程度**：🔴 高 — 导致切片前后程序行为不一致

这是一个**设计层面的缺陷**，需要修改 Eva 分析的初始化逻辑或 PDG 的依赖追踪机制。
