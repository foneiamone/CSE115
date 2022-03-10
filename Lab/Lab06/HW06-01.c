/* 1. Write a program that takes a minimum number, a maximum number, and common difference and prints the sum of the arithmetic series between them.
Sample input/output:
Enter minimum: 11
Enter maximum: 19
Enter Common difference: 2
The Sum is: 11 + 13 + 15 +17 +19 = 75 */

#include <stdio.h>

void main()
{
    int min, max, comDiff, sum = 0;

    printf("Enter minimum: ");
    scanf("%d", &min);

    printf("Enter maximum: ");
    scanf("%d", &max);

    printf("Enter Common difference: ");
    scanf("%d", &comDiff);

    printf("The Sum is: ");
    for (min; min <= max; min += comDiff)
    {
        printf("%d", min);

        if ((max > min + comDiff && min % 2 == 0) || (max != min && min % 2 != 0))
        {
            printf(" + ");
        }

        sum += min;
    }

    printf(" = %d", sum);
}