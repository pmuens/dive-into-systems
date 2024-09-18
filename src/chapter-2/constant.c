#include <stdio.h>
#include <stdlib.h>

#define N (20)
#define PI (3.14)
#define NAME ("Sarita")

int main(void) {
  int array1[N];
  int *array2, i;
  double area, circ, radius;

  radius = 12.3;
  area = PI * radius * radius;
  circ = 2 * PI * radius;

  array2 = malloc(sizeof(int) * N);
  if (array2 == NULL) {
    printf("Sorry, %s, malloc failed!\n", NAME);
    exit(1);
  }

  for (i = 0; i < N; i++) {
    array1[i] = i;
    array2[i] = i * 2;
  }

  free(array2);
  array2 = NULL;

  return 0;
}
