#include <stdio.h>

int main(void) {
  int num, i;

  printf("Enter a value: ");
  scanf("%d", &num);

  if (num < 0) {
    num = -num;
  }

  for (i = 0; i < num; i++) {
    printf("%d\n", i);
  }

  return 0;
}
