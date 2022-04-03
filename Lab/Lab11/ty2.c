/* Try yourself2: Write C program using a function to check if a given number is positive, negative, or zero.
Enter a number: 7
Positive. */

#include <stdio.h>

int checkNumber(int n)
{
    if (n > 0)
    {
        return 1;
    }

    else if (n < 0)
    {
        return 2;
    }

    return 0;
}

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    switch (checkNumber(n))
    {
    case 1:
        printf("Positive.");
        break;

    case 2:
        printf("Negative.");
        break;

    case 0:
        printf("Zero.");
        break;
    }
}