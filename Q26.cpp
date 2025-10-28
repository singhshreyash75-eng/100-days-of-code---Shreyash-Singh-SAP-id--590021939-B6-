//26) Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

//Ans 26



#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Input two numbers and operator
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // space before %c to clear input buffer

    // Perform calculation using switch-case
    switch (op) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;
        case '-':
            printf("Result = %d\n", num1 - num2);
            break;
        case '*':
            printf("Result = %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %.2f\n", (float)num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Result = %d\n", num1 % num2);
            else
                printf("Error! Modulo by zero.\n");
            break;
        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}
