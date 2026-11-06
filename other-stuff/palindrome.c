#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main(void) {
  char msg[MAX_LEN + 1], *p = msg;
  char cleaned[MAX_LEN + 1], reversed[MAX_LEN + 1];
  int ch;

  printf("Enter a message: ");
  while ((ch = getchar()) != '\n' && ch != EOF && p < msg + MAX_LEN)
    *p++ = ch;
  *p = '\0';

  char *c = cleaned;
  for (char *s = msg; s < p; s++)
    if (isalpha((unsigned char)*s))
      *c++ = tolower((unsigned char)*s);
  *c = '\0';

  char *r = reversed;
  for (char *s = c; s > cleaned;)
    *r++ = *--s;
  *r = '\0';

  if (strcmp(cleaned, reversed) == 0)
    printf("Palindrome\n");
  else
    printf("Not a palindrome\n");

  return 0;
}
