/* 1. Compute the value of 5x3-4x2+√(x)+3; read x from user. */

#include <stdio.h>
#include <math.h>

int main()
{
    double x;

    printf("Enter a number: ");
    scanf("%lf", &x);

    double result = (5 * 3) - (4 * 2) + sqrt(x) + 3;

    printf("Value: %.2lf", result);

    return 0;
}