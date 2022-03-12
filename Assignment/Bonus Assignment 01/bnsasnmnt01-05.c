/* 4. Write a C program that reads the first letter of direction (North, South, East, West), current
(x,y) coordinate, and advancement of a person and prints the new coordinate. For e.g., if the
current coordinate of a person in X- Y plane is (2,3) and s/he advances 6 units towards North,
then his/her new coordinate is (2,3+6)=(2,9). Sample input/output (bold ones are user inputs):
Enter current coordinate (x and y positions): 2 3
Enter No. units towards direction: 6
Enter Direction: N
New coordinate: (2,9
Using switch-case */

#include <stdio.h>

void main()
{
    int x, y;
    int dir;
    char p;

    printf("Enter current coordinate (x and y positions): ");
    scanf("%d %d", &x, &y);

    printf("Enter No. units towards direction: ");
    scanf("%d", &dir);

    printf("Enter Direction: ");
    scanf(" %c", &p);

    switch (p)
    {
    case 'N':
    case 'n':
        y = y + dir;
        break;

    case 'S':
    case 's':
        y = y - dir;
        break;

    case 'E':
    case 'e':
        x = x + dir;
        break;

    case 'W':
    case 'w':
        x = x - dir;
        break;

    default:
        break;
    }

    printf("New coordinate: (%d,%d)", x, y);
}