#include <stdio.h>

int max(int n1, int n2);

void print_table(int start, int stop);

int main(void) {
  int x, y, larger;

  printf("This program will operate over two int values.\n");

  printf("Enter the first value: ");
  scanf("%d", &x);

  printf("Enter the second value: ");
  scanf("%d", &y);

  larger = max(x, y);

  printf("The larger of %d and %d is %d\n", x, y, larger);

  print_table(x, larger);

  return 0;
}

int max(int n1, int n2) {
  int result;

  result = n1;

  if (n2 > n1) {
    result = n2;
  }

  return result;
}

void print_table(int start, int stop) {
  int i;

  for (i = start; i <= stop; i++) {
    printf("%d\t", i * i);
  }

  printf("\n");
}
