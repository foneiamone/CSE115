/* Enter number of lines: 5
     1
    234
   56789
  0123456
 789012345 */

#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    int val = 1, m = n, x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = m; k != 0; k--)
        {
            printf(" ");
        }
        m--;

        for (int j = 1; j <= x; j++)
        {
            if (val < 10)
            {
                printf("%d", val);
            }

            else
            {
                val = 0;
                printf("%d", val);
            }
            val++;
        }
        x += 2;
        printf("\n");
    }
}