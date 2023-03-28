#include <stdio.h>

/**
 * main - is a simple caluclator that processes operators: +, -, /, *, %
 * Return: 0 (success)
*/

int main ()
{
    char operator;
    double num1, num2;

    printf("Please enter an operator (+, -, /, *):");
    scanf("%c", &operator);
    printf("Enter the two operands:");
    scanf("%lf %lf", &num1, &num2);

    /*.%2lf so that we have only one decimal*/
    
    switch (operator)
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", num1, num2, (num1 + num2));
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf", num1, num2, (num1 - num2));
            break;
        case '/':
            printf("%.2lf / %.2lf = %.2lf", num1, num2, (num1 / num2));
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf", num1, num2, (num1 * num2));
            break;
        /*if user inputs an invalid operator*/
        default:
            printf("Invalid operator");
    }
    return (0);
}
