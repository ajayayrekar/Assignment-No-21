/*5. Write a function to sort employees according to their salaries [ refer structure from
question 1]*/

void sort_employees_by_salary(struct Employee arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j].salary > arr[j+1].salary) {
        struct Employee temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}
