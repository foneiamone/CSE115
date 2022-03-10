/* 3. Write a C program to enter any number from user and find the reverse of a given number using loop.
Sample input/output (bold ones are user inputs):
Enter a number: 2345
Reverse of 2345 is: 5432 */

#include <stdio.h>

void revNumber(int n)
{
    int number = n;

    printf("Reverse of %d is: ", n);
    for (int i = 1; number != 0; i++)
    {
        printf("%d", number % 10);
        number /= 10;
    }
}

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    revNumber(n);
}