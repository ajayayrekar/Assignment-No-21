/*2. Write a function to take input employee data from the user. [ Refer structure from
question 1 ]*/

void inputEmployeeData(Employee* emp) {
    printf("Enter employee ID: ");
    scanf("%d", &(emp->id));
    printf("Enter employee name: ");
    scanf("%s", emp->name);
    printf("Enter employee salary: ");
    scanf("%f", &(emp->salary));
}
