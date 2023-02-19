/*10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.*/

#include <stdio.h>

struct Marks {
  char name[50];
  int roll_number;
  float chem_marks;
  float maths_marks;
  float phy_marks;
};

int main() {
  struct Marks students[5];
  float percentage;

  // Input student data
  for (int i = 0; i < 5; i++) {
    printf("Enter name, roll number, and marks in Chemistry, Mathematics, and Physics for student %d: ", i+1);
    scanf("%s %d %f %f %f", students[i].name, &(students[i].roll_number), &(students[i].chem_marks), &(students[i].maths_marks), &(students[i].phy_marks));
  }

  // Display student data
  printf("Student data:\n");
  for (int i = 0; i < 5; i++) {
    percentage = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3.0;
    printf("Name: %s, Roll Number: %d, Percentage: %.2f\n", students[i].name, students[i].roll_number, percentage);
  }

  return 0;
}
