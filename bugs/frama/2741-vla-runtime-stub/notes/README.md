## 现象 A：导出代码引入未定义符号 `__fc_vla_alloc`
当源程序包含一维 VLA（变长数组）时，切片导出的 `.sliced.c` 会把 VLA 转成堆分配形式，并调用内置符号 `__fc_vla_alloc`，但导出文件里只有声明没有定义，导致无法独立链接：

- 典型报错：`undefined reference to __fc_vla_alloc`

复现用例：
- [value_vla_local_index.c](file://$SLICING_REPO/issues/004-vla-support/cases/value_vla_local_index.c)
- [value_vla_ptr_alias.c](file://$SLICING_REPO/issues/004-vla-support/cases/value_vla_ptr_alias.c)
- [return_vla_scope_escape.c](file://$SLICING_REPO/issues/004-vla-support/cases/return_vla_scope_escape.c)

对应导出产物：
- [value_vla_local_index.sliced.c](file://$SLICING_REPO/issues/004-vla-support/artifacts/value_vla_local_index.sliced.c)
- [value_vla_ptr_alias.sliced.c](file://$SLICING_REPO/issues/004-vla-support/artifacts/value_vla_ptr_alias.sliced.c)
- [return_vla_scope_escape.sliced.c](file://$SLICING_REPO/issues/004-vla-support/artifacts/return_vla_scope_escape.sliced.c)

复现命令（以 value_vla_local_index 为例）：
```bash
opam exec --switch=4.14.2 -- frama-c cases/value_vla_local_index.c \
  -slice-value g_out \
  -then-on "Slicing export" -print -ocode artifacts/value_vla_local_index.sliced.c

gcc -std=c11 -O0 -Wall -Wextra artifacts/value_vla_local_index.sliced.c -o /tmp/a.out
```

观察点：
- 产物中出现类似声明：`__fc_vla_alloc(unsigned long size)`，并在 main/被调函数中调用它，但没有其定义。

## 现象 B：二维 VLA 解析直接 abort（未实现特性）
对二维 VLA（仅第 1 维 VLA，其余维也为 VLA）进行解析时，Frama-C 直接中止并提示未实现：

```
[Frama-C] For multi-dimensional arrays, variable length is only supported on the first dimension
```

复现用例：
- [value_vla_param_2d.c](file://$SLICING_REPO/issues/004-vla-support/cases/value_vla_param_2d.c)

复现命令：
```bash
opam exec --switch=4.14.2 -- frama-c cases/value_vla_param_2d.c -slice-value g_out \
  -then-on "Slicing export" -print -ocode /tmp/out.c
```

