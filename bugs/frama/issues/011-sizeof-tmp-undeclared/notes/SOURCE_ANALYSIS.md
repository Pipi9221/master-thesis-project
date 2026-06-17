# Issue 011 源码分析：sizeof 临时变量未声明

> 分析时间：2026-02-13
> Frama-C 版本：30.0 (Zinc)

---

## 一、问题现象

当源程序在局部数组长度中使用 `sizeof(某个局部变量/表达式)` 时，切片导出的 `.sliced.c` 出现未声明的 `tmp_*` 变量。

### 测试用例

```c
// 原始程序
struct Pair { uint32_t a; uint32_t b; };

int main(void) {
  struct Pair p = {1U, 2U};
  uint8_t buf[sizeof(p)];          // VLA
  g_out = (uint32_t)sizeof(buf);
  return (int)(g_out & 0xFFU);
}
```

### 切片产物

```c
int main(void) {
  uint8_t buf[sizeof(tmp_0)];      // ❌ tmp_0 未声明！
  g_out = (uint32_t)sizeof(buf);
  return (int)(g_out & 0xFFU);
}
```

**编译错误**：`error: 'tmp_0' undeclared`

---

## 二、问题根因

### 2.1 处理流程

```
┌──────────────────────────────────────────────────────────────────────┐
│                    Frama-C 处理流程                                   │
├──────────────────────────────────────────────────────────────────────┤
│                                                                       │
│  1. 解析阶段 (cabs2cil.ml)                                            │
│     ─────────────────────────                                         │
│     • 遇到 VLA: uint8_t buf[sizeof(p)]                               │
│     • 创建临时变量 tmp_0 作为 sizeof(p) 的占位符                       │
│     • tmp_0 被添加到 blocals 中                                       │
│                                                                       │
│  2. 切片阶段 (filter.ml)                                              │
│     ───────────────────────                                          │
│     • vblock 过滤局部变量声明                                         │
│     • tmp_0 可能被标记为"不可见"                                      │
│     • tmp_0 从 blocals 中被删除 ❌                                    │
│                                                                       │
│  3. 规范化阶段 (slicingTransform.ml:450-468)                          │
│     ────────────────────────────────────────                          │
│     • normalize_sizeof_in_project 尝试转换 SizeOfE                    │
│     • 如果是 variably_modified_type，不转换                           │
│     • sizeof(tmp_0) 保持不变                                          │
│                                                                       │
│  4. 结果                                                              │
│     ──────                                                            │
│     • sizeof(tmp_0) 存在于表达式中                                    │
│     • tmp_0 的声明已被删除                                            │
│     • 编译失败！                                                      │
│                                                                       │
└──────────────────────────────────────────────────────────────────────┘
```

### 2.2 关键源码定位

#### A. VLA 处理 - 创建临时变量 (`cabs2cil.ml:1658-1682`)

```ocaml
method! vvrbl vi =
  if List.memq vi c.locals && vi.vdefined then begin
    (* This can happen in particular in a SizeOfE used in the size
       of a declared array. As the actual definition of the referenced
       variable is deported to the Local_init node, we use an undefined
       temp variable instead as placeholder. *)
    let vi' =
      match Cil_datatype.Varinfo.Hashtbl.find_opt replacements vi with
      | None ->
        let vi' = newTempVar ~ghost vi.vdecl (vi.vname ^ " initialization") true vi.vtype in
        Cil_datatype.Varinfo.Hashtbl.add replacements vi vi';
        vars := vi' :: !vars;
        vi'
      | Some vi' -> vi'
    in
    ChangeTo vi'
  end else SkipChildren
```

**注释说明**：在数组声明中使用 `SizeOfE` 时，会创建一个未定义的临时变量作为占位符。

#### B. 局部变量过滤 (`filter.ml:517-521`)

```ocaml
(* b.blocals still contains original varinfos at this stage. The
   remaining ones will be copied later in the visit. *)
b.blocals <-
  List.filter (Info.loc_var_visible (self#get_finfo ())) b.blocals;
```

**问题**：`tmp_*` 变量可能被判定为"不可见"而被过滤掉。

#### C. 变量可见性判断 (`slicingTransform.ml:383-387`)

```ocaml
let loc_var_visible ff_opt var = match ff_opt with
  | Isrc _ -> true
  | Iff {slice = ff} ->
    let m = Fct_slice.get_local_var_mark ff var in
    visible_mark m
```

**问题**：`tmp_*` 变量没有被正确标记为可见。

#### D. SizeOf 规范化 (`slicingTransform.ml:450-468`)

```ocaml
let normalize_sizeof_in_project () =
  let visitor =
    object
      inherit Visitor.frama_c_inplace
      method! vexpr e =
        match e.enode with
        | SizeOfE e' ->
          let t = Cil.typeOf e' in
          if Cil.is_variably_modified_type t then Cil.DoChildren  // 不转换
          else Cil.ChangeTo (Cil.new_exp ~loc:e.eloc (SizeOf t))
        | _ -> Cil.DoChildren
    end
  in
  Visitor.visitFramacFileSameGlobals visitor (Ast.get ())
```

**问题**：当类型是 VLA 时，不进行转换，保留了 `sizeof(tmp_*)`。

---

## 三、问题本质

```
┌──────────────────────────────────────────────────────────────────────┐
│                    声明与使用不同步                                   │
├──────────────────────────────────────────────────────────────────────┤
│                                                                       │
│  AST 中的情况：                                                       │
│  ──────────────                                                      │
│                                                                       │
│  blocals: []                    // tmp_0 被过滤掉了                   │
│                                                                       │
│  statements:                                                          │
│    uint8_t buf[sizeof(tmp_0)];   // tmp_0 仍然被引用！               │
│                                                                       │
│  结果：声明和使用不一致，编译失败                                      │
│                                                                       │
└──────────────────────────────────────────────────────────────────────┘
```

---

## 四、为什么会出现这种情况？

### 4.1 变量声明顺序重排

在切片产物中，变量声明被重排：

```c
// 原始程序
struct Pair p = {1U, 2U};  // p 先声明
uint8_t buf[sizeof(p)];    // buf 后声明

// 切片后
uint8_t buf[sizeof(tmp_0)];  // buf 先声明（tmp_0 未定义）
struct Pair p = {...};       // p 后声明
```

这是因为切片器按照依赖关系重新排序了变量声明。

### 4.2 临时变量的来源

原始代码：
```c
uint8_t buf[sizeof(p)]
```

CIL 规范化后：
```c
// p 被移到 Local_init
struct Pair p;
p.a = 1U; p.b = 2U;

// sizeof(p) 被替换为 sizeof(tmp_0)
// tmp_0 是一个"占位符"，类型与 p 相同
uint8_t buf[sizeof(tmp_0)];
```

---

## 五、修复方案

### 方案 A：正确标记临时变量为可见

在切片标记阶段，确保被 `SizeOfE` 引用的临时变量被标记为可见：

```ocaml
(* 伪代码：在标记阶段检测 SizeOfE 中引用的变量 *)
let mark_sizeof_temps pdg =
  let visitor = object
    inherit Visitor.frama_c_inplace
    method! vexpr e = match e.enode with
      | SizeOfE { enode = Lval (Var vi, _) } ->
        (* 标记 vi 为可见 *)
        mark_variable_visible vi
      | _ -> SkipChildren
  end in
  Visitor.visitFramacFileSameGlobals visitor file
```

### 方案 B：在 normalize_sizeof 中使用原始类型

修改 `normalize_sizeof_in_project`，即使对于 VLA 类型也尝试还原：

```ocaml
| SizeOfE e' ->
  let t = Cil.typeOf e' in
  (* 尝试获取原始类型，而非使用临时变量 *)
  let t' = if is_temp_variable e' then get_original_type e' else t in
  if Cil.is_variably_modified_type t' then Cil.DoChildren
  else Cil.ChangeTo (Cil.new_exp ~loc:e.eloc (SizeOf t'))
```

### 方案 C：在导出时保留必要的临时变量声明

修改 `filter.ml` 中的 `vblock`，确保被 `SizeOfE` 引用的变量不被过滤：

```ocaml
b.blocals <-
  List.filter (fun var ->
    Info.loc_var_visible (self#get_finfo ()) var
    || is_referenced_in_sizeof var b.bstmts  // 新增检查
  ) b.blocals;
```

---

## 六、相关代码引用

- `src/kernel_internals/typing/cabs2cil.ml:1658-1682` - 创建 sizeof 临时变量
- `src/kernel_services/ast_transformations/filter.ml:517-521` - 过滤局部变量
- `src/plugins/slicing/slicingTransform.ml:383-387` - 变量可见性判断
- `src/plugins/slicing/slicingTransform.ml:450-468` - SizeOf 规范化
- `src/plugins/slicing/slicingTransform.ml:470-491` - extract 函数流程

---

## 七、结论

Issue 011 是一个**导出阶段 Bug**：

1. **根本原因**：变量声明过滤和表达式规范化不同步
2. **触发条件**：VLA（变长数组）中使用 `sizeof(局部变量)`
3. **表现形式**：`tmp_*` 临时变量在表达式中被引用，但声明被删除

修复需要在切片过滤阶段正确处理 `SizeOfE` 表达式中引用的临时变量，或者在规范化阶段正确还原原始类型。
