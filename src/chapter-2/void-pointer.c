#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *array;
  char *str;

  // Recasting (malloc returns `void *` as it's a generic function).
  array = (int *)malloc(sizeof(int) * 10);
  str = (char *)malloc(sizeof(char) * 20);
  if (array == NULL || str == NULL) {
    printf("Error: malloc failed\n");
    exit(1);
  }

  *array = 10;
  str[0] = 'a';

  free(array);
  array = NULL;

  free(str);
  str = NULL;

  return 0;
}
