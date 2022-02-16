/* Task 03: Write a C program to print the last digit of a number and all the other digits of it.

Sample input:

Enter a number: 253

Sample output:

Last digit: 3

Other digits: 25 */

#include <stdio.h>

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Last digit: %d ", result = num % 10);
    printf("\nOther digits: %d", num /= 10);

    return 0;
}