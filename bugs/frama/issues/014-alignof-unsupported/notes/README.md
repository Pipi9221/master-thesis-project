## 现象
源程序使用 C11 `_Alignof(type)` 时，Frama-C 在解析阶段直接报错：

```
_Alignof is currently unsupported by Frama-C.
```

从而无法进行切片与导出。

## 环境
- Frama-C: 30.0 (Zinc)

## 复现用例
- [value_alignof_struct.c](issues/014-alignof-unsupported/cases/value_alignof_struct.c)

## 复现命令
```bash
opam exec --switch=4.14.2 -- frama-c cases/value_alignof_struct.c \
  -slice-value g_out \
  -then-on "Slicing export" -print -ocode /tmp/out.c
```
