#include <stdio.h>

// 原始函数 - 正确的初始化表达式
long original_function(long v, long m) {
    if (m == 0) return v;
    long const r = v % m;  // ✅ 正确：有初始化表达式
    if (r == 0) return v;
    return v + m - r;
}

// 切片后错误的函数 - 初始化表达式丢失
long sliced_function_wrong(long v, long m) {
    long __retres;
    long const r;  // ❌ 错误：初始化表达式丢失
    __retres = (v + m) - r;
    return __retres;
}

// 切片后正确的函数 - 恢复了初始化表达式
long sliced_function_correct(long v, long m) {
    long __retres;
    long const r = v % m;  // ✅ 正确：恢复了初始化表达式
    __retres = (v + m) - r;
    return __retres;
}

int main() {
    long v = 81;
    long m = 64;
    
    printf("输入: v = %ld, m = %ld\n", v, m);
    printf("v %% m = %ld\n", v % m);
    
    long result1 = original_function(v, m);
    printf("原始函数结果: %ld\n", result1);
    
    long result2 = sliced_function_wrong(v, m);
    printf("切片错误函数结果: %ld (未定义行为)\n", result2);
    
    long result3 = sliced_function_correct(v, m);
    printf("切片正确函数结果: %ld\n", result3);
    
    return 0;
}