## 现象
在使用 `-slice-value` 且显式指定 `-main` 为非 `main` 的函数时，导出的 `.sliced.c` 可能不再包含任何 `main` 函数，导致无法作为独立程序链接执行。

这会直接引发链接错误：
- `undefined reference to main`

## 复现用例
- [value_entry_point_option_main.c](issues/003-main-missing-with-main-option/cases/value_entry_point_option_main.c)

对应切片导出产物：
- [value_entry_point_option_main.sliced.c](issues/003-main-missing-with-main-option/artifacts/value_entry_point_option_main.sliced.c)

## 复现命令
```bash
opam exec --switch=4.14.2 -- frama-c cases/value_entry_point_option_main.c \
  -main foo \
  -slice-value g \
  -then-on "Slicing export" -print -ocode artifacts/value_entry_point_option_main.sliced.c

gcc -std=c11 -O0 -Wall -Wextra artifacts/value_entry_point_option_main.sliced.c -o /tmp/a.out
```

## 观察点
- 导出的 `.sliced.c` 里只保留了 `foo` 和被选中的全局 `g`，没有 `main`（见 [value_entry_point_option_main.sliced.c](issues/003-main-missing-with-main-option/artifacts/value_entry_point_option_main.sliced.c)）。

