// Write a function in C that receives one integer and returns its reverse number.

#include <stdio.h>

int revNumber(int n)
{
    int reverseN = 0;

    while (n != 0)
    {
        reverseN = (reverseN * 10) + (n % 10);
        n /= 10;
    }

    return reverseN;
}

void main()
{
    printf("%d", revNumber(1234));
}