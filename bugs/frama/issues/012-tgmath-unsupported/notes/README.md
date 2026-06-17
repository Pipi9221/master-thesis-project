## 现象
源程序包含 `tgmath.h` 时，Frama-C 自带 libc 的 `tgmath.h` 在预处理阶段直接触发硬错误：

```
#error "Frama-C: unsupported tgmath.h"
```

因此 Frama-C 无法解析该源文件，从而无法进行切片。

## 环境
- Frama-C: 30.0 (Zinc)

## 复现用例
- [return_tgmath_unsupported.c](issues/012-tgmath-unsupported/cases/return_tgmath_unsupported.c)

## 复现命令
```bash
opam exec --switch=4.14.2 -- frama-c cases/return_tgmath_unsupported.c \
  -slice-return main \
  -then-on "Slicing export" -print -ocode /tmp/out.c
```
