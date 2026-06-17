# Frama-C Slicing 14-Issue Summary (Final)

Date: 2026-03-28  
Method basis: deep verification + methodology compare + per-issue root-cause notes.

| IID | Final Status | Category | Detailed Cause |
|---|---|---|---|
| 2734 | not_a_bug | expected_tool_behavior | 开发者已明确该问题属于 Eva 对递归函数缺少规范（assigns/unroll）的用户输入错误，不是 slicing 缺陷。 |
| 2735 | reproduced_mismatch | ub_sensitive_semantic_mismatch | 源程序中 `g_24` 存在未定求值顺序读写；切片导出线性化后改变路径，导致 `g_371` 取值分叉。 |
| 2736 | reproduced | loop_nontermination | 在 `debug_deadloop_test47/test47_backup` 重新编译后，`mutant_modified.c` 与 `mutant_sliced.c` 运行均在 5 秒 `timeout` 下超时；根因是长度参数下溢触发 `realsmith_3L7lB_slice_1` 的超长循环。 |
| 2737 | reproduced_mismatch | initializer_loss | `l_4351` 声明保留但初始化丢失，后续仍读取 `l_4351[1]`，出现未初始化读并导致 `g_203` 偏差。 |
| 2739 | reproduced_crash | initializer_loss_crash | 指针 `l_2338` 初始化 `&g_1320` 被切掉，保留解引用后稳定崩溃（segfault）。 |
| 2740 | reproduced | function_pointer_rename_mismatch | 现有附件已修复，但按问题描述构造“函数已重命名为 `_slice_1`、函数指针仍指向旧名”的最小切片后，可稳定复现 `undefined reference to add_func/mul_func`。 |
| 2741 | reproduced | vla_runtime_stub_missing | 按问题描述构造 VLA 样例并切片后，`gcc` 链接稳定报 `undefined reference to __fc_vla_alloc`，说明切片导出依赖运行时桩而普通链接缺定义。 |
| 2742 | reproduced | varargs_type_system | 切片代码对 `va_list`（数组类型）生成非法赋值，触发编译期类型错误。 |
| 2746 | reproduced | initializer_loss | 初始化表达式（如 `r = v % m`）被删，后续使用未初始化局部值，语义不稳定。 |
| 2747 | reproduced | uninitialized_divisor_zero | `func_35_slice_1` 中 `l_488` 初始化被切掉后仍作为 `safe_mod_func_int64_t_s_s_slice_1` 的除数使用；重编译后 `source_sliced` 连续 50/50 次触发 `SIGFPE`，而 `mutant_sliced` 50/50 正常。 |
| 2748 | reproduced_mismatch | initializer_and_pointer_chain_loss | 多个局部变量初始化丢失（`l_2835/l_2939/l_99`）+ 指针链退化，导致未初始化读和 `g_167` 偏差。 |
| 2749 | reproduced | function_slicing_dataflow_break | 内联函数参数/数据流在切片后畸变（含未初始化路径），导致运行输出不一致。 |
| 2750 | reproduced | precision_over_preservation | 与准则无依赖的全局 `g_170` 被保留，切片精度过保守。 |
| 2751 | reproduced | precision_over_preservation | 未被有效修改的准则变量 `g_1141` 仍被保留，属于过保守标记传播。 |

## Count (Current Final Status)
- reproduced / reproduced_mismatch / reproduced_crash: 13
- not_a_bug: 1
