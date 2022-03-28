/* Write a C program to check whether a number is even or odd.
 If the number is even then print its digit as text. If the number is odd print its digit as text in reverse order.
 Test case 1:

Enter number: 135

Output:

FIVE THREE ONE

Test case 2:

Enter n: 234

Output:

TWO THREE FOUR */

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
            printf("ONE ");
            break;

        case 2:
            printf("TWO ");
            break;

        case 3:
            printf("THREE ");
            break;

        case 4:
            printf("FOUR ");
            break;

        case 5:
            printf("FIVE ");
            break;

        case 6:
            printf("SIX ");
            break;

        case 7:
            printf("SEVEN ");
            break;

        case 8:
            printf("EIGHT ");
            break;

        case 9:
            printf("NINE ");
            break;

        default:
            printf("ZERO ");
            zero--;
            break;
        }

        n /= 10;
    }

    while (zero)
    {
        printf("ZERO ");
        zero--;
    }
}

void printNtoW(int n)
{
    while (n != 0)
    {
        switch (n % 10)
        {
        case 1:
            printf("ONE ");
            break;

        case 2:
            printf("TWO ");
            break;

        case 3:
            printf("THREE ");
            break;

        case 4:
            printf("FOUR ");
            break;

        case 5:
            printf("FIVE ");
            break;

        case 6:
            printf("SIX ");
            break;

        case 7:
            printf("SEVEN ");
            break;

        case 8:
            printf("EIGHT ");
            break;

        case 9:
            printf("NINE ");
            break;

        default:
            printf("ZERO ");
            break;
        }

        n /= 10;
    }
}

void main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printRNtoW(n);
    }

    else
    {
        printNtoW(n);
    }
}