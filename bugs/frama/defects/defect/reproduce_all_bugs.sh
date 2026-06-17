#!/bin/bash
# 快速复现所有bug的脚本

echo "=== Frama-C Slicing Tool Bugs Reproduction ==="
echo ""

# Bug 1: 函数指针引用未更新
echo "=== Bug 1: 函数指针引用未更新 ==="
cd bug1_function_pointer
echo "源程序编译:"
gcc -o /tmp/test_orig test_indirect_call_dependency.c 2>&1 && echo "✅ 成功" || echo "❌ 失败"
echo "切片后程序链接:"
gcc -o /tmp/test_sliced test_indirect_call_dependency_sliced.c 2>&1 | grep "undefined reference" && echo "❌ 链接失败（预期的bug）" || echo "✅ 链接成功"
cd ..
echo ""

# Bug 2: Switch-case标签处理错误
echo "=== Bug 2: Switch-case标签处理错误 ==="
cd bug2_switch_case_goto
echo "源程序编译:"
gcc -o /tmp/test_orig test_official_bug.c 2>&1 && echo "✅ 成功" || echo "❌ 失败"
echo "切片后程序语法检查:"
gcc -fsyntax-only test_official_bug_sliced.c 2>&1 | grep "case label" && echo "❌ 语法错误（预期的bug）" || echo "✅ 语法正确"
cd ..
echo ""

# Bug 3: VLA链接错误
echo "=== Bug 3: VLA链接错误 ==="
cd bug3_vla_link
echo "源程序编译运行:"
gcc -o /tmp/test_orig test_label_and_vla.c 2>&1 && /tmp/test_orig >/dev/null 2>&1 && echo "✅ 成功（返回值: $?）" || echo "❌ 失败"
echo "切片后程序链接:"
gcc -o /tmp/test_sliced test_label_and_vla_sliced.c 2>&1 | grep "undefined reference" && echo "❌ 链接失败（预期的bug）" || echo "✅ 链接成功"
cd ..
echo ""

# Bug 4: va_list类型转换错误
echo "=== Bug 4: va_list类型转换错误 ==="
cd bug4_va_list
echo "源程序编译运行:"
gcc -o /tmp/test_orig test_va_list_dependency.c 2>&1 && /tmp/test_orig >/dev/null 2>&1 && echo "✅ 成功（返回值: $?）" || echo "❌ 失败"
echo "切片后程序编译:"
gcc -o /tmp/test_sliced test_va_list_dependency_sliced.c 2>&1 | grep "assignment to expression" && echo "❌ 编译失败（预期的bug）" || echo "✅ 编译成功"
cd ..
echo ""

echo "=== 所有bug复现完成 ==="
