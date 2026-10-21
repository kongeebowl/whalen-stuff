#include <stdio.h>

int main() {
  int hr, min;
  printf("put in time: ");
  scanf("%d:%d", &hr, &min);
  if (hr > 12) {
    printf("time is: %d:%d PM", hr - 12, min);

  } else if (hr == 12) {
    printf("time is: 12:%d PM", min);
  }

  else {
    printf("time is: %d:%d AM", hr, min);
  }
  return 0;
}
