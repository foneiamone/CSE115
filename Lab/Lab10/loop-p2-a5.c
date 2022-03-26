/* Enter number of lines: 5
0
01
010
0101
01010 */

#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int val = 0;
        for (int j = 1; j <= i; j++)
        {
            if (val == 0)
            {
                printf("%d", val);
                val = 1;
            }

            else
            {
                printf("%d", val);
                val = 0;
            }
        }
        printf("\n");
    }
}