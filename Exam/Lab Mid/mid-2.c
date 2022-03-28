/* 2. Write a C program to find Sum of series S=(1)^2 + (1+3)^2 + (1+3+5)^2 + ..…. + (1+3+5+…+n)^2, take an number n from user.

Test Case:

Input:

Enter n: 10

Output:

Sum of series: 1958 */

#include <stdio.h>
#include <math.h>

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        int term = 0;
        for(int j = 1; j <= i; j++)
        {
            if(j%2 != 0)
            {
                term += j;
            }
        }
        sum += pow(term, 2) / 2;
    }

    printf("Sum of series: %d", sum);
}
