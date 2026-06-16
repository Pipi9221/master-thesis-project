#!/bin/bash
# test1的双重C-Reduce简化对比方案
# 目标: 对比完整突变体和切片突变体，清晰展示Frama-C删除了什么

set -e

echo "════════════════════════════════════════════════════════════════"
echo "  test1: 双重C-Reduce简化对比"
echo "════════════════════════════════════════════════════════════════"
echo ""
echo "目标变量: g_203"
echo "完整突变体值: -53 (正确)"
echo "切片突变体值: -59 (错误)"
echo ""
echo "────────────────────────────────────────────────────────────────"
echo ""

# 创建工作目录
mkdir -p creduce_comparison
cd creduce_comparison

echo "步骤1: 准备完整突变体的C-Reduce环境"
echo "────────────────────────────────────────────────────────────────"

# 1. 准备完整突变体的简化
mkdir -p correct_version
cp ../mutant_full_modified.c correct_version/program.c

# 创建interesting.sh for correct version
cat > correct_version/interesting.sh << 'INTERESTING_CORRECT'
#!/bin/bash
set -e

# 清理
rm -f test output.txt 2>/dev/null

# 编译
gcc -w -o test program.c 2>/dev/null || exit 1

# 运行
timeout 5 ./test > output.txt 2>/dev/null || exit 1

# 检查g_203的值是否为-53
ACTUAL=$(grep "g_203:" output.txt | head -1 | cut -d: -f2 | tr -d ' ')
[ "$ACTUAL" = "-53" ] || exit 1

# 成功
exit 0
INTERESTING_CORRECT

chmod +x correct_version/interesting.sh

echo "  ✅ 完整突变体环境准备完成"
echo "     输入: mutant_full_modified.c (5376行)"
echo "     条件: g_203 = -53"
echo ""

echo "步骤2: 准备切片突变体的C-Reduce环境"
echo "────────────────────────────────────────────────────────────────"

# 2. 准备切片突变体的简化
mkdir -p wrong_version
cp ../mutant_modified.c wrong_version/program.c

# 创建interesting.sh for wrong version
cat > wrong_version/interesting.sh << 'INTERESTING_WRONG'
#!/bin/bash
set -e

# 清理
rm -f test output.txt 2>/dev/null

# 编译
gcc -w -o test program.c 2>/dev/null || exit 1

# 运行
timeout 5 ./test > output.txt 2>/dev/null || exit 1

# 检查g_203的值是否为-59
ACTUAL=$(grep "g_203:" output.txt | head -1 | cut -d: -f2 | tr -d ' ')
[ "$ACTUAL" = "-59" ] || exit 1

# 成功
exit 0
INTERESTING_WRONG

chmod +x wrong_version/interesting.sh

echo "  ✅ 切片突变体环境准备完成"
echo "     输入: mutant_modified.c (340行)"
echo "     条件: g_203 = -59"
echo ""

echo "步骤3: 启动C-Reduce简化"
echo "────────────────────────────────────────────────────────────────"
echo ""
echo "这将需要一些时间（每个简化约5-30分钟）..."
echo ""

# 创建运行脚本
cat > run_both.sh << 'RUN_BOTH'
#!/bin/bash

echo "════════════════════════════════════════════════════════════════"
echo "  开始双重C-Reduce简化"
echo "════════════════════════════════════════════════════════════════"
echo ""

# 简化完整突变体
echo "[1/2] 简化完整突变体 (保留正确值 g_203=-53)..."
cd correct_version
nohup creduce interesting.sh program.c > creduce.log 2>&1 &
CORRECT_PID=$!
cd ..
echo "  启动完成，PID: $CORRECT_PID"

# 简化切片突变体
echo "[2/2] 简化切片突变体 (保留错误值 g_203=-59)..."
cd wrong_version
nohup creduce interesting.sh program.c > creduce.log 2>&1 &
WRONG_PID=$!
cd ..
echo "  启动完成，PID: $WRONG_PID"

echo ""
echo "════════════════════════════════════════════════════════════════"
echo "  两个C-Reduce任务已启动"
echo "════════════════════════════════════════════════════════════════"
echo ""
echo "监控命令:"
echo "  # 查看完整突变体简化进度"
echo "  tail -f creduce_comparison/correct_version/creduce.log"
echo "  watch -n 2 'wc -l creduce_comparison/correct_version/program.c'"
echo ""
echo "  # 查看切片突变体简化进度"
echo "  tail -f creduce_comparison/wrong_version/creduce.log"
echo "  watch -n 2 'wc -l creduce_comparison/wrong_version/program.c'"
echo ""
echo "  # 检查是否完成"
echo "  ps aux | grep creduce | grep -v grep"
echo ""
echo "完成后运行: ./compare_results.sh"
echo ""
RUN_BOTH

chmod +x run_both.sh

# 创建对比脚本
cat > compare_results.sh << 'COMPARE'
#!/bin/bash

echo "════════════════════════════════════════════════════════════════"
echo "  对比C-Reduce简化结果"
echo "════════════════════════════════════════════════════════════════"
echo ""

# 检查是否都完成
if pgrep -f "creduce.*correct_version" > /dev/null || pgrep -f "creduce.*wrong_version" > /dev/null; then
    echo "❌ C-Reduce还在运行，请等待完成后再对比"
    echo ""
    echo "当前状态:"
    ps aux | grep creduce | grep -v grep
    exit 1
fi

CORRECT_FILE="correct_version/program.c"
WRONG_FILE="wrong_version/program.c"

if [ ! -f "$CORRECT_FILE" ] || [ ! -f "$WRONG_FILE" ]; then
    echo "❌ 简化结果文件不存在"
    exit 1
fi

# 统计行数
CORRECT_LINES=$(wc -l < $CORRECT_FILE)
WRONG_LINES=$(wc -l < $WRONG_FILE)

echo "📊 简化结果统计:"
echo "  完整突变体简化: $CORRECT_LINES 行 (原始 5376 行)"
echo "  切片突变体简化: $WRONG_LINES 行 (原始 340 行)"
echo ""

# 验证输出
echo "🔬 验证输出值:"
cd correct_version
gcc -w -o test program.c && timeout 1 ./test | grep g_203 || echo "  编译/运行失败"
cd ..

cd wrong_version
gcc -w -o test program.c && timeout 1 ./test | grep g_203 || echo "  编译/运行失败"
cd ..
echo ""

# 生成diff
echo "📝 生成差异报告..."
diff -u $CORRECT_FILE $WRONG_FILE > comparison.diff || true

# 显示diff
echo "════════════════════════════════════════════════════════════════"
echo "  差异对比 (unified diff)"
echo "════════════════════════════════════════════════════════════════"
echo ""
head -100 comparison.diff
echo ""

if [ $(wc -l < comparison.diff) -gt 100 ]; then
    echo "... (差异超过100行，完整内容见 comparison.diff)"
    echo ""
fi

# 生成并排对比
echo "════════════════════════════════════════════════════════════════"
echo "  并排对比 (前50行)"
echo "════════════════════════════════════════════════════════════════"
echo ""
sdiff -w 150 $CORRECT_FILE $WRONG_FILE | head -50
echo ""

# 保存完整对比
sdiff -w 150 $CORRECT_FILE $WRONG_FILE > side_by_side_comparison.txt
echo "💾 完整并排对比已保存到: side_by_side_comparison.txt"
echo ""

# 生成Markdown报告
cat > COMPARISON_REPORT.md << 'MARKDOWN'
# test1: C-Reduce双重简化对比报告

## 📊 概览

| 版本 | 原始行数 | 简化后行数 | g_203值 | 状态 |
|------|---------|-----------|---------|------|
| 完整突变体 | 5376 | CORRECT_LINES_PLACEHOLDER | -53 | ✅ 正确 |
| 切片突变体 | 340 | WRONG_LINES_PLACEHOLDER | -59 | ❌ 错误 |

## 🔍 简化后的代码

### 完整突变体 (正确版本)

```c
CORRECT_CODE_PLACEHOLDER
```

### 切片突变体 (错误版本)

```c
WRONG_CODE_PLACEHOLDER
```

## 🎯 关键差异

Frama-C切片工具删除的代码:

DIFF_PLACEHOLDER

## 💡 结论

通过C-Reduce双重简化，我们清晰地看到:
1. 完整突变体中保留了某些关键代码
2. Frama-C切片后删除了这些代码
3. 导致g_203的值从-53变为-59

这精确地展示了Frama-C切片工具的bug。

---

*生成时间: $(date)*
*简化工具: C-Reduce*
MARKDOWN

# 替换占位符
sed -i "s/CORRECT_LINES_PLACEHOLDER/$CORRECT_LINES/g" COMPARISON_REPORT.md
sed -i "s/WRONG_LINES_PLACEHOLDER/$WRONG_LINES/g" COMPARISON_REPORT.md

# 插入实际代码
awk '/CORRECT_CODE_PLACEHOLDER/ {system("cat correct_version/program.c"); next} 1' COMPARISON_REPORT.md > tmp && mv tmp COMPARISON_REPORT.md
awk '/WRONG_CODE_PLACEHOLDER/ {system("cat wrong_version/program.c"); next} 1' COMPARISON_REPORT.md > tmp && mv tmp COMPARISON_REPORT.md
awk '/DIFF_PLACEHOLDER/ {system("head -50 comparison.diff"); next} 1' COMPARISON_REPORT.md > tmp && mv tmp COMPARISON_REPORT.md

echo "📄 详细报告已生成: COMPARISON_REPORT.md"
echo ""
echo "════════════════════════════════════════════════════════════════"
echo "  ✅ 对比完成！"
echo "════════════════════════════════════════════════════════════════"
COMPARE

chmod +x compare_results.sh

echo "════════════════════════════════════════════════════════════════"
echo "  ✅ 准备完成！"
echo "════════════════════════════════════════════════════════════════"
echo ""
echo "下一步:"
echo "  1. 运行: ./run_both.sh"
echo "     (启动两个C-Reduce简化任务)"
echo ""
echo "  2. 等待完成 (约10-30分钟)"
echo ""
echo "  3. 运行: ./compare_results.sh"
echo "     (生成对比报告)"
echo ""
echo "所有结果将保存在:"
echo "  $(pwd)/creduce_comparison/"
echo ""



