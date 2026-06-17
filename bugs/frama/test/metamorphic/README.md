## 目标
把“蜕变测试（Metamorphic Testing, MT）”用在程序切片上，用来补足“缺少精确 oracle”时的自动检错能力。这里的核心思想是：
- 先对输入程序做一个语义保持（或特定关系保持）的变换；
- 再对变换前/后的程序分别运行切片；
- 最后检查切片结果是否满足预期的蜕变关系（MR）。

## 与四类问题的对应
### 1) 精度问题（保留过多）
典型 MR：对原程序注入“与准则无关的噪声代码”，切片结果不应包含这些噪声实体。
- MR-P1（Dead Code Injection）：新增未被调用的函数/全局，不应出现在切片结果中。
- MR-P2（Dead Global Injection）：新增只在不可达路径或未被调用函数里写入的全局，不应出现在切片结果中。

本目录当前实现了 MR-P1/MR-P2：生成变体时会注入 `mt_noise_*` / `mt_g_*`，并自动在用例头部加 `EXPECT-ABSENT`，由现有 [run_case.sh](test/run_case.sh) 完成检查。

### 2) 正确性问题（缺少必要步骤）
典型 MR：做语义等价变换（如分解表达式、重命名、冗余括号、等价控制流），切片后对准则的观测结果应保持一致。
- MR-C1（Semantics-Preserving Refactoring）：变换前后的切片产物对准则的输出一致。

当前仓库的判定默认是“准则相关语义保持”（退出码一致；可选 stdout 一致），可以用 `CHECK-STDOUT: 1` 强化观测等价。

### 3) 改写/导出导致的问题
典型 MR：切片导出产物应当可再次被 Frama-C 解析（或至少被 gcc 编译），否则属于导出/打印不健壮。
- MR-R1（Re-parse）：对切片产物执行一次“再解析”，不应失败（或应满足预期失败模式）。

可通过用例头部 `CHECK-REPARSE: 1` 开启。

### 4) 不支持/未实现
典型 MR：对已知不支持点，应当以“预期失败”方式稳定暴露边界，而不是行为漂移或静默错误。
- MR-U1（Expected Failure）：触发不支持/未实现时，Frama-C 报错应包含稳定关键字。

可通过 `EXPECT-FRAMAC-FAIL: ...` 描述预期失败关键字。

## 用法
对某个基准用例生成蜕变变体并逐个验证：

```bash
bash test/metamorphic/run_mt.sh test/cases/value_memmove_overlap.c
```

可选指定变体类型（逗号分隔）：

```bash
bash test/metamorphic/run_mt.sh test/cases/value_memmove_overlap.c dead-code,dead-global
```

做“正确性类”等价变换 MR（目前实现了一个简单的等价重构：引入临时变量，不改变语义），检查切片结果在变换前后保持一致：

```bash
# 仅检查退出码等价（更接近“准则相关语义”）
bash test/metamorphic/run_mt_correctness.sh test/cases/value_memmove_overlap.c

# 同时检查 stdout + 退出码等价（更接近“观测等价”）
bash test/metamorphic/run_mt_correctness.sh test/cases/value_memmove_overlap.c 2 1
```
