#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constant usage.
#define N 50
#define COLS (100)
#define ROWS 3
#define COLUMNS 4

void init_matrix(int m[][COLS], int rows);
void init2D_1(int *arr, int rows, int cols);
void init2D_2(int **arr, int rows, int cols);

int main(void) {
  // Statically allocated 1D array.
  float averages[30];
  char name[20];
  int i;

  for (i = 0; i < 10; i++) {
    averages[i] = 0.0 + i;
    name[i] = 'a' + i;
  }
  name[10] = '\0';

  printf("%g %c %s\n", averages[3], name[3], name);

  strcpy(name, "Hello");
  printf("%s\n", name);

  // Dynamically allocated 1D array.
  int *p_array;
  double *d_array;

  p_array = malloc(sizeof(int) * N);
  d_array = malloc(sizeof(double) * 100);
  if ((p_array == NULL) || (d_array == NULL)) {
    printf("Error: malloc failed!\n");
    exit(1);
  }

  for (i = 0; i < N; i++) {
    p_array[i] = 0;
    d_array[i] = 0.0;
  }

  free(p_array);
  p_array = NULL;

  free(d_array);
  d_array = NULL;

  // Statically allocated 2D array.
  int j;

  int matrix[50][100];
  short little[10][10];

  for (i = 0; i < 50; i++) {
    for (j = 0; j < 100; j++) {
      matrix[i][j] = 0;
    }
  }

  // 2D array parameters.
  int bigger[90][COLS];
  init_matrix(bigger, 50);

  // Dynamically allocated 2D array.
  // Method 1: Memory-efficient allocation.
  // Note that this method doesn't allow for double indexing syntax ([][]).
  int *two_d_array_1;

  two_d_array_1 = malloc(sizeof(int) * ROWS * COLUMNS);
  if (two_d_array_1 == NULL) {
    printf("Error: malloc failed!\n");
    exit(1);
  }

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLUMNS; j++) {
      // Calculating offset as the compiler doesn't know it's a 2D array.
      two_d_array_1[i * COLUMNS + j] = 0;
    }
  }

  init2D_1(two_d_array_1, ROWS, COLUMNS);

  free(two_d_array_1);
  two_d_array_1 = NULL;

  // Method 2: Programmer-friendly way.
  int **two_d_array_2;

  two_d_array_2 = malloc(sizeof(int *) * ROWS);
  if (two_d_array_2 == NULL) {
    printf("Error: malloc failed!\n");
    exit(1);
  }

  for (i = 0; i < ROWS; i++) {
    two_d_array_2[i] = malloc(sizeof(int) * COLUMNS);
    if (two_d_array_2[i] == NULL) {
      printf("Error: malloc failed!\n");
      exit(1);
    }
  }

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLUMNS; j++) {
      two_d_array_2[i][j] = 0;
    }
  }

  init2D_2(two_d_array_2, ROWS, COLUMNS);

  free(two_d_array_2);
  two_d_array_2 = NULL;
}

void init_matrix(int m[][COLS], int rows) {
  int i, j;

  for (i = 0; i < rows; i++) {
    for (j = 0; j < COLS; j++) {
      m[i][j] = i * j;
    }
  }
}

void init2D_1(int *arr, int rows, int cols) {
  int i, j;

  for (i = 0; i < rows; i++) {
    for (j = 0; j < cols; j++) {
      arr[i * cols + j] = 0;
    }
  }
}

void init2D_2(int **arr, int rows, int cols) {
  int i, j;

  for (i = 0; i < rows; i++) {
    for (j = 0; j < cols; j++) {
      arr[i][j] = 0;
    }
  }
}
