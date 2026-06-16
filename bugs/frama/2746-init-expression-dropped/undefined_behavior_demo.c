#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 展示未初始化变量的未定义行为
long function_with_uninitialized_var() {
    long v = 81;
    long m = 64;
    long __retres;
    long const r;  // 未初始化的变量
    printf("未初始化变量 r 的值: %ld (每次运行可能不同)\n", r);
    __retres = (v + m) - r;
    return __retres;
}

// 正确的实现
long function_with_correct_init() {
    long v = 81;
    long m = 64;
    long __retres;
    long const r = v % m;  // 正确初始化
    printf("正确初始化变量 r 的值: %ld\n", r);
    __retres = (v + m) - r;
    return __retres;
}

int main() {
    printf("=== 未定义行为演示 ===\n");
    
    // 多次运行错误函数，展示结果的不确定性
    printf("多次运行错误函数的结果:\n");
    for (int i = 0; i < 5; i++) {
        long result = function_with_uninitialized_var();
        printf("  运行 %d: %ld\n", i+1, result);
    }
    
    printf("\n正确函数的运行结果:\n");
    for (int i = 0; i < 5; i++) {
        long result = function_with_correct_init();
        printf("  运行 %d: %ld\n", i+1, result);
    }
    
    printf("\n=== 结论 ===\n");
    printf("1. 未初始化变量导致未定义行为 - 每次运行结果可能不同\n");
    printf("2. 正确初始化的变量总是产生一致的结果\n");
    printf("3. 这就是为什么源程序和变异体语义等价，但切片后可能不等价的原因\n");
    
    return 0;
}