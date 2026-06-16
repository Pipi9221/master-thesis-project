## 现象
当源程序使用 C11 原子（`stdatomic.h` / `_Atomic` / `atomic_fetch_add` / `atomic_load`）时，切片导出的 `.sliced.c` 会引入 `__fc_atomic_*` 符号（如 `__fc_atomic_fetch_add`、`__fc_atomic_load`），但导出文件里没有这些符号的定义，导致无法独立链接。

典型报错：
- `undefined reference to __fc_atomic_fetch_add`
- `undefined reference to __fc_atomic_load`

## 复现用例
- [return_c11_atomic.c](file://$SLICING_REPO/issues/007-c11-atomics-undefined-symbols/cases/return_c11_atomic.c)

对应切片导出产物：
- [return_c11_atomic.sliced.c](file://$SLICING_REPO/issues/007-c11-atomics-undefined-symbols/artifacts/return_c11_atomic.sliced.c)

## 复现命令
```bash
opam exec --switch=4.14.2 -- frama-c cases/return_c11_atomic.c \
  -slice-return main,inc \
  -then-on "Slicing export" -print -ocode artifacts/return_c11_atomic.sliced.c

gcc -std=c11 -O0 -Wall -Wextra artifacts/return_c11_atomic.sliced.c -o /tmp/a.out
```

