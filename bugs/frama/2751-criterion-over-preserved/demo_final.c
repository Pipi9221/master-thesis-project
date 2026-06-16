#include <stdio.h>

int g_target = 100;

extern int unknown_value(void);  // 外部函数，Frama-C 无法分析

void func(int *p, int x) {
    if (x > 0) {  // Frama-C 无法确定这个条件
        goto skip;
    }
    
    // 可能的死代码
    *p = 200;
    
    skip:
    return;
}

int main(void) {
    int val = unknown_value();  // 运行时才知道的值
    func(&g_target, val);
    return 0;
}

// 实际实现（编译时用）
int unknown_value(void) {
    return 5;  // 实际总是正数，所以赋值是死代码
}
