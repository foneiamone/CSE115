/* 2. Compute quotient and remainder when you divide x(int) by y(int) 
(read x, y from user). Also, compute quotient and remainder when you 
divide y by x. Print all these four results.

Input:
Enter x: 7
Enter y: 3

Output:
Quotient (x/y) : 2

Remainder (x/y) : 1

Quotient (y/x) : 0

Remainder (y/x) : 3 */

#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    printf("\nQuotient (x/y) : %d\n", x / y);
    printf("\nRemainder (x/y) : %d\n", x % y);

    printf("\nQuotient (y/x) : %d\n", y / x);
    printf("\nRemainder (y/x) : %d", y % x);

    return 0;
}