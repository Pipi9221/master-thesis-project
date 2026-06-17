# Frama-C切片工具发现的Bug汇总

## Bug列表

### Bug 1: 函数指针引用未更新
- **目录**: `bug1_function_pointer/`
- **问题**: 切片后函数指针仍指向原始函数，导致链接错误
- **场景**: 8种不同场景
- **文件**: 
  - `test_indirect_call_dependency.c` (源程序)
  - `test_indirect_call_dependency_sliced.c` (切片后)
  - `ISSUE.md` (详细报告)

### Bug 2: Switch-case标签处理错误
- **目录**: `bug2_switch_case_goto/`
- **问题**: 切片后case标签在switch外，导致语法错误
- **场景**: 10种不同场景（官方bug）
- **文件**:
  - `test_official_bug.c` (源程序)
  - `test_official_bug_sliced.c` (切片后)
  - `ISSUE.md` (详细报告)

### Bug 3: VLA链接错误
- **目录**: `bug3_vla_link/`
- **问题**: VLA转换为动态分配但缺少函数定义，导致链接错误
- **文件**:
  - `test_label_and_vla.c` (源程序)
  - `test_label_and_vla_sliced.c` (切片后)
  - `ISSUE.md` (详细报告)

### Bug 4: va_list类型转换错误
- **目录**: `bug4_va_list/`
- **问题**: va_list是数组类型，不能直接赋值，导致编译错误
- **文件**:
  - `test_va_list_dependency.c` (源程序)
  - `test_va_list_dependency_sliced.c` (切片后)
  - `ISSUE.md` (详细报告)

## 快速复现

运行 `reproduce_all_bugs.sh` 脚本可以快速查看所有bug的复现步骤：

```bash
bash reproduce_all_bugs.sh
```

## Bug统计

- **总Bug数**: 4个
- **函数指针bug场景数**: 8种
- **Switch-case bug场景数**: 10种
- **VLA bug场景数**: 1种
- **va_list bug场景数**: 1种

## Bug类型分类

- **链接错误**: Bug 1, Bug 3
- **语法错误**: Bug 2, Bug 4
- **类型转换错误**: Bug 4
- **引用未更新**: Bug 1

## 发现时间

- Bug 1: 2024年（函数指针）
- Bug 2: 官方已知bug（switch-case-goto）
- Bug 3: 2024年（VLA）
- Bug 4: 2024年（va_list）

