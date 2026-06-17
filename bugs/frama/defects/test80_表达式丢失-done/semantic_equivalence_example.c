#include <stdio.h>

// ==================== 源程序部分 ====================
// 原始的复杂函数
long original_realsmith_func(long v, long m) {
    if (m == 0) return v;
    long const r = v % m;  // ✅ 正确初始化
    if (r == 0) return v;
    return v + m - r;
}

// 源程序中的计算函数
long source_program_computation(long x) {
    long a = 81;
    long b = 64;
    long result = original_realsmith_func(a, b);
    return x ^ (int)result;
}

// ==================== 变异体部分 ====================
// 变异体中插入的新函数（语义等价）
long mutant_realsmith_func(long v, long m) {
    // 这是一个语义等价的实现
    // 虽然结构不同，但功能相同
    if (m == 0) return v;
    long temp = v % m;
    if (temp == 0) return v;
    long const r = temp;  // 通过变量传递初始化
    return v + m - r;
}

// 变异体中的计算函数
long mutant_program_computation(long x) {
    long a = 81;
    long b = 64;
    long result = mutant_realsmith_func(a, b);
    return x ^ (int)result;
}

// ==================== 切片工具错误处理部分 ====================
// 切片工具错误地简化了原始函数 - 丢失初始化表达式
long sliced_func_with_loss(long v, long m) {
    long __retres;
    long const r;  // ❌ 初始化表达式丢失！
    __retres = (v + m) - r;
    return __retres;
}

// 切片工具正确处理的版本 - 保留初始化表达式
long sliced_func_correct(long v, long m) {
    long __retres;
    long const r = v % m;  // ✅ 正确：保留了初始化表达式
    __retres = (v + m) - r;
    return __retres;
}

// 使用错误切片的计算
long buggy_sliced_computation(long x) {
    long a = 81;
    long b = 64;
    long result = sliced_func_with_loss(a, b);  // 使用错误的切片
    return x ^ (int)result;
}

// 使用正确切片的计算
long correct_sliced_computation(long x) {
    long a = 81;
    long b = 64;
    long result = sliced_func_correct(a, b);  // 使用正确的切片
    return x ^ (int)result;
}

int main() {
    long g_391_initial = 0xB19036ABL;  // 2979018411
    
    printf("=== 源程序与变异体的语义等价性验证 ===\n");
    printf("初始 g_391 值: %lu\n", g_391_initial);
    
    // 源程序计算
    long source_result = source_program_computation(g_391_initial);
    printf("源程序计算结果: %lu\n", source_result);
    
    // 变异体计算
    long mutant_result = mutant_program_computation(g_391_initial);
    printf("变异体计算结果: %lu\n", mutant_result);
    
    printf("源程序与变异体结果是否相等: %s\n", 
           (source_result == mutant_result) ? "是 (语义等价)" : "否");
    
    printf("\n=== 切片工具处理对比 ===\n");
    
    // 正确切片
    long correct_sliced_result = correct_sliced_computation(g_391_initial);
    printf("正确切片计算结果: %lu\n", correct_sliced_result);
    
    // 错误切片（会产生未定义行为）
    printf("错误切片计算结果: ");
    long buggy_sliced_result = buggy_sliced_computation(g_391_initial);
    printf("%lu (未定义行为，每次运行可能不同)\n", buggy_sliced_result);
    
    printf("\n=== 结论 ===\n");
    printf("1. 源程序和变异体是语义等价的\n");
    printf("2. 切片工具错误地丢失了初始化表达式\n");
    printf("3. 这种丢失导致未定义行为，破坏了语义等价性\n");
    
    return 0;
}