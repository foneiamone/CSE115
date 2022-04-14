/* 1. Find the sum of the following series using user-defined function: 1/1! + 2/2! + 3/3! + ...... +1/N!
Hint: Create a function which will take a integer number n as parameter and return the factorial of this number,
In main function for building the series call the function to get factorial of a number.
Enter a number: 7
Sum: 2.718056
Enter a number: 10
Sum: 2.718282 */

#include <stdio.h>

int numFactorial(int n)
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

    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += ((float)i / numFactorial(i));
    }
    printf("Sum: %f", sum);
}