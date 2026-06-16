#include <stdint.h>
#include <stdio.h>

int16_t g_203 = 0x07C0L;

void func_1_sliced() {

    uint64_t const l_4351[3];  // After slicing
    
    const uint64_t l_4351[3] = {18446744073709551610UL, 18446744073709551610UL, 18446744073709551610UL}; // origin
    
    uint64_t tmp_80 = (uint64_t)((int)((uint8_t)(
        (((((0 + 0) + 0) + 0) + 0) + (int)l_4351[1]) - 1278006036)) + 0);
    
    
    g_203 = (int16_t)tmp_80; // g_203 gets undefined value
}

int main(void)
{
  int __retres;
  func_1_slice_1();
  __retres = 0;
  return __retres;
}