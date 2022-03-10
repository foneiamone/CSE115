/* 5. Write a C program to find power of any number using for loop. Don’t use pow() function. Example:
Enter base: 2
Enter power: 5
2 to the power 5 = 32

hint:

--> 2*2*2*2*2 for power 5 and base 2.

result = 1

Loop i 1 to power, update i by i++ and in body change result to result *=result . */

#include <stdio.h>

int power(int, int);

void main()
{
    int b, p;

    printf("Enter base: ");
    scanf("%d", &b);

    printf("Enter power: ");
    scanf("%d", &p);

    printf("%d to the power %d = %d", b, p, power(b, p));
}

int power(int b, int p)
{
    int result = 1;

    for (int i = 1; i <= p; i++)
    {
        result *= b;
    }

    return result;
}