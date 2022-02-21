/* Task 06: Write a C program to AND, OR and XOR of two input number.

Sample input:

Enter two numbers: 150 270

Sample output:

AND: 6

OR: 414

XOR: 408 */

#include <stdio.h>

int main()
{
    int n, m;

    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);

    printf("AND: %d\nOR: %d\nXOR: %d", n & m, n | m, n ^ m);

    return 0;
}