/* 4. Write a C program that reads an integer and returns the reverse of that number using function.
Enter a number: 5421
Reversed: 1245 */

#include <stdio.h>

int revNumber(int n)
{
    int rev;
    while (n != 0)
    {
        rev = (n % 10) + (rev * 10);
        n /= 10;
    }

    return rev;
}

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reversed: %d", revNumber(n));
}