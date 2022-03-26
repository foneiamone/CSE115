/* Enter number of lines: 5
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

    int m = n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < i; k++)
        {
            printf("  ");
        }

        for (int j = m; j != 0; j--)
        {
            printf("* ");
        }
        m--;

        for (int l = m; l != 0; l--)
        {
            printf("* ");
        }
        printf("\n");
    }
}