/* 3. Create a struct called “Employee” with the following members:
a) Name
b) Date of Birth (D.O.B., in short)
c) Starting Date
d) Salary
Create an array of 4 employee variables; then read user input to fill up this array. Then display the
info of the employee who gets the highest salary.

Sample input/output:
Name: Bob Marley
D.O.B: 1/4/1993
Starting date: 12/6/2016
Salary: 20000

Name: Rob Harfey
D.O.B: 2/11/1982
Starting date: 16/12/2016
Salary: 20000

Name: katty Harley
D.O.B: 12/4/1993
Starting date: 2/6/2016
Salary: 30000

Name: Betty Simpson
D.O.B: 3/11/1980
Starting date: 25/11/2016
Salary: 10000

Info of employee with highest salary:
Name: katty Harley
D.O.B: 12/4/1993
Starting date: 2/6/2016
Salary: 30000

Hint: You can use scanf("%d/%d/%d", &d, &m, &y); command to read dates in the above format.
Bonus: Print the info of the employee who joined most recently (for the above inputs, the most recently
joined employee is: Rob Harfey with starting date: 16/12/2016). You must create another struct for DOB
and starting date (see nested structure). You can use the logic of comparing two dates in exercise 2 here. 

Info of employee who recently joined:
Name: Rob Harfey
D.O.B: 2/11/1982
Starting date: 16/12/2016
Salary: 20000 */

#include <stdio.h>
#include <string.h>

void main()
{
    struct date
    {
        int day, month, year;
    };

    struct Employee
    {
        char name[30];
        struct date dob;
        struct date start;
        int salary;
    } employee[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Name: ");
        gets(employee[i].name);

        printf("D.O.B: ");
        scanf("%d/%d/%d", &employee[i].dob.day, &employee[i].dob.month, &employee[i].dob.year);

        printf("Starting date: ");
        scanf("%d/%d/%d", &employee[i].start.day, &employee[i].start.month, &employee[i].start.year);

        printf("Salary: ");
        scanf("%d", &employee[i].salary);

        printf("\n");
        fflush(stdin);
    }

    struct Employee richEmployee;
    strcpy(richEmployee.name, employee[0].name);

    richEmployee.dob.day = employee[0].dob.day;
    richEmployee.dob.month = employee[0].dob.month;
    richEmployee.dob.year = employee[0].dob.year;

    richEmployee.start.day = employee[0].start.day;
    richEmployee.start.month = employee[0].start.month;
    richEmployee.start.year = employee[0].start.year;

    richEmployee.salary = employee[0].salary;

    for (int i = 1; i < 4; i++)
    {
        if (richEmployee.salary < employee[i].salary)
        {
            strcpy(richEmployee.name, employee[i].name);

            richEmployee.dob.day = employee[i].dob.day;
            richEmployee.dob.month = employee[i].dob.month;
            richEmployee.dob.year = employee[i].dob.year;

            richEmployee.start.day = employee[i].start.day;
            richEmployee.start.month = employee[i].start.month;
            richEmployee.start.year = employee[i].start.year;

            richEmployee.salary = employee[i].salary;
        }
    }

    printf("\nInfo of employee with highest salary:");
    printf("\nName: %s", richEmployee.name);
    printf("\nD.O.B: %d/%d/%d", richEmployee.dob.day, richEmployee.dob.month, richEmployee.dob.year);
    printf("\nStarting date: %d/%d/%d", richEmployee.start.day, richEmployee.start.month, richEmployee.start.year);
    printf("\nSalary: %d", richEmployee.salary);

    struct Employee recentEmployee;
    strcpy(recentEmployee.name, employee[0].name);

    recentEmployee.dob.day = employee[0].dob.day;
    recentEmployee.dob.month = employee[0].dob.month;
    recentEmployee.dob.year = employee[0].dob.year;

    recentEmployee.start.day = employee[0].start.day;
    recentEmployee.start.month = employee[0].start.month;
    recentEmployee.start.year = employee[0].start.year;

    recentEmployee.salary = employee[0].salary;

    for (int i = 1; i < 4; i++)
    {
        if ((recentEmployee.start.year < employee[i].start.year) || (recentEmployee.start.year == employee[i].start.year && recentEmployee.start.month < employee[i].start.month) || (recentEmployee.start.year == employee[i].start.year && recentEmployee.start.month == employee[i].start.month && recentEmployee.start.day < employee[i].start.day))
        {
            strcpy(recentEmployee.name, employee[i].name);

            recentEmployee.dob.day = employee[i].dob.day;
            recentEmployee.dob.month = employee[i].dob.month;
            recentEmployee.dob.year = employee[i].dob.year;

            recentEmployee.start.day = employee[i].start.day;
            recentEmployee.start.month = employee[i].start.month;
            recentEmployee.start.year = employee[i].start.year;

            recentEmployee.salary = employee[i].salary;
        }
    }

    printf("\n\nInfo of employee who recently joined:");
    printf("\nName: %s", recentEmployee.name);
    printf("\nD.O.B: %d/%d/%d", recentEmployee.dob.day, recentEmployee.dob.month, recentEmployee.dob.year);
    printf("\nStarting date: %d/%d/%d", recentEmployee.start.day, recentEmployee.start.month, recentEmployee.start.year);
    printf("\nSalary: %d", recentEmployee.salary);
}