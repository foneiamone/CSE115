/* 7. Write a C program to compute the quadruple factorial of a given number 𝒏, 𝒒(𝒏)= (𝟐𝒏)!/𝒏! */

#include <stdio.h>

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Quadruple Factorial: %d", factorial(2 * n) / factorial(n));
}