/* 3. Write a C program to find Least Common Multiple (LCM) of two given numbers. */

#include <stdio.h>

int max(int, int);
int lcm(int, int);

void main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("LCM: %d", lcm(a, b));
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int lcm(int a, int b)
{
    int n = max(a, b);

    while (1)
    {
        if (n % a == 0 && n % b == 0)
        {
            return n;
            break;
        }
        n++;
    }
}