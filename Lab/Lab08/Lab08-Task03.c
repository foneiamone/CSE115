/* 3. Write a C program to find Least Common Multiple (LCM) of two given numbers. */

#include <stdio.h>

int max(int n, int m)
{
    return (n > m) ? n : m;
}

int lcm(int n, int m)
{
    int mx = max(m, n);

    while (1)
    {
        if (mx % n == 0 && mx % m == 0)
        {
            return mx;
            break;
        }
        ++mx;
    }
}

void main()
{
    int n, m;

    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);

    printf("LCM: %d", lcm(n, m));
}