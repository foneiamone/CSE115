// 1. Write a C program to check whether a year is a leap year or not, using switch case.

#include <stdio.h>

void main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    int leapYear = year % 400 == 0 || year % 100 == 0 || year % 4 == 0;

    switch (leapYear)
    {
    case 1:
        printf("%d is a leap year.", year);
        break;

    case 0:
        printf("%d is not a leap year.", year);
        break;

    default:
        printf("%d is not a leap year.", year);
        break;
    }
}