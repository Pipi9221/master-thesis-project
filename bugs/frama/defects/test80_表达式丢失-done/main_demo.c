#include <stdio.h>

// 原始代码
int complex_func(int x, int y) {
    if (y == 0) return x;
    int const result = x % y;  // 正确初始化
    if (result == 0) return x;
    return x + y - result;
}

// 切片后错误版本
int complex_func_slice(int x, int y) {
    int __retres;
    int const result;  // 初始化表达式丢失！
    __retres = x + y - result;
    return __retres;
}

int main() {
    int a = 81;
    int b = 64;
    int result1 = complex_func(a, b);    
    return result1;
}