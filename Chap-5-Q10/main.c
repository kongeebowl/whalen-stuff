#include <stdio.h>

int main() {
  int a;
  printf("score: ");
  scanf("%d", &a);
  a /= 10;
  switch (a) {
  case 0 ... 5:
    printf("F");
    break;
  case 6:
    printf("D");
    break;
  case 7:
    printf("C");
    break;
  case 8:
    printf("B");
    break;
  case 9:
  case 10:
    printf("A");
    break;
  }
}
