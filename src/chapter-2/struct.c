#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentT {
  char name[64];
  int age;
  float gpa;
  int grad_yr;
};

struct personT {
  char *name;
  int age;
};

int checkID(struct studentT s1, int min_age);
void changeName(char *old, char *new);

int main(void) {
  // Statically allocated.
  int can_vote;
  struct studentT student1, student2;

  strcpy(student1.name, "Ruth");
  student1.age = 17;
  student1.gpa = 3.5;
  student1.grad_yr = 2021;

  student2 = student1;
  strcpy(student2.name, "Frances");
  student2.age = student1.age + 4;

  can_vote = checkID(student1, 18);
  printf("%s %d\n", student1.name, can_vote);

  can_vote = checkID(student2, 18);
  printf("%s %d\n", student2.name, can_vote);

  changeName(student2.name, "Kwame");
  printf("student 2's name is now %s\n", student2.name);

  // Dynamically allocated.
  struct studentT student3;
  struct studentT *student4;

  strcpy(student3.name, "Freya");
  student3.age = 18;
  student3.gpa = 4.0;
  student3.grad_yr = 2020;

  student4 = malloc(sizeof(struct studentT));
  if (student4 == NULL) {
    printf("Error: malloc failed\n");
    exit(1);
  }

  (*student4).grad_yr = 2021;
  (*student4).age = student3.age + 1;

  student4->gpa = 3.5;
  strcpy(student4->name, "Lars");

  printf("%s %d\n", student4->name, student4->age);

  free(student4);
  student4 = NULL;

  // Pointer in struct fields.
  struct personT person1, *person2;

  person1.name = malloc(sizeof(char) * 8);
  strcpy(person1.name, "Zhichen");
  person1.age = 22;

  person2 = malloc(sizeof(struct personT));
  if (person2 == NULL) {
    printf("Error: malloc failed\n");
    exit(1);
  }

  person2->name = malloc(sizeof(char) * 4);
  strcpy(person2->name, "Vic");
  person2->age = 19;

  printf("%s %d\n", person1.name, person1.age);
  printf("%s %d\n", person2->name, person2->age);

  free(person2);
  person2 = NULL;

  return 0;
}

int checkID(struct studentT s, int min_age) {
  int ret = 1;

  if (s.age < min_age) {
    ret = 0;
    s.age = min_age + 1;
  }

  return ret;
}

void changeName(char *old, char *new) {
  if ((old == NULL) || (new == NULL)) {
    return;
  }

  stpcpy(old, new);
}
