/* Try yourself 3: Write C program using a function to check if a given number is a perfect number. 
Enter a number: 28
28 is a perfect number. */

#include <stdio.h>
#include <stdbool.h>

bool CheckPerfectNumber(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        return true;
    }

    return false;
}

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (CheckPerfectNumber(n))
    {
        printf("%d is a perfect number.", n);
    }

    else
    {
        printf("%d is not a perfect number.", n);
    }
}