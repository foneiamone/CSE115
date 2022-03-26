/* Enter number of row: 5
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
    printf("Enter number of row: ");
    scanf("%d", &n);

    int m = 1;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j <= m; j++)
        {
            printf(" ");
        }
        m += 1;
        for (int k = i; k != 0; k--)
        {
            printf("* ");
        }
        printf("\n");
    }
}