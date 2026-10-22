#include <stdio.h>

int main() {
  int m, n, buffer;
  printf("enter numberts like this (9, 1) big then small: ");
  scanf("%d %d", &m, &n);
  while (n != 0) {
    buffer = n;
    n = m % n;
    m = buffer;
  }
  printf("gcd os %d", m);
  return 0;
}
