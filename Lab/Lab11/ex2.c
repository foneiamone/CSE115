/* Find the sum of the following series using a function:  12 + 22 + 32 + ... + N2 
Enter a number: 4
Sum: 30 */

#include <stdio.h>
#include <math.h>

int SumSeries(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; ++i)
    {
        sum += pow(i, 2);
    }

    return sum;
}

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum: %d", SumSeries(n));
}