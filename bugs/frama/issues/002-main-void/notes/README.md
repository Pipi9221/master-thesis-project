## 现象
在某些情况下，导出的 .sliced.c 会把原本的 `int main(...)` 变成 `void main(...)`，并且删除 return/printf 等语句。

已观察到的触发场景包括：
- 切片标准：`-slice-annot` / `-slice-rd` / `-slice-wr` / `-slice-calls`
- `-slice-return main` + `signal/raise`（见 return_signal_raise）
- `-slice-return main` + `exit/assert` 等“提前终止”（见 return_exit_always / return_exit_in_callee / return_abort_via_assert）
- `-slice-value g_out` + `memcpy`（重叠拷贝场景，见 value_memcpy_overlap_ub）

这会导致：
- 生成代码不符合 C 规范的 main 签名（gcc 会给出 `-Wmain` 警告）
- 若依赖 main 返回码或输出，切片前后行为不再可直接比较

## 复现用例
- 注释切片（带 ulevel）：[annot_ulevel_loop.c](issues/002-main-void/cases/annot_ulevel_loop.c)
- 读访问切片： [rdwr_simple.c](issues/002-main-void/cases/rdwr_simple.c)
- 写访问切片： [wr_simple.c](issues/002-main-void/cases/wr_simple.c)
- 调用切片： [calls_simple.c](issues/002-main-void/cases/calls_simple.c)
- 返回值切片（信号处理）： [return_signal_raise.c](issues/002-main-void/cases/return_signal_raise.c)
- 返回值切片（main 直接 exit）： [return_exit_always.c](issues/002-main-void/cases/return_exit_always.c)
- 返回值切片（callee 调用 exit）： [return_exit_in_callee.c](issues/002-main-void/cases/return_exit_in_callee.c)
- 返回值切片（assert 触发 abort）： [return_abort_via_assert.c](issues/002-main-void/cases/return_abort_via_assert.c)
- 值切片（memcpy 重叠拷贝）： [value_memcpy_overlap_ub.c](issues/002-main-void/cases/value_memcpy_overlap_ub.c)

对应切片导出产物：
- [annot_ulevel_loop.sliced.c](issues/002-main-void/artifacts/annot_ulevel_loop.sliced.c)
- [rdwr_simple.sliced.c](issues/002-main-void/artifacts/rdwr_simple.sliced.c)
- [wr_simple.sliced.c](issues/002-main-void/artifacts/wr_simple.sliced.c)
- [calls_simple.sliced.c](issues/002-main-void/artifacts/calls_simple.sliced.c)
- [return_signal_raise.sliced.c](issues/002-main-void/artifacts/return_signal_raise.sliced.c)
- [return_exit_always.sliced.c](issues/002-main-void/artifacts/return_exit_always.sliced.c)
- [return_exit_in_callee.sliced.c](issues/002-main-void/artifacts/return_exit_in_callee.sliced.c)
- [return_abort_via_assert.sliced.c](issues/002-main-void/artifacts/return_abort_via_assert.sliced.c)
- [value_memcpy_overlap_ub.sliced.c](issues/002-main-void/artifacts/value_memcpy_overlap_ub.sliced.c)

## 复现命令
以 annot 用例为例：
```bash
opam exec --switch=4.14.2 -- frama-c cases/annot_ulevel_loop.c \
  -ulevel 10 \
  -slice-annot main \
  -then-on "Slicing export" -print -ocode artifacts/annot_ulevel_loop.sliced.c
```

## 观察点
- 产物中出现 `void main(void)`，例如 annot 用例：见 [annot_ulevel_loop.sliced.c](issues/002-main-void/artifacts/annot_ulevel_loop.sliced.c#L12-L45)
- 对 rd 用例同样：见 [rdwr_simple.sliced.c](issues/002-main-void/artifacts/rdwr_simple.sliced.c#L16-L20)
