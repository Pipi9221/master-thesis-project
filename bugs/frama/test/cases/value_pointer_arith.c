// CRITERIA: value *(g_p+2)

#include <stdint.h>
#include <stdio.h>

static uint32_t g_buf[5] = {10U, 20U, 30U, 40U, 50U};
static uint32_t *g_p = &g_buf[0];

static void func_1(void) {
  for (uint32_t i = 0; i < 5U; i++) {
    g_buf[i] = (g_buf[i] + i) ^ 0x5AU;
  }
}

int main(void) {
  func_1();
  uint32_t v = *(g_p + 2);
  printf("%u\n", v);
  return (int)(v & 0xFFU);
}

