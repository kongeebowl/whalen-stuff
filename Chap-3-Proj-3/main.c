#include <stdio.h>

int main() {
  int a, b, c, d, f;
  printf("hellawo saar plaee inaput isbn ofr bokok infaoemrations: ");
  scanf("%d-%d-%d-%d-%d", &a, &b, &c, &d, &f);
  printf("GSI: %d\n Group ID: %d\n Publisher code: %d\n Item Number: %d\n "
         "Check digit: %d",
         a, b, c, d, f);

  return 0;
}
