/* 3. Write a C program to print the multiplication table (নামতা) of any given integer number.
Sample input/output:
Enter number to print the multiplication table of: 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50 */

#include <stdio.h>

void main()
{
    int n;

    printf("Enter number to print the multiplication table of: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}