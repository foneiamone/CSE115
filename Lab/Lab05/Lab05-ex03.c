/* 3. Use switch case to make a simple calculator that can add, subtract, multiply or divide two input
numbers. The operator (+ ,   -  ,  *  or   /) should also be read from user.
Sample Input/Output:
Enter two numbers: 4.5 2.9
Enter operator: +
4.5 + 2.9 = 7.4 */

#include <stdio.h>

void main()
{
    double num1, num2;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    char oper;

    printf("Enter operator: ");
    scanf("\n%c", &oper);

    switch (oper)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
        break;

    case '-':
        printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
        break;

    case '*':
        printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
        break;

    case '/':
        printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
        break;

    default:
        printf("INVALID");
        break;
    }
}