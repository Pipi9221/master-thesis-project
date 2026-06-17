## 现象
当源程序在局部数组长度中使用 `sizeof(某个局部变量/表达式)`（例如 `uint8_t buf[sizeof(p)]`）时，切片导出的 `.sliced.c` 可能生成不可编译的 C 代码：

- 导出产物中出现 `uint8_t buf[sizeof(tmp_0)];` / `sizeof(tmp_1_0)` 等
- 但 `tmp_0` / `tmp_1_0` 并未在任何位置声明
- gcc 报错：`error: ‘tmp_0’ undeclared`

这更像是“导出/打印阶段对 AST 重写/语句重排”带来的不一致（将数组声明提到前面但忘了引入对应的临时符号或替换回原表达式）。

## 最小复现用例
- [value_sizeof_buf_of_sizeof_struct.c](issues/011-sizeof-tmp-undeclared/cases/value_sizeof_buf_of_sizeof_struct.c)

对应切片导出产物：
- [value_sizeof_buf_of_sizeof_struct.sliced.c](issues/011-sizeof-tmp-undeclared/artifacts/value_sizeof_buf_of_sizeof_struct.sliced.c)

## 变体（同类触发）
- [value_memcpy_alias.c](issues/011-sizeof-tmp-undeclared/cases/value_memcpy_alias.c)
- [value_memcpy_alias.sliced.c](issues/011-sizeof-tmp-undeclared/artifacts/value_memcpy_alias.sliced.c)

## 复现命令
```bash
opam exec --switch=4.14.2 -- frama-c cases/value_sizeof_buf_of_sizeof_struct.c \
  -slice-value g_out \
  -then-on "Slicing export" -print -ocode artifacts/value_sizeof_buf_of_sizeof_struct.sliced.c

gcc -std=c11 -O0 -Wall -Wextra artifacts/value_sizeof_buf_of_sizeof_struct.sliced.c -o /tmp/a.out
```

