/* 4. Write a C program to compute the value of nPr = n*(n-1)*(n-2)*...*(n-r+1), read n and r from user.

hint:

nPr = 0;

Loop n to (n-r+1) and update n with n-- and in body change nPr to nPr*=n. */

#include <stdio.h>

int fact(int);
int nPr(int, int);

void main()
{
    int n, r;

    printf("Enter n, r: ");
    scanf("%d %d", &n, &r);

    printf("nPr = %d", nPr(n, (n - r)));
}

int fact(int n)
{
    int f = 1;

    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }

    return f;
}

int nPr(int n, int r)
{
    return fact(n) / fact(r);
}