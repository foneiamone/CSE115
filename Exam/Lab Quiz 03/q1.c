/* 1. Create a structure named Employee which will have int id, char name[20], float salary field.
In the main function create an object of Employee named employee and fill the employee object by taking user input.
After this store the employee object into a binary file named employee.bin and then create another object of Employee
named employee2 and read the object you had write in employee.bin file into the employee2 variable and print it in the
console.

-- WRITE --
Employee name: Bat Man
Employee ID: 726372
Employee salary: 81283.23

-- READ --
Employeee Name: Bat Man
Employee ID: 726372
Employee salary: 81283.2266
 */

#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

void main()
{
    struct Employee employee;
    printf("\n-- WRITE --\n");

    printf("Employee name: ");
    gets(employee.name);

    printf("Employee ID: ");
    scanf("%d", &employee.id);

    printf("Employee salary: ");
    scanf("%f", &employee.salary);

    FILE *f = fopen("employee.bin", "wb");
    if (f == NULL)
    {
        printf("\n\nopenERROR!!\n\n");
        return;
    }

    fwrite(&employee, sizeof(struct Employee), 1, f);
    fclose(f);

    struct Employee employee2;

    f = fopen("employee.bin", "rb");
    if (f == NULL)
    {
        printf("\n\nreadERROR!!\n\n");
        return;
    }

    printf("\n-- READ --\n");
    int n = fread(&employee2, sizeof(struct Employee), 1, f);
    for (int i = 0; i < n; i++)
    {
        printf("Employeee Name: %s\nEmployee ID: %d\nEmployee salary: %.4f\n\n", employee2.name, employee2.id, employee2.salary);
    }

    fclose(f);
}