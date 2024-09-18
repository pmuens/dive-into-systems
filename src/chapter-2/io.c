#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // Standard I/O.
  int x, y;
  float pi;
  char ch;

  FILE *infile;
  FILE *outfile;

  x = 5;
  y = 10;
  pi = 3.14;
  ch = 'A';

  printf("x is %d and y is %d\n", x, y);
  printf("%g \t %s \t %d \t %c\n", pi, "hello", y, ch);

  // File I/O.
  infile = fopen("./src/chapter-2/io.c", "r");
  if (infile == NULL) {
    printf("Error: unable to open file %s\n", "io.c");
    exit(1);
  }

  outfile = fopen("./io.copy.c", "w");
  if (outfile == NULL) {
    printf("Error: unable to open outfile\n");
    exit(1);
  }

  int cha;
  cha = getc(infile);

  while (cha != EOF) {
    putc(cha, outfile);
    cha = getc(infile);
  }

  fclose(infile);
  fclose(outfile);
}
