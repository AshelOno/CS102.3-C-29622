#include <stdio.h>

int main() {
    char employeeName[100];
    float basicSalary, newSalary, increment;

    // Input employee name and basic salary
    printf("Enter employee name: ");
    scanf("%[^\n]%*c", employeeName);
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    // Calculate increment based on basic salary
    if (basicSalary < 5000) {
        increment = 0.05 * basicSalary;
    } else if (basicSalary >= 5000 && basicSalary < 10000) {
        increment = 0.10 * basicSalary;
    } else {
        increment = 0.15 * basicSalary;
    }

    // Calculate new salary
    newSalary = basicSalary + increment;

    // Display employee details
    printf("\nEmployee Name: %s\n", employeeName);
    printf("New Salary: %.2f\n", newSalary);

    return 0;
}

