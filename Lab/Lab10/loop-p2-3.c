/* 1/1+(1/1+1/2)+(1/1+1/2+1/3)+…+(1/1+1/2+…+1/n)

Enter a number: 3
Sum: 4.333333 */

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum += (1.0 / j);
        }
    }

    printf("Sum: %lf", sum);
}