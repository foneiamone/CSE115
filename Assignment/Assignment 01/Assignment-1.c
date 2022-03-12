#include <stdio.h>

int evenNumbers(int);
int oddNumbers(int);
int printNumbers(int);

int main()
{
    printf("This program can print all odd or even numbers between 1 to a given number.\n");

    int input;
    printf("\nEnter any number: ");
    scanf("%d", &input);

    if (input > 1)
    {
        int task;
        printf("\n1. Print all even numbers from 1 to %d?\n2. Print all odd numbers from 1 to %d?\n", input, input);
        printf("\nEnter 1 or 2: ");
        scanf("%d", &task);

        switch (task)
        {
        case 1:
            evenNumbers(input);
            break;

        case 2:
            oddNumbers(input);
            break;

        default:
            printf("Invalid input!!");
            break;
        }
    }

    else
    {
        printf("\nEnter any number greater than 1.");
    }

    return 0;
}

int evenNumbers(int num)
{
    printf("\nEven numbers between 1 and %d: ", num);
    for (int i = 2; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printNumbers(i);
        }
    }

    return 0;
}

int oddNumbers(int num)
{
    printf("\nOdd numbers between 1 and %d: ", num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            printNumbers(i);
        }
    }

    return 0;
}

int printNumbers(int num)
{
    printf("%d ", num);

    return 0;
}