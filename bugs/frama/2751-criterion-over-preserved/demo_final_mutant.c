#include <stdio.h>

#define Tag100(x) (x)

int g_target = 100;

extern int unknown_value(void);  // 外部函数，Frama-C 无法分析

void func(int *p, int x) {
    if (Tag100(x) > Tag100(0)) {  // 用宏包装
        goto skip;
    }
    
    // 可能的死代码
    *p = Tag100(200);  // 用宏包装
    
    skip:
    return;
}

int main(void) {
    int val = Tag100(unknown_value());  // 用宏包装
    func(&g_target, val);
    return 0;
}

// 实际实现（编译时用）
int unknown_value(void) {
    return Tag100(5);  // 用宏包装
}
