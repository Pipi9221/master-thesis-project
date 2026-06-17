// CRITERIA: value g_out
#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

struct S {
  uint32_t a;
  uint16_t b;
};

int main(void) {
  struct S s = {0};
  struct S *p = &s; 
  // Use in array size declaration
  uint8_t buf[sizeof(*p)];
  
  g_out = (uint32_t)sizeof(buf);
  printf("%u\n", g_out);
  return 0;
}
