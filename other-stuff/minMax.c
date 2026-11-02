#include <stdio.h>

void minMax(int *arr, int n, int *min, int *max) {
  *min = *max = *arr;
  for (int *p = arr + 1; p < arr + n; p++) {
    if (*p < *min)
      *min = *p;
    if (*p > *max)
      *max = *p;
  }
}

int main(void) {
  int data[5] = {4, -2, 9, 0, 7};
  int lo, hi;
  minMax(data, 5, &lo, &hi);
  printf("min = %d, max = %d\n", lo, hi);
  return 0;
}
