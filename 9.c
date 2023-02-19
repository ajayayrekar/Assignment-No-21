//9. Write a program to store information of n students and display them using structure#include <stdio.h>

struct Student {
  char name[50];
  int roll_number;
  float marks;
};

int main() {
  int n;
  printf("Enter the number of students: ");
  scanf("%d", &n);

  struct Student students[n];

  // Input student data
  for (int i = 0; i < n; i++) {
    printf("Enter name, roll number, and marks for student %d: ", i+1);
    scanf("%s %d %f", students[i].name, &(students[i].roll_number), &(students[i].marks));
  }

  // Display student data
  printf("Student data:\n");
  for (int i = 0; i < n; i++) {
    printf("Name: %s, Roll Number: %d, Marks: %.2f\n", students[i].name, students[i].roll_number, students[i].marks);
  }

  return 0;
}
