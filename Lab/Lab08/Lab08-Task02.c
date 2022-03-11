/* 2. Write a C program to read 2 integers: n and r from user and compute the value of 𝒏𝑪𝒓 = 𝒏! / 𝒓!(𝒏―𝒓)! */

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

int nCr(int n, int r)
{
    return nPr(n, r) / factorial(r);
}

void main()
{
    int n, r;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    printf("nCr: %d", nCr(n, r));
}