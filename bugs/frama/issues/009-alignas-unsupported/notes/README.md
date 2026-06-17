## 现象
当源程序使用 C11 `_Alignas` 指定对齐时，Frama-C 在解析阶段直接报错并中止：

```
_Alignas is currently unsupported by Frama-C.
```

因此无法进入后续 Eva/Slicing 阶段。

## 复现用例
- [return_c11_alignas_alignof.c](file:///home/cyuan/projects/Slicing/issues/009-alignas-unsupported/cases/return_c11_alignas_alignof.c)

## 复现命令
```bash
opam exec --switch=4.14.2 -- frama-c cases/return_c11_alignas_alignof.c \
  -slice-return main,f \
  -then-on "Slicing export" -print -ocode /tmp/out.c
```

