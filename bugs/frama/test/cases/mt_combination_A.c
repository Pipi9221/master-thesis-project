// CRITERIA: value out1
#include <stdio.h>
int out1 = 0; int out2 = 0;
int main() {
    int x = 1; int y = 2;
    int a = x + 10; int b = y + 20;
    out1 = a; out2 = b;
    return out1 & 0xFF; 
}
