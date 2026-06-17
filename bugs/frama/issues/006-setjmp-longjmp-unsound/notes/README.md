## 现象
当源程序使用 `setjmp/longjmp` 改变控制流时，在 `-slice-return main` 下导出的 `.sliced.c` 可能删除关键路径（例如触发 `longjmp` 的调用），导致切片后 `main` 返回值与原程序不一致。

## 复现用例
- [return_setjmp_longjmp.c](file:///home/cyuan/projects/Slicing/issues/006-setjmp-longjmp-unsound/cases/return_setjmp_longjmp.c)

对应切片导出产物：
- [return_setjmp_longjmp.sliced.c](file:///home/cyuan/projects/Slicing/issues/006-setjmp-longjmp-unsound/artifacts/return_setjmp_longjmp.sliced.c)

## 复现命令
```bash
opam exec --switch=4.14.2 -- frama-c cases/return_setjmp_longjmp.c \
  -slice-return main \
  -then-on "Slicing export" -print -ocode artifacts/return_setjmp_longjmp.sliced.c

gcc -std=c11 -O0 -Wall -Wextra cases/return_setjmp_longjmp.c -o /tmp/orig.bin
gcc -std=c11 -O0 -Wall -Wextra artifacts/return_setjmp_longjmp.sliced.c -o /tmp/sliced.bin
/tmp/orig.bin; echo $?
/tmp/sliced.bin; echo $?
```

## 观察点
- 切片产物只保留了 `setjmp(env)` 和 `out = g ^ j`，但删除了 `trigger()` 与 `longjmp()` 相关路径，导致 `g` 永远为 0、`j` 只会是 0，从而 `main` 的返回值改变。

