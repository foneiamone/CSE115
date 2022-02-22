/* 4. Write a C program to check whether an input number is a multiple of only 5 (e.g. 5, 10, 15, ...), only 11
(e.g. 11, 22, 33, ...), both 5 and 11 (e.g. 55, 110, ....), or neither of them (e.g. 2,3, 4, 6, 7, 8, 9, 12, ....). */

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0 || num % 11 == 0)
    {
        if (num % 5 == 0 && num % 11 == 0)
        {
            printf("%d is a multiple of 5 and 11.", num);
        }

        else if (num % 5 == 0)
        {
            printf("%d is a multiple of 5.", num);
        }

        else
        {
            printf("%d is a multiple of 11.", num);
        }
    }

    else
    {
        printf("%d is not a multiple of 5 or 11.", num);
    }

    return 0;
}