/* 2. C Program that reads two distances (in feet+inches) and prints their sum
-- First Distance --
Enter feet: 5
Enter inch: 22

-- Second Distance --
Enter feet: 6
Enter inch: 33

Sum of distances: 12'43.0" */

#include <stdio.h>

struct distance
{
    int feet;
    float inch;
};

void main()
{
    struct distance d1;
    printf("-- First Distance --");
    printf("\nEnter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);

    struct distance d2;
    printf("\n-- Second Distance --\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);

    struct distance s;
    s.feet = d1.feet + d2.feet;
    s.inch = d1.inch + d2.inch;

    if (s.inch > 12)
    {
        ++s.feet;
        s.inch -= 12;
    }

    printf("\nSum of distances: %d\'%.1f\"", s.feet, s.inch);
}