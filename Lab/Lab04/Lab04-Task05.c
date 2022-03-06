/* 5. Write a C program that decides whether a person is eligible to work in a 
particular company or not. The company policy is: If the person’s age is between 
25 and 45, s/he are eligible to work. Otherwise, your software should say “You are 
too young or too old”. */

#include <stdio.h>

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 25 || age > 45)
    {
        printf("You are too young or too old");
    }

    else
    {
        printf("You are eligible to work");
    }

    return 0;
}