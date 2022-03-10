// 3. Write a C program to read an integer from user and count the total number of nonzero digits in it.

#include <stdio.h>

int nonZero(int n)
{
    int count = 0;

    for (int i = 0; n != 0; i++)
    {
        int dig = n % 10;
        n /= 10;

        if (dig != 0)
        {
            count++;
        }
    }

    return count;
}

void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Total %d nonzero digits in %d.", nonZero(n), n);
}