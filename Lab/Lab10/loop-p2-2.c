/* Enter number of rows: 5
     1 
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
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
            printf("%d ", k);
        }
        printf("\n");
    }
}