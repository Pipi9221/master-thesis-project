// CRITERIA: return main

#include <stdint.h>
#include <stdio.h>

int main(void) {
  uint32_t x = 2U;
  static void *tbl[] = {&&L0, &&L1, &&L2};
  goto *tbl[x];
L0:
  x = 10U;
  goto END;
L1:
  x = 11U;
  goto END;
L2:
  x = 12U;
  goto END;
END:
  printf("%u\n", x);
  return (int)(x & 0xFFU);
}

