#include <stdio.h>
#include <stdint.h>

// 演示：未初始化指针如何导致崩溃

void demo_uninitialized_pointer()
{
    printf("========================================\n");
    printf("演示：未初始化指针的问题\n");
    printf("========================================\n\n");
    
    // 情况1：未初始化的指针（局部变量）
    int64_t * const ptr;
    
    printf("1. 声明了一个未初始化的指针: int64_t * const ptr;\n");
    printf("   此时 ptr 的值是什么？\n");
    
    // 打印指针的值（内存地址）
    printf("   ptr 的值（内存地址）: %p\n", (void*)ptr);
    printf("   注意：这是一个随机值（栈上的垃圾数据）\n\n");
    
    printf("2. 如果我们尝试解引用这个指针:\n");
    printf("   *ptr = 123;  // 试图写入内存地址 %p\n\n", (void*)ptr);
    
    printf("3. 会发生什么？\n");
    printf("   - ptr 指向了一个随机内存地址\n");
    printf("   - 这个地址可能是：\n");
    printf("     * 不属于当前进程的内存空间 → 段错误\n");
    printf("     * 属于系统保护的内存区域 → 段错误\n");
    printf("     * 属于其他进程的内存 → 段错误\n");
    printf("     * 或者刚好是一个可写地址，但写入会破坏其他数据\n\n");
    
    printf("4. 这就是为什么会出现 Segmentation Fault (SIGSEGV)\n\n");
    
    // 不实际解引用，只是演示
    printf("5. 演示结束（为了不真正崩溃，我们不实际执行 *ptr = 123）\n");
}

void demo_initialized_pointer()
{
    int64_t value = 999;
    int64_t * const ptr = &value;
    
    printf("========================================\n");
    printf("对比：正确初始化的指针\n");
    printf("========================================\n\n");
    
    printf("1. 正确的做法:\n");
    printf("   int64_t value = 999;\n");
    printf("   int64_t * const ptr = &value;  // 指向有效的内存地址\n\n");
    
    printf("2. 此时 ptr 的值: %p\n", (void*)ptr);
    printf("   这是 value 变量的有效内存地址\n\n");
    
    printf("3. 可以安全地解引用:\n");
    printf("   *ptr = 888;  // ✅ 安全，因为指向有效的内存\n");
    printf("   现在 value = %ld\n\n", value);
}

void demo_what_happens_in_test34()
{
    printf("========================================\n");
    printf("test34 中的实际情况\n");
    printf("========================================\n\n");
    
    printf("问题代码:\n");
    printf("  int64_t * const l_88;        // ❌ 未初始化\n");
    printf("  ...\n");
    printf("  *l_88 = tmp_2;               // ❌ 解引用未初始化指针\n\n");
    
    printf("执行过程:\n");
    printf("  1. 声明 l_88 时，它包含一个随机值（栈上的垃圾数据）\n");
    printf("  2. 假设这个随机值是: 0x7ffd12345678（只是示例）\n");
    printf("  3. 当执行 *l_88 = tmp_2 时:\n");
    printf("     - CPU 尝试写入内存地址 0x7ffd12345678\n");
    printf("     - 操作系统检查：这个地址是否属于当前进程？\n");
    printf("     - 如果不在进程的有效内存范围内 → 触发段错误\n");
    printf("     - 或者地址在保护区域内（如只读段）→ 触发段错误\n");
    printf("     - 操作系统发送 SIGSEGV 信号给进程\n");
    printf("     - 进程被终止，返回退出码 139（128 + 11）\n\n");
}

int main()
{
    demo_uninitialized_pointer();
    printf("\n");
    demo_initialized_pointer();
    printf("\n");
    demo_what_happens_in_test34();
    
    return 0;
}

