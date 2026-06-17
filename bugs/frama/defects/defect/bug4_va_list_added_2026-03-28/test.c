// TEST: Based on Reported Bugs - va_list Dependency
// 测试：可变参数的依赖分析
// 基于：可变参数的依赖可能被遗漏
// 预期bug：va_list的依赖可能被遗漏

#include <stdio.h>
#include <stdarg.h>

static int g_sum = 0;

int sum_with_side_effect(int count, ...) {
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; i++) {
        int val = va_arg(args, int);
        total += val;
        g_sum += val;  // 副作用
    }
    va_end(args);
    return total;
}

int sum_simple(int count, ...) {
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }
    va_end(args);
    return total;
}

int main(void) {
    int val = 10;
    
    // 可变参数函数调用
    int r1 = sum_with_side_effect(3, 10, 20, 30);
    
    // 多次调用
    int r2 = sum_simple(4, 1, 2, 3, 4);
    int r3 = sum_with_side_effect(2, val, val + 10);
    
    // 在表达式中
    int r4 = sum_with_side_effect(2, r1, r2) + sum_simple(2, r3, val);
    
    // 在条件中
    if (sum_with_side_effect(1, val) > 50) {
        val += 10;
    }
    
    int result = val + r1 + r2 + r3 + r4 + g_sum;
    printf("Result: %d\n", result);
    return result;
}