#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // Integer stored on the heap.
  int *p;

  p = malloc(sizeof(int));
  if (p == NULL) {
    printf("Error: malloc failed\n");
    exit(1);
  }

  *p = 6;

  printf("%d\n", *p);

  free(p);
  p = NULL;

  // Integer arrays (stack vs. heap).
  int i;
  int s_array[20];  // static array.
  int *d_array;     // dynamic array.

  d_array = malloc(sizeof(int) * 20);
  if (d_array == NULL) {
    printf("Error: malloc failed\n");
    exit(1);
  }

  for (i = 0; i < 20; i++) {
    s_array[i] = i;
    d_array[i] = i;
  }

  printf("%d %d\n", s_array[3], d_array[3]);
  printf("%d %d\n", d_array[0], *d_array);

  free(d_array);
  d_array = NULL;
}
