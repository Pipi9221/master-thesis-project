#!/bin/bash

# Frama-C 切片工具覆盖率分析脚本

echo "=== Frama-C Slicing Tool Coverage Analysis ==="

# 测试文件
TEST_FILE="/home/chuang/FramaCsliceNew/creal/defects/test80_表达式丢失/coverage_test.c"

# 1. 基本的值分析
echo "1. 执行值分析..."
frama-c "$TEST_FILE" -val 2>&1 | head -20

# 2. 代码度量分析
echo -e "\n2. 执行代码度量分析..."
frama-c "$TEST_FILE" -metrics 2>&1

# 3. 对不同函数进行切片测试
echo -e "\n3. 执行切片测试..."

# 创建切片输出目录
mkdir -p slicing_results

# 对test_init_loss函数进行切片
echo "   - 对test_init_loss函数进行切片..."
frama-c "$TEST_FILE" -slice-calls test_init_loss -then-on 'Slicing export' -print -ocode slicing_results/test_init_loss_sliced.c 2>/dev/null

# 对test_conditional函数进行切片
echo "   - 对test_conditional函数进行切片..."
frama-c "$TEST_FILE" -slice-calls test_conditional -then-on 'Slicing export' -print -ocode slicing_results/test_conditional_sliced.c 2>/dev/null

# 对test_loop函数进行切片
echo "   - 对test_loop函数进行切片..."
frama-c "$TEST_FILE" -slice-calls test_loop -then-on 'Slicing export' -print -ocode slicing_results/test_loop_sliced.c 2>/dev/null

# 4. 分析切片结果
echo -e "\n4. 分析切片结果..."

for file in slicing_results/*.c; do
    if [ -f "$file" ]; then
        echo "   分析 $file:"
        # 编译检查
        gcc -Wall -Wextra -c "$file" -o /tmp/test.o 2>&1 | grep -E "(warning|error)" || echo "   无编译警告"
        # 行数统计
        lines=$(wc -l < "$file")
        echo "   行数: $lines"
        echo ""
    fi
done

# 5. 清理临时文件
rm -f /tmp/test.o
rm -f slicing_results/*.c

echo "=== 分析完成 ==="