#include <stdio.h>
#include <stdint.h>

// 模拟原始程序中的关键变量和函数
static int16_t g_1141 = (int16_t)2L;

static void test_func(int32_t *p_22) {
  // 模拟原始代码中的赋值序列
  *p_22 = (int32_t)0x8F00C220L;  // 设置为一个非零值
  
  {
    int tmp_24;
    int16_t tmp_21;
    uint16_t l_1334 = (uint16_t)0xA497L;
    int16_t *l_1344 = &g_1141;
    
    *p_22 &= (int)l_1334;  // 按位与操作，结果仍为非零
    
    // 这个条件判断在实际执行中总是为真
    if (*p_22) {
      // 实际上永远不会执行到这里
      goto break_cont_1;
    }
    
    // 下面的代码在实际执行中永远不会到达，但Frama-C可能保留在切片中
    tmp_24 = 1;
    tmp_21 = (int16_t)tmp_24;
    printf("This should never be printed: %d\n", (int)tmp_21);
    *l_1344 = tmp_21;  // 这行也不会执行
    
    break_cont_1: ;
  }
}

int main(void) {
  int32_t dummy_var = 0;
  int32_t *p_22 = &dummy_var;
  
  test_func(p_22);
  
  printf("g_1141 value: %d\n", g_1141);
  return 0;
}