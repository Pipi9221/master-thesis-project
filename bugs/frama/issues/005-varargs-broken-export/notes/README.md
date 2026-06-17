## 现象
当源程序使用 C varargs（`stdarg.h` / `va_list` / `va_arg`）时，切片导出的 `.sliced.c` 可能生成不合法的 C 代码，导致无法编译。

典型编译错误（gcc）：
- `assignment to expression with array type`
- `lvalue required as increment operand`

## 复现用例
- [return_varargs_stdarg.c](file:///home/cyuan/projects/Slicing/issues/005-varargs-broken-export/cases/return_varargs_stdarg.c)

对应切片导出产物：
- [return_varargs_stdarg.sliced.c](file:///home/cyuan/projects/Slicing/issues/005-varargs-broken-export/artifacts/return_varargs_stdarg.sliced.c)

## 复现命令
```bash
opam exec --switch=4.14.2 -- frama-c cases/return_varargs_stdarg.c \
  -slice-return main,sum \
  -then-on "Slicing export" -print -ocode artifacts/return_varargs_stdarg.sliced.c

gcc -std=c11 -O0 -Wall -Wextra artifacts/return_varargs_stdarg.sliced.c -o /tmp/a.out
```

## 观察点
- 导出产物把 `sum` 的 varargs 改写为 `sum_slice_1(uint32_t n, void * const *__va_params)` 并尝试把 `va_list ap` 直接当作指针数组用（`ap = __va_params; ap++`），这在常见实现里不成立（`va_list` 可能是数组类型）。

