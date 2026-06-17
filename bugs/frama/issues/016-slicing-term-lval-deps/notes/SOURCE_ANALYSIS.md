## 根因分析

### 问题定位

根据 README 中的错误信息：
```
Plug-in slicing aborted: unimplemented feature.
... '[Plug-in slicing] [logic_interp] dependencies of a term lval'
```

搜索源码找到问题位置：

```
src/kernel_services/analysis/logic_deps.ml:400
  raise (NYI "[logic_interp] dependencies of a term lval")
```

### 根因

在 `logic_deps.ml` 中：

```ocaml
let compute_term_deps = ref (fun _stmt _expr -> None)

method private do_term_lval t =
  let current_before, current_stmt = self#get_ctrl_point () in
  match !compute_term_deps current_stmt t with
  | Some zone ->
    let filter = function Base.CLogic_Var _ -> false | _ -> true in
    let zone = Locations.Zone.filter_base filter zone in
    zones <- add_zone ~before:current_before current_stmt zone zones
  | None ->
    raise (NYI "[logic_interp] dependencies of a term lval")
```

1. `compute_term_deps` 是由 EVA（值分析）插件提供的函数，默认返回 `None`
2. 当分析 ACSL 逻辑变量（如 `\forall` 引入的变量）时，这些变量没有对应的 C lvalue
3. EVA 无法为这些逻辑变量计算依赖区域（zone）
4. 当 `compute_term_deps` 返回 `None` 时，代码抛出 "unimplemented feature" 异常

### 结论

这是一个**真正的 bug**（或更准确地说，是未完成的功能）。切片插件在处理 ACSL 逻辑变量的依赖分析时存在未实现的功能路径，导致使用 `-slice-loop-inv` 时遇到包含逻辑变量的 loop invariant 时会中止。
