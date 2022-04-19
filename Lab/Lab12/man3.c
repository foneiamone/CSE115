/* 3. Array of structs (using 10 entries)
-- Enter Student Informations --

Roll: 1
Name: a  
Marks: 1


Roll: 2
Name: b
Marks: 2


Roll: 3
Name: c
Marks: 3


Roll: 4
Name: d
Marks: 4


Roll: 5
Name: e
Marks: 5


Roll: 6
Name: f
Marks: 6


Roll: 7
Name: g
Marks: 7


Roll: 8
Name: h
Marks: 8


Roll: 9
Name: i
Marks: 9


Roll: 10
Name: j
Marks: 10


-- View Student Information --

Roll: 1
Name: a
Marks: 1.0

Roll: 2
Name: b
Marks: 2.0

Roll: 3
Name: c
Marks: 3.0

Roll: 4
Name: d
Marks: 4.0

Roll: 5
Name: e
Marks: 5.0

Roll: 6
Name: f
Marks: 6.0

Roll: 7
Name: g
Marks: 7.0

Roll: 8
Name: h
Marks: 8.0

Roll: 9
Name: i
Marks: 9.0

Roll: 10
Name: j
Marks: 10.0 */

#include <stdio.h>

void main()
{
    struct student
    {
        char name[50];
        int roll;
        float marks;
    } s[10];

    printf("-- Enter Student Informations --\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\nRoll: %d\nName: ", s[i].roll = i + 1);
        gets(s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
        fflush(stdin);
    }

    printf("\n-- View Student Information --\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\nRoll: %d\nName: %s\nMarks: %.1f\n", s[i].roll, s[i].name, s[i].marks);
    }
}