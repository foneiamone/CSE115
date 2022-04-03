/* 2. Write a C code using functions that takes two integers: a and b as inputs and returns the value of a^b.
Enter two numbers(a, b): 2 18
Result: 262144 */

#include <stdio.h>

int Pow(int a, int b)
{
    int total = 1;
    for (int i = 1; i <= b; i++)
    {
        total *= a;
    }

    return total;
}

void main()
{
    int a, b;
    printf("Enter two numbers(a, b): ");
    scanf("%d %d", &a, &b);

    printf("Result: %d", Pow(a, b));
}