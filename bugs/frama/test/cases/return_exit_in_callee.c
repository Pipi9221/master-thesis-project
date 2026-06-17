// CRITERIA: return main,die

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

static void die(uint32_t code) {
  printf("%u\n", code);
  exit((int)(code & 0xFFU));
}

int main(void) {
  uint32_t x = (9U * 33U) ^ 0xA5U;
  die(x);
  return 0;
}

