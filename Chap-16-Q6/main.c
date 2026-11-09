#include <stdio.h>

struct date {
  int month, day, year;
};

int compare_dates(struct date d1, struct date d2) {
  if (d1.year != d2.year)
    return d1.year < d2.year ? -1 : 1;
  if (d1.month != d2.month)
    return d1.month < d2.month ? -1 : 1;
  if (d1.day != d2.day)
    return d1.day < d2.day ? -1 : 1;
  return 0;
}

void print_date(struct date d) { printf("%d/%d/%.2d", d.month, d.day, d.year); }

int main(void) {
  struct date first, second;
  int result;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &first.month, &first.day, &first.year);

  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &second.month, &second.day, &second.year);

  result = compare_dates(first, second);

  if (result == 0) {
    print_date(first);
    printf(" is the same as ");
    print_date(second);
  } else if (result < 0) {
    print_date(first);
    printf(" is earlier than ");
    print_date(second);
  } else {
    print_date(second);
    printf(" is earlier than ");
    print_date(first);
  }
  printf("\n");

  return 0;
}
