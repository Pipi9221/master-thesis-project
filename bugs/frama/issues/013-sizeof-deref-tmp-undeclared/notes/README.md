## 现象
当局部数组长度包含 `sizeof(*p)`（对指针解引用的 sizeof）时，切片导出的 `.sliced.c` 可能生成不可编译的 C 代码：

- 导出产物中出现 `uint8_t buf[sizeof(*tmp_0)];`
- 但 `tmp_0` 并未声明（也无法合法声明，因为其类型应来自原始指针表达式的语义）
- gcc 报错：`error: ‘tmp_0’ undeclared`

这属于“导出/打印阶段在提升声明或重写 sizeof 表达式时未正确替换/绑定临时符号”的问题，和 issue 011（`sizeof(...)` 里生成未声明 tmp_*）是近邻，但更具体在“对解引用的 sizeof”上多了一层表达式形态。

## 最小复现用例
- [value_sizeof_deref_buf.c](issues/013-sizeof-deref-tmp-undeclared/cases/value_sizeof_deref_buf.c)

对应切片导出产物：
- [value_sizeof_deref_buf.sliced.c](issues/013-sizeof-deref-tmp-undeclared/artifacts/value_sizeof_deref_buf.sliced.c)

## 变体（同类触发）
- `sizeof(p[0])`：
  - [value_sizeof_index_buf.c](issues/013-sizeof-deref-tmp-undeclared/cases/value_sizeof_index_buf.c)
  - [value_sizeof_index_buf.sliced.c](issues/013-sizeof-deref-tmp-undeclared/artifacts/value_sizeof_index_buf.sliced.c)
- `sizeof(*(cond ? p : q))`：
  - [value_sizeof_conditional_deref.c](issues/013-sizeof-deref-tmp-undeclared/cases/value_sizeof_conditional_deref.c)
  - [value_sizeof_conditional_deref.sliced.c](issues/013-sizeof-deref-tmp-undeclared/artifacts/value_sizeof_conditional_deref.sliced.c)
- `sizeof(*(&s))`：
  - [value_sizeof_addr_deref.c](issues/013-sizeof-deref-tmp-undeclared/cases/value_sizeof_addr_deref.c)
  - [value_sizeof_addr_deref.sliced.c](issues/013-sizeof-deref-tmp-undeclared/artifacts/value_sizeof_addr_deref.sliced.c)

## 复现命令
```bash
opam exec --switch=4.14.2 -- frama-c cases/value_sizeof_deref_buf.c \
  -slice-value g_out \
  -then-on "Slicing export" -print -ocode artifacts/value_sizeof_deref_buf.sliced.c

gcc -std=c11 -O0 -Wall -Wextra artifacts/value_sizeof_deref_buf.sliced.c -o /tmp/a.out
```
