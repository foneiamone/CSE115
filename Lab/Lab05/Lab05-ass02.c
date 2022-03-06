/* 2. Farhan must pay a bill to a shopkeeper. The shopkeeper doesn’t have any change, so Farhan must
have all the notes required to pay the bill. Write a C program that reads the bill and the number of
each type of note (500, 100, 50, 20, 10, 5, 2, 1) from user and then output whether it is possible for
Farhan to pay the bill or not. If it is possible, then also output the number of each notes required to
pay the bill.
Tentative Input/Output (bold ones are user inputs):
Enter amount: 1175
Enter number of notes:
500: 1
100: 7
50: 1
20: 0
10: 5
5: 1
2: 0
1: 0
Farhan can pay the bill by using the following counts of different notes:
500: 1
100: 6
50: 1
20: 0
10: 2
5: 1
2: 0
1: 0 */

#include <stdio.h>

int main()
{
    int amount;

    printf("Enter amount: ");
    scanf("%d", &amount);

    printf("Enter number of notes:\n");

    int fiveHundred;
    printf("500: ");
    scanf("%d", &fiveHundred);

    int oneHundred;
    printf("100: ");
    scanf("%d", &oneHundred);

    int fifty;
    printf("50: ");
    scanf("%d", &fifty);

    int twenty;
    printf("20: ");
    scanf("%d", &twenty);

    int ten;
    printf("10: ");
    scanf("%d", &ten);

    int five;
    printf("5: ");
    scanf("%d", &five);

    int two;
    printf("2: ");
    scanf("%d", &two);

    int one;
    printf("1: ");
    scanf("%d", &one);

    int bill = amount;

    int nFiveHundred = 0;
    if (amount >= 500 && fiveHundred > 0)
    {
        nFiveHundred = amount / 500;
        if (nFiveHundred > fiveHundred)
        {
            nFiveHundred = fiveHundred;
        }

        amount = amount - (500 * nFiveHundred);
    }

    int nOneHundred = 0;
    if (amount >= 100 && oneHundred > 0)
    {
        nOneHundred = amount / 100;
        if (nOneHundred > oneHundred)
        {
            nOneHundred = oneHundred;
        }

        amount = amount - (100 * nOneHundred);
    }

    int nFifty = 0;
    if (amount >= 50 && fifty > 0)
    {
        nFifty = amount / 50;
        if (nFifty > fifty)
        {
            nFifty = fifty;
        }

        amount = amount - (50 * nFifty);
    }

    int nTwenty = 0;
    if (amount >= 20 && twenty > 0)
    {
        nTwenty = amount / 20;
        if (nTwenty > twenty)
        {
            nTwenty = twenty;
        }

        amount = amount - (20 * nTwenty);
    }

    int nTen = 0;
    if (amount >= 10 && ten > 0)
    {
        nTen = amount / 10;
        if (nTen > ten)
        {
            nTen = ten;
        }

        amount = amount - (10 * nTen);
    }

    int nFive = 0;
    if (amount >= 5 && five > 0)
    {
        nFive = amount / 5;
        if (nFive > five)
        {
            nFive = five;
        }

        amount = amount - (5 * nFive);
    }

    int nTwo = 0;
    if (amount >= 2 && two > 0)
    {
        nTwo = amount / 2;
        if (nTwo > two)
        {
            nTwo = two;
        }

        amount = amount - (2 * nTwo);
    }

    int nOne = 0;
    if (amount >= 1 && one > 0)
    {
        nOne = amount / 1;
        if (nOne > one)
        {
            nOne = one;
        }

        amount = amount - (1 * nOne);
    }

    int pay = (500 * nFiveHundred) + (100 * nOneHundred) + (50 * nFifty) + (20 * nTwenty) + (10 * nTen) + (5 * nFive) + (2 * nTwo) + (1 * nOne);

    if (pay == bill)
    {
        printf("Farhan can pay the bill by using the following counts of different notes:");
        printf("\n500: %d", nFiveHundred);
        printf("\n100: %d", nOneHundred);
        printf("\n50: %d", nFifty);
        printf("\n20: %d", nTwenty);
        printf("\n10: %d", nTen);
        printf("\n5: %d", nFive);
        printf("\n2: %d", nTwo);
        printf("\n1: %d", nOne);
    }

    else
    {
        printf("Farhan can not pay the bill.");
    }

    return 0;
}
