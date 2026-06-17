// CRITERIA: value g_out

#include <stdint.h>
#include <stdio.h>

static uint32_t g_out = 0U;

typedef uint32_t (*op_t)(uint32_t a, uint32_t b);

static uint32_t op_add(uint32_t a, uint32_t b) { return a + b; }
static uint32_t op_xor(uint32_t a, uint32_t b) { return a ^ b; }
static uint32_t op_mulmix(uint32_t a, uint32_t b) { return a * 33U + b * 17U + 0x5AU; }

static uint32_t rotl1(uint32_t x) { return (x << 1) | (x >> 31); }

int main(void) {
  uint32_t a = 0x12345678U;
  uint32_t b = 0x0BADF00DU;
  uint32_t seed = op_add(a, b) ^ op_xor(a, b) ^ op_mulmix(a, b);
  uint32_t idx = seed % 3U;

  op_t tbl[3] = {op_add, op_xor, op_mulmix};

  uint32_t r1 = tbl[idx](a, b);
  uint32_t r2 = tbl[(idx + 1U) % 3U](b, a);

  g_out = rotl1(r1) ^ r2 ^ rotl1(seed);
  printf("%u\n", g_out);
  return (int)(g_out & 0xFFU);
}
