#include <stdio.h>

// 测试用例1: 基本变量初始化
int test_basic_init() {
    int x = 42;
    return x;
}

// 测试用例2: 复杂初始化表达式丢失问题 (我们发现的问题)
int test_init_loss() {
    int a = 10;
    int b = 20;
    int const result = a + b;  // 正确的初始化
    return result;
}

// 切片后可能错误的版本
int test_init_loss_sliced() {
    int a = 10;
    int b = 20;
    int const result;  // 错误：初始化表达式丢失
    return result;
}

// 测试用例3: 条件语句
int test_conditional(int x) {
    int result;
    if (x > 0) {
        result = x * 2;
    } else {
        result = x * -1;
    }
    return result;
}

// 测试用例4: 循环
int test_loop(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    return sum;
}

// 测试用例5: 数组
int test_array() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    return sum;
}

// 测试用例6: 指针
int test_pointer() {
    int x = 42;
    int *ptr = &x;
    return *ptr;
}

// 测试用例7: 结构体
struct Point {
    int x;
    int y;
};

int test_struct() {
    struct Point p = {10, 20};
    return p.x + p.y;
}

// 测试用例8: 全局变量
int global_var = 100;

int test_global() {
    return global_var + 10;
}

int main() {
    printf("Testing Frama-C slicer coverage...\n");
    
    // 执行各个测试用例
    int r1 = test_basic_init();
    int r2 = test_init_loss();
    int r3 = test_conditional(5);
    int r4 = test_loop(10);
    int r5 = test_array();
    int r6 = test_pointer();
    int r7 = test_struct();
    int r8 = test_global();
    
    printf("Results: %d %d %d %d %d %d %d %d\n", r1, r2, r3, r4, r5, r6, r7, r8);
    
    return 0;
}