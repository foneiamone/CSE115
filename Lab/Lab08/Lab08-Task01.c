/* 1. Write a C program to read 2 integers: n and r from user and compute the value of 𝒏𝑷𝒓 = 𝒏! / (𝒏―𝒓)! */

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

int nPr(int n, int r)
{
    return factorial(n) / factorial(n - r);
}

void main()
{
    int n, r;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    printf("nPr: %d", nPr(n, r));
}