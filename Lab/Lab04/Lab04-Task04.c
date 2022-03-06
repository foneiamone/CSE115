// 4. Write a C program to enter month number and print number of days in month.

#include <stdio.h>

void main()
{
    int monthNumber;

    printf("Enter number of a month(1-12): ");
    scanf("%d", &monthNumber);

    switch (monthNumber)
    {
    case 1:
        printf("31 days");
        break;

    case 2:
        printf("28 days");
        break;

    case 3:
        printf("31 days");
        break;

    case 4:
        printf("30 days");
        break;

    case 5:
        printf("31 days");
        break;

    case 6:
        printf("30 days");
        break;

    case 7:
        printf("31 days");
        break;

    case 8:
        printf("31 days");
        break;

    case 9:
        printf("30 days");
        break;

    case 10:
        printf("31 days");
        break;

    case 11:
        printf("30 days");
        break;

    case 12:
        printf("31 days");
        break;

    default:
        printf("Invalid input!!");
        break;
    }
}