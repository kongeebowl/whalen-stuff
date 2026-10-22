
#include <stdio.h>

int main() {
  int m, n, buffer, om, on;
  printf("enter fraction: ");
  scanf("%d/%d", &om, &on);
  m = on;
  n = om;
  while (n != 0) {
    buffer = n;
    n = m % n;
    m = buffer;
  }
  printf("%d/%d", om / m, on / m);

  return 0;
}
