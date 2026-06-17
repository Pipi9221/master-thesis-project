## 现象
源程序包含 `complex.h`（C99 复数类型）时，Frama-C 自带 libc 的 `complex.h` 会触发预处理阶段的硬错误：

```
#error "Frama-C: unsupported complex.h"
```

导致 Frama-C 无法解析该源文件，从而无法进行切片。

## 复现用例
- [return_complex_double.c](file:///home/cyuan/projects/Slicing/issues/008-complex-unsupported/cases/return_complex_double.c)

## 复现命令
```bash
opam exec --switch=4.14.2 -- frama-c cases/return_complex_double.c \
  -slice-return main,f \
  -then-on "Slicing export" -print -ocode /tmp/out.c
```

