// Write a structure to store the names, salary, and hours
// of work per day of 10 employees in a company. Write a
// program to increase the salary depending on the number
// of hours of work per day as follows and then print the
// name of all the employees along with their final
// salaries. Assume:
// Hours of work per day 8 10 &gt;=12
// Increase in salary ₹4000 ₹8000 ₹12000

#include <stdio.h>
#include <string.h>


struct Employee {
    char name[50];
    int salary;
    int hoursPerDay;
};

void increaseSalary(struct Employee *emp) {
    if (emp->hoursPerDay >= 12) {
        emp->salary += 12000;
    } else if (emp->hoursPerDay >= 10) {
        emp->salary += 8000;
    } else if (emp->hoursPerDay > 8) {
        emp->salary += 4000;
    }
}

int main() {
    struct Employee employees[10];

    printf("Enter details of %d employees:\n", 10);
    for (int i = 0; i < 10; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%d", &employees[i].salary);
        printf("Hours of work per day: ");
        scanf("%d", &employees[i].hoursPerDay);
    }

    for (int i = 0; i < 10; i++) {
        increaseSalary(&employees[i]);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < 10; i++) {
        printf("Name: %s, Final Salary: %d\n", employees[i].name, employees[i].salary);
    }

    return 0;
}
