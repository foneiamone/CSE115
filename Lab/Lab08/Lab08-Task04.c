/* 4. Write a C program to read 3 integers and compute their LCM. */

#include <stdio.h>

int max(int, int, int);
int lcm(int, int, int);

int main(void)
{
    int a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("LCM: %d", lcm(a, b, c));

    return 0;
}

int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }

    else if (b > a && b > c)
    {
        return b;
    }

    else
    {
        return c;
    }
}

int lcm(int a, int b, int c)
{
    int n = max(a, b, c);

    while (1)
    {
        if (n % a == 0 && n % b == 0 && n % c == 0)
        {
            return n;
            break;
        }
        n++;
    }
}