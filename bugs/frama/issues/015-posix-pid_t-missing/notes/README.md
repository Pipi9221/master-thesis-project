## 现象
当源程序包含 `<unistd.h>` 并调用 `getpid()` 时，切片导出的 `.sliced.c` 可能引入一个中间临时变量 `pid_t tmp;`，但在 `gcc -std=c11`（严格 ANSI 模式）下，系统头文件可能不会暴露 `pid_t` 这个 POSIX typedef（而仅使用内部的 `__pid_t`），从而导致切片产物编译失败：

```
error: unknown type name ‘pid_t’
```

这属于“导出阶段引入了原程序未显式依赖的类型名（并且该类型名在给定编译模式下不保证可见）”的问题。

## 环境
- Frama-C: 30.0 (Zinc)
- 说明：该现象与编译模式/特性宏相关，在 `-std=gnu11` 或定义合适的 POSIX 宏时可能不会触发。

## 最小复现用例
- [return_unistd_posix.c](issues/015-posix-pid_t-missing/cases/return_unistd_posix.c)

对应切片导出产物：
- [return_unistd_posix.sliced.c](issues/015-posix-pid_t-missing/artifacts/return_unistd_posix.sliced.c)

## 复现命令
```bash
opam exec --switch=4.14.2 -- frama-c cases/return_unistd_posix.c \
  -slice-return main \
  -then-on "Slicing export" -print -ocode artifacts/return_unistd_posix.sliced.c

gcc -std=c11 -O0 -Wall -Wextra artifacts/return_unistd_posix.sliced.c -o /tmp/a.out
```
