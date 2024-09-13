#include <stdio.h>

int main(void) {
  int num, val;

  printf("Enter a value: ");
  scanf("%d", &num);

  if (num < 0) {
    num = -num;
  }

  val = 1;
  while (val < num) {
    printf("%d\n", val);
    val = val * 2;
  }

  return 0;
}
