/* 1. Find the sum of the following series using user-defined function:  1/1! + 2/2! + 3/3! + ...... +1/N!
Enter a number: 7
Sum: 2.718056 */

#include <stdio.h>

int Factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

double SumSeries(int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (double)i / Factorial(i);
    }

    return sum;
}

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum: %lf", SumSeries(n));
}