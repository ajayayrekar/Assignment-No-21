//8. Write a program to store information of 10 students and display them using structure.

#include <stdio.h>

struct Student {
  char name[50];
  int roll_number;
  float marks;
};

int main() {
  struct Student students[10];

  // Input student data
  for (int i = 0; i < 10; i++) {
    printf("Enter name, roll number, and marks for student %d: ", i+1);
    scanf("%s %d %f", students[i].name, &(students[i].roll_number), &(students[i].marks));
  }

  // Display student data
  printf("Student data:\n");
  for (int i = 0; i < 10; i++) {
    printf("Name: %s, Roll Number: %d, Marks: %.2f\n", students[i].name, students[i].roll_number, students[i].marks);
  }

  return 0;
}
