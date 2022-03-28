/* 3. Write a C program to print the first n prime numbers where n is an user input.

Test Case:

Input:

Enter n: 10

Output:

First 10 prime numbers: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, */

#include <stdio.h>

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int count = 0;
    printf("First %d prime numbers: ", n);
    for(int i = 2; count < n; i++)
    {
        int prime = 1;
        for(int j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime)
        {
            printf("%d, ", i);
            count += 1;
        }
    }
}
