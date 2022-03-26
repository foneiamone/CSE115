/* Enter number of rows: 5
     A
    A B
   A B C
  A B C D
 A B C D E
*/

#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int m = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = m; j != 0; j--)
        {
            printf(" ");
        }
        m -= 1;
        for (int k = 1; k <= i; k++)
        {
            printf("%c ", 64 + k);
        }
        printf("\n");
    }
}