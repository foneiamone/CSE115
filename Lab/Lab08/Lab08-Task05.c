/* 5. Write a C program display a given number in words starting from its rightmost digit. */

#include <stdio.h>

void printNtoW(int);

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printNtoW(n);
}

void printNtoW(int n)
{
    while (n != 0)
    {
        switch (n % 10)
        {
        case 1:
            printf("One ");
            break;

        case 2:
            printf("Two ");
            break;

        case 3:
            printf("Three ");
            break;

        case 4:
            printf("Four ");
            break;

        case 5:
            printf("Five ");
            break;

        case 6:
            printf("Six ");
            break;

        case 7:
            printf("Seven ");
            break;

        case 8:
            printf("Eight ");
            break;

        case 9:
            printf("Nine ");
            break;

        default:
            printf("Zero ");
            break;
        }

        n /= 10;
    }
}