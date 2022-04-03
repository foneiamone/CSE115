/* 3. Compute the sum of the following geometric progression using a function with 2 parameters r and n:
1 + r + r2 + ... + rn (read the values of r and n from user)
Enter two numbers(r, n): 3 2
Sum: 13 */

#include <stdio.h>
#include <math.h>

int SumSeries(int r, int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += pow(r, i);
    }

    return sum;
}

void main()
{
    int r, n;
    printf("Enter two numbers(r, n): ");
    scanf("%d %d", &r, &n);

    printf("Sum: %d", SumSeries(r, n));
}