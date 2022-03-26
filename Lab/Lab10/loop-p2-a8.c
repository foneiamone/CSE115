/* Enter number of lines: 5
          * 
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * * 
          * 
*/

#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    int m = n, g = 1, j;
    for (int i = 1; i <= n; i++)
    {
        for (int k = m; k != 0; k--)
        {
            printf("  ");
        }
        m--;

        for (j = 1; j <= g; j++)
        {
            printf("* ");
        }
        g += 2;
        printf("\n");
    }

    int o = 2 * n - 3;
    for (int p = 1; p < n; p++)
    {
        for (int q = 0; q <= p; q++)
        {
            printf("  ");
        }

        for (int r = o; r > 0; r--)
        {
            printf("* ");
        }
        o -= 2;
        printf("\n");
    }
}