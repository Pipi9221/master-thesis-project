## 现象
当源程序依赖“main 之外的生命周期钩子”产生可观察行为时，在 `-slice-return main` 下切片导出的 `.sliced.c` 可能丢失这些钩子逻辑，导致 `main` 的返回值（以及输出/退出码）与原程序不一致。

## 复现用例
- [return_gnu_constructor_init.c](file:///home/cyuan/projects/Slicing/issues/010-gnu-constructor-dropped/cases/return_gnu_constructor_init.c)
- [return_atexit_exitcode.c](file:///home/cyuan/projects/Slicing/issues/010-gnu-constructor-dropped/cases/return_atexit_exitcode.c)
- [return_gnu_destructor_exitcode.c](file:///home/cyuan/projects/Slicing/issues/010-gnu-constructor-dropped/cases/return_gnu_destructor_exitcode.c)
- [return_gnu_cleanup_attribute.c](file:///home/cyuan/projects/Slicing/issues/010-gnu-constructor-dropped/cases/return_gnu_cleanup_attribute.c)

对应切片导出产物：
- [return_gnu_constructor_init.sliced.c](file:///home/cyuan/projects/Slicing/issues/010-gnu-constructor-dropped/artifacts/return_gnu_constructor_init.sliced.c)
- [return_atexit_exitcode.sliced.c](file:///home/cyuan/projects/Slicing/issues/010-gnu-constructor-dropped/artifacts/return_atexit_exitcode.sliced.c)
- [return_gnu_destructor_exitcode.sliced.c](file:///home/cyuan/projects/Slicing/issues/010-gnu-constructor-dropped/artifacts/return_gnu_destructor_exitcode.sliced.c)
- [return_gnu_cleanup_attribute.sliced.c](file:///home/cyuan/projects/Slicing/issues/010-gnu-constructor-dropped/artifacts/return_gnu_cleanup_attribute.sliced.c)

## 复现命令
```bash
opam exec --switch=4.14.2 -- frama-c cases/return_gnu_constructor_init.c \
  -slice-return main \
  -then-on "Slicing export" -print -ocode artifacts/return_gnu_constructor_init.sliced.c

gcc -std=c11 -O0 -Wall -Wextra cases/return_gnu_constructor_init.c -o /tmp/orig.bin
gcc -std=c11 -O0 -Wall -Wextra artifacts/return_gnu_constructor_init.sliced.c -o /tmp/sliced.bin
/tmp/orig.bin; echo $?
/tmp/sliced.bin; echo $?
```

## 观察点
- 切片产物中 `g` 仍为 0，constructor 函数（init）被删除或不再作为 constructor 执行。
