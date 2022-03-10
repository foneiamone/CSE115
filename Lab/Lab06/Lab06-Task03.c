// 3. Write a C program that reads an integer and then computes & prints the factorial of that integer.

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%ld", &n);

    unsigned long long factorial = 1;

    if (n < 0)
    {
        printf("Factorial of a negative number does not exist!");
    }

    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }

        printf("Factorial of %d is %llu.", n, factorial);
    }
}