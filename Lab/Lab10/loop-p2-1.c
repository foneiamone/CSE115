/* Enter the number of rows: 5
     *
    * *
   * * *
  * * * *
 * * * * *
*/

#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int m = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = m; j != 0; j--)
        {
            printf(" ");
        }
        m -= 1;
        for (int j = i; j != 0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}