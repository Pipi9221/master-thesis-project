## 根因分析

### 问题定位

Issue 001 涉及函数指针在切片导出时的处理。根据 README 中的线索，源码定位在 `slicingTransform.ml:65-76`：

```ocaml
let need_addr = (Kernel_function.get_vi kf).vaddrof in
let src_name_used = src_visible || need_addr in
...
else if need_addr then  Isrc keep_body :: info_list
```

### 根因

当函数地址被取用（`need_addr = true`）时，切片会保留该函数的函数体，但问题在于：

1. **slicingTransform.ml** 中的处理逻辑：当 `need_addr` 为真时，保留原始函数体（Isrc）
2. 但切片导出时，会将原始函数重命名并生成新的切片函数（如 `f2_slice_1`）
3. 全局函数指针（如 `static uint32_t (*fp)(uint32_t) = &f1;`）仍然指向原符号 `f1`
4. 由于 `f1` 不是切片准则依赖的函数，它在导出时只保留了原型声明，没有函数体

### 关键代码位置

- `slicingTransform.ml:65-76`: 函数可见性和地址处理
- `slicingTransform.ml:77-91`: 函数命名逻辑（`fct_name` 函数决定导出后的函数名）

### 结论

这是一个**真正的 bug**。切片在处理函数指针时没有正确更新指针指向的目标，使其指向切片生成的函数体而非原始未定义的函数符号。
