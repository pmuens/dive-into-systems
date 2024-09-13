#include <stdio.h>
#include <string.h>

struct studentT {
  char name[64];
  int age;
  float gpa;
  int grad_yr;
};

int checkID(struct studentT s1, int min_age);

int main(void) {
  int can_vote;
  struct studentT student;

  strcpy(student.name, "Ruth");
  student.age = 17;
  student.gpa = 3.5;
  student.grad_yr = 2021;

  can_vote = checkID(student, 18);
  if (can_vote) {
    printf("%s is %d years old and can vote.\n", student.name, student.age);
  } else {
    printf("%s is only %d years old and cannot vote.\n", student.name,
           student.age);
  }

  return 0;
}

int checkID(struct studentT s, int min_age) {
  int ret = 1;

  if (s.age < min_age) {
    ret = 0;

    s.age = min_age + 1;
  }

  printf("%s is %d years old\n", s.name, s.age);

  return ret;
}
