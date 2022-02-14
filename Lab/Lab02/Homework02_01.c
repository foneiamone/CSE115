/* 1. Ask user for two integers a and b. Then swap (interchange) the values of a and b. 
That means, a should get the value of b and b should get the value of a.

Input:
Enter a: 7
Enter b: 3

Output:
After swapping, a: 3 and b: 7 */

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    c = b;
    b = a;
    a = c;

    printf("\nAfter swapping, a: %d and b: %d", a, b);

    return 0;
}