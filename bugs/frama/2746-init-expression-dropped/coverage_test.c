#include <stdio.h>

// 测试1: 基本的初始化表达式丢失
int test_init_loss(int x, int y) {
    int result = x + y;
    return result;
}

int test_init_loss_sliced(int x, int y) {
    int result;  // 初始化丢失
    return result;
}

// 测试2: 条件语句处理
int test_conditional(int x) {
    if (x > 0) {
        int result = x * 2;
        return result;
    } else {
        int result = x * -1;
        return result;
    }
}

// 测试3: 循环处理
int test_loop(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    return sum;
}

// 测试4: 指针和引用
int test_pointer(int *ptr) {
    int value = *ptr;
    return value + 10;
}

// 测试5: 数组处理
int test_array(int arr[5]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    return sum;
}

// 测试6: 结构体处理
struct Point {
    int x;
    int y;
};

int test_struct(struct Point p) {
    int result = p.x + p.y;
    return result;
}

// 测试7: 递归函数
int test_recursive(int n) {
    if (n <= 1) return 1;
    return n * test_recursive(n - 1);
}

// 测试8: 复杂表达式
int test_complex_expr(int a, int b, int c) {
    int result = (a + b) * c - (a / b);
    return result;
}

int main() {
    int a = 10, b = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    struct Point p = {3, 4};
    
    printf("测试初始化表达式丢失: %d\n", test_init_loss(a, b));
    printf("测试条件语句: %d\n", test_conditional(a));
    printf("测试循环: %d\n", test_loop(b));
    printf("测试指针: %d\n", test_pointer(&a));
    printf("测试数组: %d\n", test_array(arr));
    printf("测试结构体: %d\n", test_struct(p));
    printf("测试递归: %d\n", test_recursive(5));
    printf("测试复杂表达式: %d\n", test_complex_expr(a, b, 2));
    
    return 0;
}