#include <stdio.h>
#include <stdint.h>

/* 
 * 问题演示：未初始化的 const 变量
 * 
 * 这个函数模拟了切片后的 realsmith_tOG6J_slice_1 函数
 * 如果 n 未初始化，会发生什么？
 */

__inline static unsigned int realsmith_tOG6J_uninitialized(void)
{
  unsigned int __retres;
  unsigned int const n;  // ❌ 未初始化 - 包含"垃圾值"
  
  // 打印 n 的值（看看它包含什么）
  printf("  调试：n 的值 = %u (0x%08x)\n", n, n);
  printf("  调试：(n >> 24) = %u\n", n >> 24);
  printf("  调试：(n >> 24) & 0xf = %u\n", (n >> 24) & 0xf);
  
  __retres = (n >> 24) & (unsigned int)0xf;
  return __retres;
}

__inline static unsigned int realsmith_tOG6J_correct(void)
{
  unsigned int __retres;
  unsigned int const n = (unsigned int)4UL;  // ✅ 正确初始化
  
  printf("  调试：n 的值 = %u (0x%08x) - 正确\n", n, n);
  printf("  调试：(n >> 24) = %u\n", n >> 24);
  printf("  调试：(n >> 24) & 0xf = %u\n", (n >> 24) & 0xf);
  
  __retres = (n >> 24) & (unsigned int)0xf;
  return __retres;
}

int main(void)
{
  printf("========================================\n");
  printf("问题：未初始化的变量会导致什么？\n");
  printf("========================================\n\n");
  
  printf("1. 未初始化的版本（错误的）：\n");
  unsigned int result1 = realsmith_tOG6J_uninitialized();
  printf("   返回值：%u\n\n", result1);
  
  printf("2. 正确初始化的版本：\n");
  unsigned int result2 = realsmith_tOG6J_correct();
  printf("   返回值：%u\n\n", result2);
  
  printf("========================================\n");
  printf("关键点：\n");
  printf("========================================\n");
  printf("1. 编译时：\n");
  printf("   - 编译器会警告：'n' is used uninitialized\n");
  printf("   - 但程序可以编译通过（不是错误，只是警告）\n\n");
  
  printf("2. 运行时：\n");
  printf("   - 程序不会崩溃\n");
  printf("   - 但 n 包含的是栈上的'垃圾值'（之前的数据）\n");
  printf("   - 这个值是不可预测的，可能每次运行都不同\n");
  printf("   - 在不同的编译器、不同的环境下可能不同\n\n");
  
  printf("3. 位运算：\n");
  printf("   - 位运算本身不会出错（不会崩溃）\n");
  printf("   - 但输入是错误的（垃圾值），输出也是错误的\n");
  printf("   - (垃圾值 >> 24) & 0xf 的结果是不可预测的\n\n");
  
  printf("4. 实际影响：\n");
  printf("   - 函数返回错误的值（可能是 10, 15, 3 等任意值）\n");
  printf("   - 正确的值应该是 0（当 n=4 时）\n");
  printf("   - 这个错误的值会影响后续的所有计算\n");
  printf("   - 导致整个程序的行为都是错误的\n\n");
  
  printf("========================================\n");
  printf("结论：\n");
  printf("========================================\n");
  printf("✅ 程序可以编译（有警告）\n");
  printf("✅ 程序可以运行（不崩溃）\n");
  printf("❌ 但结果是错误的/不可预测的\n");
  printf("❌ 这是未定义行为（Undefined Behavior）\n");
  printf("❌ 必须修复！\n");
  
  return 0;
}
