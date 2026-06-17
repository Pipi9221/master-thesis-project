#include <stdio.h>

// 模拟 Creal 的 Tag 宏
#define Tag100(x) (x)

// 全局变量（切片目标）
int g_target = 100;

// 辅助函数
void modify_target(int *ptr, int value) {
    *ptr = Tag100(value);  // 用宏包装
}

int main(void) {
    int condition = Tag100(1);  // 非零值，用宏包装
    
    printf("Initial g_target: %d\n", g_target);
    
    // 这个代码块会进入
    {
        int *p = &g_target;
        
        printf("Entering block...\n");
        
        // 但这里会跳过后续赋值
        if (Tag100(condition)) {  // 用宏包装
            printf("Skipping assignment (condition is true)\n");
            goto skip_assignment;
        }
        
        // 这段代码永远不会执行（死代码）
        modify_target(p, Tag100(200));  // 用宏包装
        printf("Modified g_target to 200\n");
        
        skip_assignment:
        printf("Exiting block...\n");
    }
    
    printf("Final g_target: %d\n", g_target);
    
    return 0;
}
