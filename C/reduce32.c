#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
int32_t reduce32(int32_t a);

#define Q 8380417

int main() {
    int32_t a;
    scanf("%d",&a);
    a = reduce32(a);
    printf("%d\n",a);
    return 0;
}

int32_t reduce32(int32_t a) {
  int32_t t;

  t = (a + (1 << 22)) >> 23;
  t = a - t*Q;

  return t;
}