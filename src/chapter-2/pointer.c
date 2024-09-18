#include <stdio.h>

int change_value(int *input);

int main(void) {
  int *ptr1, *ptr2, x, y;

  x = 8;
  ptr2 = &x;
  ptr1 = NULL;

  *ptr2 = 10;
  y = *ptr2 + 3;

  ptr1 = ptr2;

  *ptr1 = 100;

  ptr1 = &y;
  *ptr1 = 80;

  printf("ptr1: %d, ptr2: %d\n", *ptr1, *ptr2);

  int a;
  int b;

  a = 30;
  b = change_value(&a);

  printf("a: %d, b: %d\n", a, b);

  return 0;
}

int change_value(int *input) {
  int val;

  val = *input;

  if (val < 100) {
    *input = 100;
  } else {
    *input = val * 2;
  }

  return val;
}
