#include <stdio.h>

#define N 10
#define M 20

int main(void) {
  char letters[N];
  int numbers[N], i, j;
  int matrix[N][M];

  char *cptr = NULL;
  int *iptr = NULL;

  cptr = &(letters[0]);
  iptr = numbers;

  for (i = 0; i < N; i++) {
    *cptr = 'a' + i;
    *iptr = i * 3;

    cptr++;
    iptr++;
  }

  printf("Array values (using indexes)\n");
  for (i = 0; i < N; i++) {
    printf("letters[%d] = %c, numbers[%d] = %d\n", i, letters[i], i,
           numbers[i]);
  }

  cptr = &(letters[0]);
  iptr = numbers;

  printf("Array values (using pointer arithmetic)\n");
  for (i = 0; i < N; i++) {
    printf("letters[%d] = %c, numbers[%d] = %d\n", i, *cptr, i, *iptr);

    cptr++;
    iptr++;
  }

  return 0;
}
