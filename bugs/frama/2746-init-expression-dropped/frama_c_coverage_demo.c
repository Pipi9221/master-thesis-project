#include <stdio.h>

// 全局变量
int global_var = 100;

// 函数1: 简单算术运算
int arithmetic_func(int a, int b) {
    int result = a + b * 2;
    return result;
}

// 函数2: 条件分支
int conditional_func(int x) {
    if (x > 0) {
        if (x > 50) {
            return x * 3;
        } else {
            return x * 2;
        }
    } else if (x < 0) {
        return x * -1;
    } else {
        return 0;
    }
}

// 函数3: 循环
int loop_func(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;
        if (i > 10) break;
    }
    return sum;
}

// 函数4: 数组处理
int array_func(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// 函数5: 递归
int recursive_func(int n) {
    if (n <= 1) return 1;
    return n * recursive_func(n - 1);
}

// 函数6: 使用全局变量
int global_func() {
    global_var += 10;
    return global_var;
}

int main() {
    int a = 20, b = 30;
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    
    // 调用各个函数
    int r1 = arithmetic_func(a, b);
    int r2 = conditional_func(25);
    int r3 = loop_func(15);
    int r4 = array_func(arr, size);
    int r5 = recursive_func(5);
    int r6 = global_func();
    
    printf("Results: %d, %d, %d, %d, %d, %d\n", r1, r2, r3, r4, r5, r6);
    printf("Global var: %d\n", global_var);
    
    return 0;
}