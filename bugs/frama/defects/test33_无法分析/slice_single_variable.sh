#!/bin/bash

# 单个变量切片脚本
# 对每个变量单独进行切片，然后对比结果

EXPERIMENT_DIR="$(cd "$(dirname "$0")" && pwd)"
SOURCE_FILE="$EXPERIMENT_DIR/CQYKR1_seed.c"
MUTANT_FILE="$EXPERIMENT_DIR/CQYKR1_seed_syn0.c"

# 问题变量列表
PROBLEM_VARIABLES=("g_163" "g_254" "g_100" "g_415" "g_338")

# 创建输出目录
OUTPUT_DIR="$EXPERIMENT_DIR/single_variable_slices"
mkdir -p "$OUTPUT_DIR"

echo "=== 单个变量切片分析 ==="
echo "源文件: $SOURCE_FILE"
echo "Mutant 文件: $MUTANT_FILE"
echo "输出目录: $OUTPUT_DIR"
echo ""

# 对每个变量单独切片
for VAR in "${PROBLEM_VARIABLES[@]}"; do
    echo "=== 切片变量: $VAR ==="
    
    # Source 文件切片
    SOURCE_OUTPUT="$OUTPUT_DIR/source_${VAR}_sliced.c"
    echo "  切片 source -> $SOURCE_OUTPUT"
    
    frama-c -slice-value "$VAR" "$SOURCE_FILE" \
        -then-on 'Slicing export' -print -ocode "$SOURCE_OUTPUT" 2>&1 | tail -20
    
    # Mutant 文件切片
    MUTANT_OUTPUT="$OUTPUT_DIR/mutant_${VAR}_sliced.c"
    echo "  切片 mutant -> $MUTANT_OUTPUT"
    
    frama-c -slice-value "$VAR" "$MUTANT_FILE" \
        -then-on 'Slicing export' -print -ocode "$MUTANT_OUTPUT" 2>&1 | tail -20
    
    echo ""
done

echo "=== 切片完成 ==="
echo "所有切片文件保存在: $OUTPUT_DIR"
