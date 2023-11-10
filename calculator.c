#include <stdio.h>

int main() {
    char choice;
    double num1, num2;

    while (1) {
        printf("Calculator Menu:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Quit\n");
        printf("Enter your choice (1/2/3/4/5): ");
        scanf(" %c", &choice);

        if (choice == '5') {
            printf("Calculator program is exiting. Goodbye!\n");
            break;
        }

        if (choice < '1' || choice > '5') {
            printf("Invalid choice. Please select a valid option.\n");
            continue;
        }

        printf("Enter the first number: ");
        scanf("%lf", &num1);
        printf("Enter the second number: ");
        scanf("%lf", &num2);

        switch (choice) {
            case '1':
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
                break;
            case '2':
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
                break;
            case '3':
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
                break;
            case '4':
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed\n");
                } else {
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
                }
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}

