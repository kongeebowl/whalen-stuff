#include <ctype.h>
#include <stdio.h>

int main() {
  int values['Z' - 'A' + 1] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                               1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

  printf("Enter a word: ");

  int sum = 0;
  char ch;
  while ((ch = getchar()) != '\n' && ch != EOF) {
    ch = toupper(ch);
    if (ch >= 'A' && ch <= 'Z') {
      sum += values[ch - 'A'];
    }
  }

  printf("Scrabble value: %d\n", sum);

  return 0;
}
