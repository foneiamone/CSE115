/* 3. C program to check Leap Year a year is a leap year if –

    (i) it is divisible by 4 AND not divisible by 100

    OR

    (ii) it is divisible by 400 */

#include <stdio.h>

void main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("Leap year.");
    }

    else if (year % 400 == 0)
    {
        printf("Leap year.");
    }

    else
    {
        printf("Not a leap year.");
    }
}