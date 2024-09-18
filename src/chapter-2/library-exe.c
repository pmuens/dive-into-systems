#include <stdio.h>

#include "library.h"

int main(void) {
  float val1, val2, ret;

  printf("Enter two float values: ");
  scanf("%f%f", &val1, &val2);
  ret = bigger(val1, val2);
  printf("%f is the biggest\n", ret);

  return 0;
}
