// CRITERIA: annot main
// FRAMAC-ARGS: -ulevel 10

#include <stdint.h>
#include <stdio.h>

static uint32_t g = 0U;

static void step(uint32_t x) {
  g = (g + x) ^ 0x55U;
}

int main(void) {
  uint32_t i = 0U;
  while (i < 10U) {
    //@ slice_preserve_stmt;
    step(i);
    if (g > 200U) {
      //@ slice_preserve_ctrl;
      break;
    }
    i++;
  }
  printf("%u\n", g);
  return (int)(g & 0xFFU);
}
