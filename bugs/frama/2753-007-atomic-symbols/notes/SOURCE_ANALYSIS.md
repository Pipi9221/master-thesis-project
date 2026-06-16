# Issue 007 源码分析：C11 原子操作导出未定义符号

> 分析时间：2026-02-13
> Frama-C 版本：30.0 (Zinc)

---

## 一、问题现象

当源程序使用 C11 原子操作（`stdatomic.h` / `_Atomic`）时，切片导出的 `.sliced.c` 引入 `__fc_atomic_*` 符号，但这些符号只有声明没有定义，导致链接失败。

**编译错误**：
```
undefined reference to `__fc_atomic_fetch_add'
undefined reference to `__fc_atomic_load'
```

---

## 二、源码定位

### 2.1 关键文件

| 文件 | 作用 |
|------|------|
| `share/libc/stdatomic.h` | Frama-C 的 stdatomic.h 实现，定义宏展开 |
| `share/libc/stdatomic.c` | `__fc_atomic_*` 函数的实现 |
| `src/kernel_services/ast_printing/cil_printer.ml` | C 代码打印器，负责导出代码 |

### 2.2 核心代码：`cil_printer.ml`

```ocaml
(* 第 97-110 行 *)

(* for specific builtin functions that act as placeholder for C macros.
   For each name f below, pretty-printer will replace f and &f with the
   corresponding name. Be sure to keep the list in sync with share/libc.
*)
let rename_builtins = Datatype.String.Hashtbl.create 17

let () =
  List.iter (fun (x,y) -> Datatype.String.Hashtbl.add rename_builtins x y)
    [
      "__fc_sig_dfl", "SIG_DFL";
      "__fc_sig_ign", "SIG_IGN";
      "__fc_sig_err", "SIG_ERR";
    ]
```

---

## 三、数据流分析

```
┌──────────────────────────────────────────────────────────────────────┐
│                    数据流分析                                         │
├──────────────────────────────────────────────────────────────────────┤
│                                                                       │
│  用户代码:                          Frama-C 处理:                     │
│  ─────────                         ─────────────                      │
│                                                                       │
│  atomic_fetch_add(&g, x)    ───>   预处理阶段:                        │
│                                       ↓                               │
│  (宏展开，来自 stdatomic.h)         __fc_atomic_fetch_add(            │
│                                       &g, x, sizeof(*g))              │
│                                       ↓                               │
│                                    AST 构建                          │
│                                       ↓                               │
│  导出打印:                          CIL Printer                      │
│  ─────────                         ────────────                      │
│                                    查找 rename_builtins 表            │
│                                       ↓                               │
│                                    __fc_atomic_* 不在表中！           │
│                                       ↓                               │
│                                    直接打印 __fc_atomic_fetch_add    │
│                                                                       │
│  结果: 导出产物包含未定义符号 __fc_atomic_fetch_add                   │
│                                                                       │
└──────────────────────────────────────────────────────────────────────┘
```

---

## 四、宏展开对比

### 4.1 stdatomic.h 中的定义

```c
// share/libc/stdatomic.h:259-263
#define atomic_fetch_add(obj, operand) \
  __fc_atomic_fetch_add(obj, operand, sizeof(*obj))
```

### 4.2 参数差异

| 原始宏 | 展开后 |
|--------|--------|
| `atomic_fetch_add(&g, x)` | `__fc_atomic_fetch_add(&g, x, sizeof(*g))` |
| **2 个参数** | **3 个参数**（多了 `size`） |

### 4.3 关键问题

`rename_builtins` 机制**只能做名称映射**，无法：
1. 改变参数数量
2. 修改函数签名

---

## 五、实现文件存在但未包含

`share/libc/stdatomic.c` 中有完整的实现：

```c
// 第 124-144 行
unsigned long long __fc_atomic_fetch_add(void *obj, unsigned long long operand,
                                         size_t obj_size) {
  unsigned long long r = 0;
  if (obj_size == sizeof(int)) {
    r = *((volatile atomic_uint *)obj);
    *((volatile atomic_uint *)obj) += operand;
  }
  // ... 其他类型处理
  return r;
}
```

**问题**：切片导出时，只导出用户代码的 AST，不包含 Frama-C 运行时实现。

---

## 六、根本原因总结

| 层次 | 问题 |
|------|------|
| **设计层** | Frama-C 用函数替代宏，但导出时无法还原为原始宏 |
| **实现层** | `__fc_atomic_*` 未加入 `rename_builtins`（即使加入也无法解决参数问题） |
| **运行时** | 实现文件存在，但导出时未包含 |

---

## 七、修复方案

### 方案 A：在打印器中特殊处理（推荐）

修改 `cil_printer.ml`，检测 `__fc_atomic_*` 调用，还原为标准 C11 原子操作：

```ocaml
(* 伪代码示例 *)
| Call(dest, {enode = Lval(Var vi, NoOffset)}, [obj; operand; _size], _)
  when String.starts_with vi.vname "__fc_atomic_" ->
  let orig_name = 
    (* 从 __fc_atomic_fetch_add 提取 atomic_fetch_add *)
    String.sub vi.vname 4 (String.length vi.vname - 4)
  in
  (* 还原为标准 atomic_* 调用，去掉 size 参数 *)
  fprintf fmt "%a = %s(%a, %a)" 
    self#lval (Option.get dest)
    orig_name
    self#exp obj
    self#exp operand
```

### 方案 B：导出时包含运行时实现

在切片导出时，自动包含 `share/libc/stdatomic.c` 中相关函数的实现。

### 方案 C：提供运行时库选项

添加命令行选项，让用户指定是否链接 Frama-C 运行时库：

```bash
frama-c -slice-return main input.c \
  -link-frama-c-runtime \
  -then-on "Slicing export" -print -ocode output.c
```

---

## 八、相关代码引用

- `src/kernel_services/ast_printing/cil_printer.ml:97-110` - `rename_builtins` 定义
- `src/kernel_services/ast_printing/cil_printer.ml:693-701` - `varname` 方法，处理名称重写
- `share/libc/stdatomic.h:52-53` - `_Atomic` 定义为空
- `share/libc/stdatomic.h:259-263` - `atomic_fetch_add` 宏定义
- `share/libc/stdatomic.c:124-144` - `__fc_atomic_fetch_add` 实现

---

## 九、结论

Issue 007 是一个**设计限制 + 实现不完整**的问题：

1. **设计限制**：Frama-C 使用函数替代宏来建模原子操作，便于静态分析
2. **实现不完整**：导出阶段未处理这种"函数→宏"的逆向转换
3. **运行时缺失**：实现文件存在但未自动包含

要修复需要在 CIL 打印器中添加特殊处理，将 `__fc_atomic_*` 调用还原为标准 C11 原子操作语法。
