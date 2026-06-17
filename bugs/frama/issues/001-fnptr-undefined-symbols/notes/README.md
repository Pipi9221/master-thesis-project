## 现象
当程序包含函数指针（或对函数取地址）时，使用 slicing 导出得到的 .sliced.c 可能出现“仅声明无定义”的函数符号，导致编译链接失败（undefined reference）。

## 复现用例
- [return_function_pointer_dispatch.c](issues/001-fnptr-undefined-symbols/cases/return_function_pointer_dispatch.c)
- [value_function_pointer_side_effect.c](issues/001-fnptr-undefined-symbols/cases/value_function_pointer_side_effect.c)
- 更小的最小复现：
  - [return_fnptr_min.c](issues/001-fnptr-undefined-symbols/cases/return_fnptr_min.c)
  - [value_fnptr_min.c](issues/001-fnptr-undefined-symbols/cases/value_fnptr_min.c)
- 变体（不通过函数指针变量也可触发）：
  - [return_fnaddr_compare.c](issues/001-fnptr-undefined-symbols/cases/return_fnaddr_compare.c)
- 变体（函数指针通过参数/返回值传播）：
  - [value_fnptr_param_pass.c](issues/001-fnptr-undefined-symbols/cases/value_fnptr_param_pass.c)
  - [return_fnptr_returned.c](issues/001-fnptr-undefined-symbols/cases/return_fnptr_returned.c)

对应切片导出产物：
- [return_function_pointer_dispatch.sliced.c](issues/001-fnptr-undefined-symbols/artifacts/return_function_pointer_dispatch.sliced.c)
- [value_function_pointer_side_effect.sliced.c](issues/001-fnptr-undefined-symbols/artifacts/value_function_pointer_side_effect.sliced.c)
- 最小复现对应产物：
  - [return_fnptr_min.sliced.c](issues/001-fnptr-undefined-symbols/artifacts/return_fnptr_min.sliced.c)
  - [value_fnptr_min.sliced.c](issues/001-fnptr-undefined-symbols/artifacts/value_fnptr_min.sliced.c)
- 变体对应产物：
  - [return_fnaddr_compare.sliced.c](issues/001-fnptr-undefined-symbols/artifacts/return_fnaddr_compare.sliced.c)
  - [value_fnptr_param_pass.sliced.c](issues/001-fnptr-undefined-symbols/artifacts/value_fnptr_param_pass.sliced.c)
  - [return_fnptr_returned.sliced.c](issues/001-fnptr-undefined-symbols/artifacts/return_fnptr_returned.sliced.c)

## 复现命令
以 return 用例为例：
```bash
opam exec --switch=4.14.2 -- frama-c cases/return_function_pointer_dispatch.c \
  -slice-return main \
  -then-on "Slicing export" -print -ocode artifacts/return_function_pointer_dispatch.sliced.c

gcc -std=c11 -O0 -Wall -Wextra artifacts/return_function_pointer_dispatch.sliced.c -o /tmp/a.out
```

## 预期 vs 实际
- 预期：导出的 .sliced.c 应可独立编译链接（至少不应保留未定义符号引用）。
- 实际：导出的 .sliced.c 内保留了 `&add_1` / `&add_2` / `&f_a` / `&f_b` 之类的函数符号，但这些符号在切片结果中只有原型声明，没有函数体定义，导致链接失败。

## 初步定位线索
- 行为与 slicing 导出阶段对“函数取地址”的处理有关：在 [slicingTransform.ml](frama-c-30.0-Zinc/src/plugins/slicing/slicingTransform.ml#L66-L76) 中，当 `need_addr` 为真时会走 `Iproto` 分支（旁边有 `TODO for #344`）。
- 从产物可见：切片生成了 `add_2_slice_1` / `f_b_slice_1` 之类的函数体，但全局函数指针初始值仍然指向原符号 `add_1` / `f_a`，使得最终链接依赖落在“仅声明无定义”的符号上。
