/* 6. Write C program to count the number of capital letters and the number of small letters in an input string
and print those numbers.
Enter string: Northsouth University
Capital letters: 2
Small letters: 18 */

#include <stdio.h>

void main()
{
    char a[50];
    printf("Enter string: ");
    scanf("%[^\n]s", a);

    int i = 0, c = 0, s = 0;
    while (a[i] != '\0')
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            c++;
        }

        if (a[i] >= 'a' && a[i] <= 'z')
        {
            s++;
        }
        i++;
    }

    printf("Capital letters: %d", c);
    printf("\nSmall letters: %d", s);
}