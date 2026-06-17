#include <stdio.h>
#include <stdint.h>

static int64_t safe_mod_func_int64_t_s_s_slice_1(int64_t si1, int64_t si2)
{
  int64_t tmp;
  tmp = si1 % si2;
  return tmp;
}

static uint16_t safe_lshift_func_uint16_t_u_s_slice_1(uint16_t left)
{
  uint16_t __retres;
  int tmp;
  tmp = (int)left;
  __retres = (uint16_t)tmp;
  return __retres;
}

int main(void)
{
  // 模拟源程序中的实际计算过程
  printf("源程序中实际的计算过程分析:\n\n");
  
  // 源程序中的表达式: (& g_244 != & g_244) 总是 false，即0
  int64_t comparison_result = (int64_t)0;  // 代表 (& g_244 != & g_244)
  printf("表达式 (& g_244 != & g_244) 的结果: %ld\n", (long)comparison_result);
  
  // 不同的l_488值
  uint16_t const l_488_zero = 0;
  uint16_t const l_488_one = 1;
  uint16_t const l_488_max = 65535;
  
  // 第一个计算: tmp_5 = safe_mod_func_int64_t_s_s_slice_1((int64_t)(& g_244 != & g_244), (int64_t)l_488);
  printf("\n第一个计算: tmp_5 = 0 %% l_488\n");
  printf("===============================\n");
  
  // l_488 = 0 (会导致除零异常)
  printf("l_488 = 0:  0 %% 0 = SIGFPE\n");
  
  // l_488 = 1
  int64_t tmp_5_one = safe_mod_func_int64_t_s_s_slice_1(comparison_result, (int64_t)l_488_one);
  printf("l_488 = 1:  0 %% 1 = %ld\n", (long)tmp_5_one);
  
  // l_488 = 65535
  int64_t tmp_5_max = safe_mod_func_int64_t_s_s_slice_1(comparison_result, (int64_t)l_488_max);
  printf("l_488 = 65535:  0 %% 65535 = %ld\n", (long)tmp_5_max);
  
  // 第二个计算: tmp_6 = safe_lshift_func_uint16_t_u_s_slice_1((uint16_t)(tmp_5 != (int64_t)l_488));
  printf("\n第二个计算: tmp_6 = (tmp_5 != l_488) 的类型转换结果\n");
  printf("====================================================\n");
  
  // 当l_488 = 1时
  uint16_t tmp_6_one = safe_lshift_func_uint16_t_u_s_slice_1((uint16_t)(tmp_5_one != (int64_t)l_488_one));
  printf("l_488 = 1:  (0 != 1) => %s => 转换为uint16_t => %d\n", 
         (tmp_5_one != (int64_t)l_488_one) ? "true" : "false", (int)tmp_6_one);
  
  // 当l_488 = 65535时
  uint16_t tmp_6_max = safe_lshift_func_uint16_t_u_s_slice_1((uint16_t)(tmp_5_max != (int64_t)l_488_max));
  printf("l_488 = 65535:  (0 != 65535) => %s => 转换为uint16_t => %d\n", 
         (tmp_5_max != (int64_t)l_488_max) ? "true" : "false", (int)tmp_6_max);
  
  // 第三个计算: tmp = (int8_t)tmp_6;
  printf("\n第三个计算: tmp = (int8_t)tmp_6\n");
  printf("===============================\n");
  int8_t tmp_one = (int8_t)tmp_6_one;
  int8_t tmp_max = (int8_t)tmp_6_max;
  printf("l_488 = 1:  tmp = (int8_t)%d = %d\n", (int)tmp_6_one, (int)tmp_one);
  printf("l_488 = 65535:  tmp = (int8_t)%d = %d\n", (int)tmp_6_max, (int)tmp_max);
  
  // 最终赋值: *g_204 = tmp;
  // 这会影响全局变量g_13的值（因为g_204指向g_13）
  printf("\n最终影响: *g_204 = tmp (g_204指向g_13)\n");
  printf("========================================\n");
  printf("l_488 = 1:  g_13 = %d\n", (int)tmp_one);
  printf("l_488 = 65535:  g_13 = %d\n", (int)tmp_max);
  
  printf("\n结论:\n");
  printf("=====\n");
  printf("虽然不同的l_488值会产生不同的计算结果，但它们都不会导致程序崩溃。\n");
  printf("只有当l_488为0时，才会触发SIGFPE异常。\n");
  printf("这就是为什么初始化为非零值（无论是1还是65535）程序都能正常运行的原因。\n");
  
  return 0;
}