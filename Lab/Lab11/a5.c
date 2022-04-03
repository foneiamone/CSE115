/* 5. Write a C program using function that reads a floating point number n and an integer d and then
prints the rounded value of n up to d decimal places. E.g. for n=5.678 and d = 2; it should print 5.68
Enter two numbers(n, d): 5.678 10
5.6779999733 */

#include <stdio.h>

void printRoundFloatNumber(float n, int d)
{
    printf("%.*f", d, n);
}

void main()
{
    float n;
    int d;
    printf("Enter two numbers(n, d): ");
    scanf("%f %d", &n, &d);

    printRoundFloatNumber(n, d);
}