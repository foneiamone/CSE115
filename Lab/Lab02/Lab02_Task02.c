/* Task 02: Write a program that asks the user to enter two numbers, 
obtains the two numbers from the user and prints the sum, product, 
difference, quotient and remainder of the two numbers. */

#include <stdio.h>

void main()
{
    int num1, num2;

    printf("Insert first number: ");
    scanf("%d", &num1);

    printf("Insert second number: ");
    scanf("%d", &num2);

    printf("\nSum = %d", num1 + num2);
    printf("\nProduct = %d", num1 * num2);
    printf("\nDifference = %d", num1 - num2);
    printf("\nQuotient = %d", num1 / num2);
    printf("\nRemainder = %d", num1 % num2);
}