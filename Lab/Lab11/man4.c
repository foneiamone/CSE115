/* 4. C program to compute sum of all natural numbers between m and n (using function) 
Enter two numbers(m, n): 1 5
Sum of all natural numbers: 15 */

#include <stdio.h>

int sumNaturalNumbers(int m, int n)
{
    int sum = 0;

    for (int i = m; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

void main()
{
    int m, n;
    printf("Enter two numbers(m, n): ");
    scanf("%d %d", &m, &n);

    printf("Sum of all natural numbers: %d", sumNaturalNumbers(m, n));
}