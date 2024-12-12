
#include <stdio.h>

void calculator_app() {
    char operation;
    double num1, num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operation);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operation) {
        case '+': printf("Result: %.2lf\n", num1 + num2); break;
        case '-': printf("Result: %.2lf\n", num1 - num2); break;
        case '*': printf("Result: %.2lf\n", num1 * num2); break;
        case '/': printf("Result: %.2lf\n", num2 != 0 ? num1 / num2 : 0); break;
        default: printf("Invalid operator.\n");
    }
}
