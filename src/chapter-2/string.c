#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  // Statically allocated.
  char str1[10];
  char str2[10];

  str1[0] = 'h';
  str1[1] = 'i';
  str1[2] = '\0';

  strcpy(str2, str1);

  str2[1] = 'o';

  printf("%s %s\n", str1, str2);

  // Dynamically allocated.
  int size;
  char str3[64];
  char *str4 = NULL;

  strcpy(str3, "Hello All");
  size = strlen(str3);

  str4 = malloc(sizeof(char) * (size + 1));
  if (str4 == NULL) {
    printf("Error: malloc failed!\n");
    exit(1);
  }

  // strcpy(str4, str3);
  strncpy(str4, str3, 5);
  str4[5] = '\0';

  printf("%s\n", str3);
  printf("%s\n", str4);

  strcat(str3, " There");
  printf("%s\n", str3);

  free(str4);
  str4 = NULL;

  // Comparison.
  int res;
  char str5[64];
  char str6[64];

  strcpy(str5, "alligator");
  strcpy(str6, "Zebra");

  res = strcmp(str5, str6);

  if (res == 0) {
    printf("%s is equal to %s\n", str5, str6);
  } else if (res < 0) {
    printf("%s is less than %s\n", str5, str6);
  } else {
    printf("%s is greater than %s\n", str5, str6);
  }

  res = strncmp(str5, "all", 3);

  printf("res: %d\n", res);

  return 0;
}
