#include <stdio.h>

// int main() {
//   char message[100];
//   int i = 0, len;
//
//   printf("Enter: ");
//   while (i < 100 && (message[i] = getchar()) != '\n') {
//     i++;
//   }
//   len = i;
//
//   printf("stuff: ");
//   for (i = len - 1; i >= 0; i--) {
//     putchar(message[i]);
//   }
//   putchar('\n');
//
//   return 0;
// }

int main() {
  char message[100];
  char *p = message;

  printf("Enter: ");
  while (p < message + 100 && (*p = getchar()) != '\n') {
    p++;
  }

  printf("Reversal is: ");
  for (p--; p >= message; p--) {
    putchar(*p);
  }
  putchar('\n');
  return 0;
}
