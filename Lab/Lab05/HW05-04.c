// 4. Write a C program to check whether a year is a leap year or not, using switch case.

#include <stdio.h>
#include <stdbool.h>

bool leapYear(int y)
{
    return (y % 400 == 0 && y % 4 == 0 || y % 100 != 0);
}

void main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    switch (leapYear(year))
    {
    case true:
        printf("%d is a leap year.", year);
        break;

    default:
        printf("%d is not a leap year.", year);
        break;
    }
}