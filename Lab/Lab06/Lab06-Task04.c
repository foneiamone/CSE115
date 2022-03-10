/* 4. Write a program to display all decimal digits (i.e., numbers in the range 0 - 9) in reverse order.
Example output: 9 8 7 6 5 4 3 2 1 0 */

#include <stdio.h>

void main()
{
    int i = 9;

    while (i != -1)
    {
        printf("%d ", i);
        i--;
    }
}