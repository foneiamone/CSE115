/* 5. C program to compute the integer resulting from rounding a number n (using function)
Enter a number: 3.6
After rounding: 4

Enter a number: 3.4
After rounding: 3 */

#include <stdio.h>

int roundNum(float n)
{
    if (n - (int)n >= .5)
    {
        return (int)n + 1;
    }

    return (int)n;
}

void main()
{
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);

    printf("After rounding: %d", roundNum(n));
}