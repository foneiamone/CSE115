#include <stdio.h>

void main()

{

    int values[10] = {34, 23, 50, 65, 12, 83, 46, 95, 27, 72};

    int i, num, flag = 0;

    printf("Enter number to be searched:");

    scanf("%d", &num);

    for (i = 0; i < 10; i++)

    {
        if (num == values[i])
        {
            flag = 1;

            printf("Found\n");
            break;
        }
    }

    if (flag == 0)
    {
        printf("Not Found\n");
    }
}