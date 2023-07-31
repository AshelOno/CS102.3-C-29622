#include <stdio.h>

int main() {
    int choice;
    float num1, num2;

    while (1) {
        printf("Menu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");

        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Calculator has been closed.\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);

        float result;
        char operator;

        switch (choice) {
            case 1:
                result = num1 + num2;
                operator = '+';
                break;
            case 2:
                result = num1 - num2;
                operator = '-';
                break;
            case 3:
                result = num1 * num2;
                operator = '*';
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    operator = '/';
                } else {
                    printf("Error: Cannot divide by zero!\n\n");
                    continue;
                }
                break;
            default:
                printf("Invalid choice. Please try again.\n\n");
                continue;
        }

        printf("%.2f %c %.2f = %.2f\n\n", num1, operator, num2, result);
    }

    return 0;
}
