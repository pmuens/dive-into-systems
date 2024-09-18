#include <stdio.h>

enum days_of_week { MON, TUES, WED, THURS, FRI, SAT, SUN };

int main(void) {
  enum days_of_week day;

  day = TUES;

  printf("Today is %d\n", day);

  return 0;
}
