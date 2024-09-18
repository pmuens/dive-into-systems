#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int i;

  printf("Program name: %s\n", argv[0]);

  for (i = 0; i < argc; i++) {
    printf("Argument #%d: %s\n", i, argv[i]);
  }

  return 0;
}
