/* 4. Write a C program to read 3 integers and compute their LCM. */

#include <stdio.h>

int calc(int a, int b)
{
    int result = a;

    while (1)
    {
        if (result % b == 0 && result % a == 0)
        {
            break;
        }
        result++;
    }

    return result;
}

int lcm(int m, int n, int o)
{
    int l, k;

    if (m > n)
    {
        l = calc(m, n);
    }

    else
    {
        l = calc(m, n);
    }

    if (l > o)
    {
        k = calc(l, o);
    }

    else
    {
        k = calc(o, l);
    }

    return k;
}

void main()
{
    int n, m, o;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n, &m, &o);

    printf("LCM: %d", lcm(m, n, o));
}