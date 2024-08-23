#include <stdio.h>

int main() {
    char operation;
    float num1, num2;

    printf("Simple Calculator\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operation) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            break;
        default:
            printf("Error: Invalid operation!\n");
    }

    return 0;
}

