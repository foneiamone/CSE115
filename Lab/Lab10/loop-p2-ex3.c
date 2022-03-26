/* Enter number of rows: 5
     A
    ABC
   ABCDE
  ABCDEFG
 ABCDEFGHI */

#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int x = 1, m = n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = m; k != 0; k--)
        {
            printf(" ");
        }
        m -= 1;
        int j = 1;
        while (j <= x)
        {
            printf("%c", 64 + j);
            j++;
        }
        x += 2;
        printf("\n");
    }
}