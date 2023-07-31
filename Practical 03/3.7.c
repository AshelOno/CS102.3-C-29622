#include <stdio.h>

int main() {
    int years_of_service;
    float basic_salary, monthly_sales, gross_remuneration, bonus_percentage;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    printf("Enter the number of years of service: ");
    scanf("%d", &years_of_service);

    printf("Enter the monthly sales: ");
    scanf("%f", &monthly_sales);

    // Calculate additional allowance for years of service
    float additional_allowance = 0;
    if (years_of_service > 5) {
        additional_allowance = 0.1 * basic_salary;
    }

    // Calculate additional allowance for working in Colombo
    float colombo_allowance = 0;
    char city;
    printf("Enter the city (C for Colombo): ");
    scanf(" %c", &city);

    if (city == 'C') {
        colombo_allowance = 2500;
    }

    // Calculate bonus percentage based on monthly sales
    if (monthly_sales < 25000) {
        bonus_percentage = 0.10;
    } else if (monthly_sales < 50000) {
        bonus_percentage = 0.12;
    } else {
        bonus_percentage = 0.15;
    }

    // Calculate gross remuneration
    gross_remuneration = basic_salary + additional_allowance + colombo_allowance + (monthly_sales * bonus_percentage);

    // Output the gross monthly remuneration
    printf("Gross monthly remuneration: %.2f\n", gross_remuneration);

    return 0;
}


