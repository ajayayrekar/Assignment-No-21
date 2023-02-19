/*4. Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]*/

struct Employee find_highest_salary_employee(struct Employee arr[], int n) {
  struct Employee max_emp = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i].salary > max_emp.salary) {
      max_emp = arr[i];
    }
  }
  return max_emp;
}
