// CRITERIA: return main

#include <assert.h>
#include <stdint.h>
#include <stdio.h>

int main(void) {
  uint32_t x = 0U;
  printf("%u\n", x);
  assert(x != 0U);
  return 0;
}

