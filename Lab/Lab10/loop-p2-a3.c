/* Enter number of lines: 5
1
23
456
7890
12345 */

#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
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
        printf("\n");
    }
}