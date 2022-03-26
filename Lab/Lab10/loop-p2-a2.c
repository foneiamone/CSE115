/* Enter the number of lines: 5
     A 
    B B
   C C C
  D D D D
 E E E E E */

#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    int m = n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = m; k != 0; k--)
        {
            printf(" ");
        }
        m--;
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", 64 + i);
        }
        printf("\n");
    }
}