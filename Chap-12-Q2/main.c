#include <ctype.h>
#include <stdio.h>

#define MAX_LEN 100

int main(void) {
  char msg[MAX_LEN], ch;
  int len = 0;

  printf("Enter a message: ");
  while ((ch = getchar()) != '\n' && ch != EOF && len < MAX_LEN)
    msg[len++] = ch;

  int i = 0, j = len - 1;
  while (i < j) {
    if (!isalpha((unsigned char)msg[i]))
      i++;
    else if (!isalpha((unsigned char)msg[j]))
      j--;
    else if (tolower((unsigned char)msg[i]) != tolower((unsigned char)msg[j])) {
      printf("Not a palindrome\n");
      return 0;
    } else {
      i++;
      j--;
    }
  }
  printf("Palindrome\n");
  return 0;
}
