/* 5. Write C program to check if an input string is a palindrome (e.g. “madam”, “dad”, etc.) or not.
Enter a string: uwu 
Palindrome
Enter a string: home
Not palindrome */

#include <stdio.h>
#include <string.h>

void main()
{
    char a[50];
    printf("Enter a string: ");
    scanf("%[^\n]s", a);

    int p = 1, l = strlen(a);
    for (int i = 0; i < l; i++)
    {
        if (a[i] != a[l - i - 1])
        {
            p--;
            printf("Not palindrome");
            break;
        }
    }

    if (p == 1)
    {
        printf("Palindrome");
    }
}