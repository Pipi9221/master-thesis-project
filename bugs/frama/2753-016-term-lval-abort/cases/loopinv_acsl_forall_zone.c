// CRITERIA: loop-inv main
// EXPECT-PRESENT: inv_b

int t[10];

int main(void) {
  /*@ loop invariant inv_a: 0 <= i <= 10;
      loop invariant inv_b: \forall integer k; 0 <= k < i ==> t[k] == 0;
  */
  for (int i = 0; i < 10; i++) {
    t[i] = 0;
  }
  //@ assert t[0] == 0;
  return t[0];
}

