#include <stdio.h>

int main() {
  int x;
  printf("number plas: ");
  scanf("%d", &x);
  double result = ((((3.0 * x + 2.0) * x - 5.0) * x - 1.0) * x + 7.0) * x - 6.0;
  printf("%lf", result);

  return 0;
}
