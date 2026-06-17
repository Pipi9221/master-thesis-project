// TEST: Interprocedural - Indirect Call Dependency
// 跨函数依赖：间接调用依赖
// 预期bug：间接调用可能无法正确分析

#include <stdio.h>

static int g_result = 0;

typedef int (*func_ptr_t)(int, int*);

int add_func(int x, int *p) {
    *p += x;
    return *p;
}

int mul_func(int x, int *p) {
    *p *= x;
    return *p;
}

int sub_func(int x, int *p) {
    *p -= x;
    return *p;
}

func_ptr_t get_func(int choice) {
    if (choice == 1) return add_func;
    if (choice == 2) return mul_func;
    return sub_func;
}

int main(void) {
    int val = 10;
    int choice = 1;
    
    // 通过函数指针间接调用
    func_ptr_t fp = get_func(choice);
    int result1 = fp(5, &val);
    
    // 改变choice，再次调用
    choice = 2;
    fp = get_func(choice);
    int result2 = fp(3, &val);
    
    // 最终结果
    int result = result1 + result2 + val;
    
    printf("Result: %d\n", result);
    return result;
}
