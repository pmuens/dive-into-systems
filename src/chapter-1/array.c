#include <stdio.h>

void test(int a[], int size) {
  if (size > 3) {
    a[3] = 8;
  }
  size = 2;
}

int main(void) {
  int arr[5], n = 5, i;

  for (i = 0; i < n; i++) {
    arr[i] = i;
  }

  printf("%d %d\n", arr[3], n);

  test(arr, n);

  printf("%d %d\n", arr[3], n);

  return 0;
}
