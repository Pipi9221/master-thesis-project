#include <stdio.h>

// 全局变量
int g_value = 42;

// 测试函数1: 简单算术运算
int simple_calc(int a, int b) {
    int result = a + b;
    return result;
}

// 测试函数2: 条件分支
int conditional_func(int x) {
    if (x > 0) {
        return x * 2;
    } else {
        return x * -1;
    }
}

// 测试函数3: 循环
int loop_func(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    return sum;
}

// 测试函数4: 使用全局变量
int use_global() {
    return g_value + 10;
}

int main() {
    int a = 10, b = 5;
    
    // 调用各个函数
    int r1 = simple_calc(a, b);
    int r2 = conditional_func(a);
    int r3 = loop_func(b);
    int r4 = use_global();
    
    printf("Results: %d, %d, %d, %d\n", r1, r2, r3, r4);
    
    return 0;
}