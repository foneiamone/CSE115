/* Task 05: Write a C program to left shift and right shift an input number 3 bits.

Sample input:

Enter a number: 230

Sample output:

After 3 bit Left Shift: 1840

After 3 bit Right Shift: 28 */

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("After 3 bit Left Shift: %d\nAfter 3 bit Right Shift: %d", n << 3, n >> 3);

    return 0;
}