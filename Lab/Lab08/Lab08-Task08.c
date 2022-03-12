/* 8. Write a C program to display a given number in words starting from its leftmost digit.
Hint: Compute the reverse of the given number and then use a while loop like practice 3 to print the digits.
E.g., if input number is 1234 your program should print “One Two Three Four”. */

#include <stdio.h>

void printRNtoW(int num)
{
    int n = 0, zero = 0;

    while (num != 0)
    {
        n = (n * 10) + (num % 10);

        if (num % 10 == 0)
        {
            zero++;
        }

        num /= 10;
    }

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
            zero--;
            break;
        }

        n /= 10;
    }

    while (zero)
    {
        printf("Zero ");
        zero--;
    }
}

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printRNtoW(n);
}