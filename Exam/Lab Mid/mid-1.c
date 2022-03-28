/* 1. Write a C Program to that will get ten positive numbers from user and display sum of only even numbers.

Test Case:

Input:

Enter 10 positive numbers: 1 2 3 4 5 6 7 8 9 10

Output:

Sum of only even numbers: 30 */

#include <stdio.h>

void main()
{
    int n, sum = 0;
    printf("Enter 10 positive numbers: ");
    for(int i = 0; i <10; i++)
    {
        scanf("%d", &n);
        if(n>=0)
        {
            if(n%2==0)
            {
                sum+=n;
            }
        }
    }

    printf("Sum of only even numbers: %d", sum);
}
