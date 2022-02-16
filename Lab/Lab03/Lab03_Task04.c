/* Task 04: Write a C program to convert days to years, month, weeks and days. Assume 1 year = 360 days, 1 Month = 30 days, 1 Week = 7 days.

Sample input:

Enter number of days: 398

Sample output:

Years: 1

Month: 1

Weeks: 1

Days: 3 *1* */

#include <stdio.h>

int main()
{
    int days;

    printf("Enter number of days: ");
    scanf("%d", &days);

    int year = days / 360;
        days -= year * 360;
    int month = days / 30;
        days -= month * 30;
    int week = days / 7;
        days -= week * 7;

    printf("Years: %d\nMonth: %d\nWeeks: %d\nDays: %d", year, month, week, days);

    return 0;
}