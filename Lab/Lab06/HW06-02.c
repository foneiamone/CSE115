/* 2. Write a program that takes a minimum number, a maximum number, and common ratio and
prints the sum of the geometric series between them.
Sample input/output (bold ones are inputs):
Enter minimum: 5
Enter maximum: 150
Enter Common ratio: 3
The Sum is: 5 + 15 + 45 + 135 = 200

(here i updated by with i*=3, so you can use i*=ratio where i will be from minimum to maximum) */

#include <stdio.h>

void main()
{
    int min, max, commRatio, sum = 0;

    printf("Enter minimum: ");
    scanf("%d", &min);

    printf("Enter maximum: ");
    scanf("%d", &max);

    printf("Enter Common ratio: ");
    scanf("%d", &commRatio);

    printf("The Sum is: ");
    for (min; min <= max; min *= commRatio)
    {
        printf("%d", min);

        sum += min;

        if (min < max / commRatio)
        {
            printf(" + ");
        }
    }

    printf(" = %d", sum);
}