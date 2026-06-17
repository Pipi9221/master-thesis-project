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
  // 测试不同的l_488值对计算结果的影响
  uint16_t const l_488_zero = 0;
  uint16_t const l_488_one = 1;
  uint16_t const l_488_two = 2;
  uint16_t const l_488_max = 65535;
  
  int64_t tmp_5;
  uint16_t tmp_6;
  int8_t tmp;
  
  printf("Demonstrating how different values affect computation results:\n\n");
  
  // 模拟源代码中的计算: tmp_5 = safe_mod_func_int64_t_s_s_slice_1((int64_t)(& g_244 != & g_244), (int64_t)l_488);
  // 由于 (& g_244 != & g_244) 总是 false，所以是 0 % l_488
  
  printf("计算: 0 %% l_488\n");
  printf("==============\n");
  
  // l_488 = 0 (会导致除零异常)
  printf("l_488 = 0:  ");
  // 这里会触发SIGFPE，所以我们注释掉
  printf("SIGFPE (Floating Point Exception)\n");
  
  // l_488 = 1
  tmp_5 = safe_mod_func_int64_t_s_s_slice_1((int64_t)0, (int64_t)l_488_one);
  tmp_6 = safe_lshift_func_uint16_t_u_s_slice_1((uint16_t)(tmp_5 != (int64_t)l_488_one));
  tmp = (int8_t)tmp_6;
  printf("l_488 = 1:  tmp_5 = %ld, tmp_6 = %d, tmp = %d\n", (long)tmp_5, (int)tmp_6, (int)tmp);
  
  // l_488 = 2
  tmp_5 = safe_mod_func_int64_t_s_s_slice_1((int64_t)0, (int64_t)l_488_two);
  tmp_6 = safe_lshift_func_uint16_t_u_s_slice_1((uint16_t)(tmp_5 != (int64_t)l_488_two));
  tmp = (int8_t)tmp_6;
  printf("l_488 = 2:  tmp_5 = %ld, tmp_6 = %d, tmp = %d\n", (long)tmp_5, (int)tmp_6, (int)tmp);
  
  // l_488 = 65535
  tmp_5 = safe_mod_func_int64_t_s_s_slice_1((int64_t)0, (int64_t)l_488_max);
  tmp_6 = safe_lshift_func_uint16_t_u_s_slice_1((uint16_t)(tmp_5 != (int64_t)l_488_max));
  tmp = (int8_t)tmp_6;
  printf("l_488 = 65535:  tmp_5 = %ld, tmp_6 = %d, tmp = %d\n", (long)tmp_5, (int)tmp_6, (int)tmp);
  
  printf("\n进一步演示不同的被除数:\n");
  printf("========================\n");
  
  int64_t dividend = 100;
  printf("计算: %ld %% l_488\n", (long)dividend);
  
  // l_488 = 1
  tmp_5 = safe_mod_func_int64_t_s_s_slice_1(dividend, (int64_t)l_488_one);
  printf("l_488 = 1:  %ld %% 1 = %ld\n", (long)dividend, (long)tmp_5);
  
  // l_488 = 2
  tmp_5 = safe_mod_func_int64_t_s_s_slice_1(dividend, (int64_t)l_488_two);
  printf("l_488 = 2:  %ld %% 2 = %ld\n", (long)dividend, (long)tmp_5);
  
  // l_488 = 65535
  tmp_5 = safe_mod_func_int64_t_s_s_slice_1(dividend, (int64_t)l_488_max);
  printf("l_488 = 65535:  %ld %% 65535 = %ld\n", (long)dividend, (long)tmp_5);
  
  return 0;
}