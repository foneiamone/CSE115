/* 8. Write a program to print all even numbers between m and n
(m, n are user inputs) in reverse order.
Sample input/output (bold ones are inputs):
Enter m: 9
Enter n: 21
All even numbers between 9 and 20 in reverse order: 20, 18, 16, 14, 12, 10 */

#include <stdio.h>

void main()
{
    int m, n, i;

    printf("Enter m: ");
    scanf("%d", &m);

    printf("Enter n: ");
    scanf("%d", &n);

    printf("All even numbers between %d and %d in reverse order: ", m, n);
    for (i = n; i > m; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);

            if ((i % 2 == 0 && i > m + 1 && m % 2 != 0) || (i % 2 == 0 && i > m + 2 && m % 2 == 0))
            {
                printf(", ");
            }
        }
    }
}