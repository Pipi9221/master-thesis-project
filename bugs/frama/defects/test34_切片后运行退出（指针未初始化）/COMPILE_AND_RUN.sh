#!/bin/bash
# test34 编译和运行脚本

echo "========================================"
echo "test34 编译和运行测试"
echo "========================================"
echo ""

# 进入目录
cd /home/chuang/FramaCsliceNew/creal/batch_experiments_test_failures_v2/test34

echo "1. 编译 mutant_modified.c (有bug的版本)"
echo "   命令: gcc -o mutant_modified_program mutant_modified.c"
echo ""
gcc -o mutant_modified_program mutant_modified.c 2>&1
if [ $? -eq 0 ]; then
    echo "   ✅ 编译成功"
else
    echo "   ❌ 编译失败"
    exit 1
fi

echo ""
echo "2. 运行 mutant_modified_program (应该会崩溃)"
echo "   命令: ./mutant_modified_program"
echo ""
./mutant_modified_program 2>&1
EXIT_CODE=$?
echo "   退出码: $EXIT_CODE"
if [ $EXIT_CODE -eq 139 ] || [ $EXIT_CODE -eq -11 ]; then
    echo "   ❌ 段错误 (SIGSEGV) - 正如预期，程序崩溃了！"
elif [ $EXIT_CODE -eq 0 ]; then
    echo "   ✅ 程序正常退出（这不应该发生，因为代码有bug）"
else
    echo "   ⚠️  程序异常退出，退出码: $EXIT_CODE"
fi

echo ""
echo "========================================"
echo "3. 对比：运行原始程序（应该正常）"
echo "========================================"
if [ -f mutant_full_program ]; then
    echo "   运行: ./mutant_full_program"
    ./mutant_full_program 2>&1 | head -10
    echo "   退出码: $?"
    echo "   ✅ 原始程序正常运行"
else
    echo "   ⚠️  mutant_full_program 不存在"
fi

echo ""
echo "========================================"
echo "4. 可选：修复并重新测试"
echo "========================================"
echo "   如果你想修复bug，可以将第232行改为："
echo "   int64_t * const l_88 = &g_89[3][1];"
echo ""
echo "   然后重新编译运行"

