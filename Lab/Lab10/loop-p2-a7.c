/* Enter number of lines: 5
* 
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
 */

#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    int m = n - 1;
    for (int l = 1; l < n; l++)
    {
        for (int k = m; k != 0; k--)
        {
            printf("* ");
        }
        m--;
        printf("\n");
    }
}