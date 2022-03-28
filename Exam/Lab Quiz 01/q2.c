/* Write a C program which will use while loop to print all the integers between m and n which are divisible by 8 in descending order.
Test case 1:

Enter m: 100

Enter n: 150

Output:

144 136 128 120 112 104 */

#include <stdio.h>

void main()
{
    int m;
    printf("Enter m: ");
    scanf("%d", &m);

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = n; i >= m; i--)
    {
        if (i % 8 == 0)
        {
            printf("%d ", i);
        }
    }
}