/* 5. C Program to find the number of spaces in a string (character array)
Enter a string: asd ads jdfh
Number of spaces: 2 */

#include <stdio.h>

int coutSpaceInString(char *a)
{
    int i = 0, c = 0;
    while (a[i] != '\0')
    {
        if (a[i] == ' ')
        {
            c++;
        }
        i++;
    }

    return c;
}

void main()
{
    char *a[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", a);

    printf("Number of spaces: %d", coutSpaceInString(a));
}