#include <stdio.h>

#define Tag100(x) (x)

int g_target = 100;
int g_input = 5;

void func(int *p) {
    int condition = Tag100(g_input);  // 用宏包装
    
    if (Tag100(condition)) {  // 用宏包装
        goto skip;
    }
    
    // 死代码：永远不会执行
    *p = Tag100(200);  // 用宏包装
    
    skip:
    return;
}

int main(void) {
    int *ptr = &g_target;
    func(ptr);
    printf("g_target: %d\n", g_target);
    return 0;
}
