#include <stdio.h>

// 原始函数实现
int original_compute(int a, int b) {
    int const result = a % b;  // 正确初始化
    return a + b - result;
}

// 变异体中插入的语义等价函数
int mutant_compute(int a, int b) {
    int temp = a % b;
    int const result = temp;   // 通过中间变量初始化
    return a + b - result;
}

// 切片工具错误简化后的函数 - 丢失初始化表达式
int sliced_compute_wrong(int a, int b) {
    int const result;  // ❌ 初始化表达式丢失！
    return a + b - result;
}

// 切片工具正确简化后的函数 - 保留初始化表达式
int sliced_compute_correct(int a, int b) {
    int const result = a % b;  // ✅ 正确初始化
    return a + b - result;
}

int main() {
    // 在main函数中定义变量
    int a = 81;
    int b = 64;
    
    printf("输入值: a = %d, b = %d\n", a, b);
    printf("a %% b = %d\n", a % b);
    
    // 通过插入函数的方式计算c
    int c1 = original_compute(a, b);
    printf("源程序计算结果 c1: %d\n", c1);
    
    int c2 = mutant_compute(a, b);
    printf("变异体计算结果 c2: %d\n", c2);
    
    printf("源程序与变异体结果是否相等: %s\n", 
           (c1 == c2) ? "是 (语义等价)" : "否");
    
    printf("\n--- 切片工具处理对比 ---\n");
    
    // 正确切片
    int c3 = sliced_compute_correct(a, b);
    printf("正确切片结果 c3: %d\n", c3);
    
    // 错误切片
    printf("错误切片结果 c4: ");
    int c4 = sliced_compute_wrong(a, b);
    printf("%d (未定义行为)\n", c4);
    
    return 0;
}