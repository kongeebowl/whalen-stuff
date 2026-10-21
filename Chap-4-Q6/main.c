#include <stdio.h>

int main() {
  long long n;
  int d[13];
  int sum1 = 0, sum2 = 0, t, r, cs;

  printf("enter the number: ");
  scanf("%lld", &n);

  for (int i = 12; i > 0; i--) {
    d[i] = n % 10;
    n /= 10;
  }

  for (int i = 0; i < 12; i++) {
    if (i % 2 == 0)
      sum1 += d[i];
    else
      sum2 += d[i];
  }
  t = sum1 * 3 + sum2 - 1;

  r = t % 10;

  cs = 9 - r;
  // printf("%d, %d, %d, %d", sum1, sum2, t, r);
  printf("check sum is %d", cs);

  return 0;
}
