#include <stdio.h>

int main() {
  char map['Z' - 'A' + 1] = {'2', '2', '2', '3', '3', '3', '4', '4', '4',
                             '5', '5', '5', '6', '6', '6', '7', '7', '7',
                             '7', '8', '8', '8', '9', '9', '9', '9'};

  printf("Enter phone number: ");

  char ch;
  while ((ch = getchar()) != '\n' && ch != EOF) {
    if (ch >= 'A' && ch <= 'Z') {
      putchar(map[ch - 'A']);
    } else {
      putchar(ch);
    }
  }
  putchar('\n');

  return 0;
}
