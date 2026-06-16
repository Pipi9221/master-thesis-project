#include <stdio.h>
#include <stdint.h>

// 这个程序会真正崩溃，演示未初始化指针的问题

void demonstrate_crash()
{
    printf("准备演示崩溃...\n");
    printf("声明未初始化的指针...\n");
    
    // 这是问题代码：未初始化的指针
    int64_t * const l_88;
    
    printf("指针 l_88 的值（未初始化，是随机值）: %p\n", (void*)l_88);
    printf("\n");
    printf("现在尝试解引用这个未初始化的指针...\n");
    printf("执行: *l_88 = 123;\n");
    printf("\n");
    
    // 这会真正崩溃
    *l_88 = 123;  // ❌ 段错误！
    
    printf("这行代码不会执行（程序已经崩溃）\n");
}

int main()
{
    demonstrate_crash();
    return 0;
}

