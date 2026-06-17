#include <stdio.h>

int g_target = 100;
int g_input = 5;

void func(int *p) {
    int condition = g_input;  // 从全局变量读取
    
    if (condition) {
        goto skip;
    }
    
    // 死代码：永远不会执行
    *p = 200;
    
    skip:
    return;
}

int main(void) {
    int *ptr = &g_target;
    func(ptr);
    printf("g_target: %d\n", g_target);
    return 0;
}
