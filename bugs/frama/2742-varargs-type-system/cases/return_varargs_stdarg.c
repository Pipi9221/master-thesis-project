// CRITERIA: return main,sum

#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>

static uint32_t sum(uint32_t n, ...) {
  va_list ap;
  va_start(ap, n);
  uint32_t s = 0U;
  for (uint32_t i = 0U; i < n; i++) {
    s += va_arg(ap, uint32_t);
  }
  va_end(ap);
  return s;
}

int main(void) {
  uint32_t v = sum(4U, 10U, 20U, 30U, 40U);
  uint32_t out = (v ^ 0xA5U) + ((v << 3) & 0xFFU);
  printf("%u\n", out);
  return (int)(out & 0xFFU);
}

