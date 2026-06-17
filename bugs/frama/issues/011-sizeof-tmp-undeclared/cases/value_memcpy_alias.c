// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>
#include <string.h>

static uint32_t g_out = 0U;

struct Pair {
  uint32_t a;
  uint32_t b;
};

static void write_bytes(uint8_t *dst, const struct Pair *p) {
  memcpy(dst, p, sizeof(*p));
}

static uint32_t read_u32(const uint8_t *src) {
  uint32_t v;
  memcpy(&v, src, sizeof(v));
  return v;
}

int main(void) {
  struct Pair p = {0x11223344U, 0x55667788U};
  uint8_t buf[sizeof(p)];
  memset(buf, 0, sizeof(buf));
  write_bytes(buf, &p);
  uint32_t x = read_u32(buf);
  uint32_t y = read_u32(buf + 4);
  g_out = x ^ (y + 7U);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}

