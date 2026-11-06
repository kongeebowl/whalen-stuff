#include <ctype.h>
#include <stdio.h>

#define MAX_LEN 100

int main(void) {
  char msg[MAX_LEN], *p = msg;
  int ch;

  printf("Enter a message: ");
  while ((ch = getchar()) != '\n' && ch != EOF && p < msg + MAX_LEN)
    *p++ = ch;

  char *left = msg, *right = p;
  while (left < right) {
    if (!isalpha((unsigned char)*left))
      left++;
    else if (!isalpha((unsigned char)*(right - 1)))
      right--;
    else if (tolower((unsigned char)*left) !=
             tolower((unsigned char)*(right - 1))) {
      printf("Not a palindrome\n");
      return 0;
    } else {
      left++;
      right--;
    }
  }
  printf("Palindrome\n");
  return 0;
}
