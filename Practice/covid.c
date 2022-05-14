/*  Define a C structure Covid19Info to store the information of COVID 19 cases of countries around the world.
It keeps the name of the country, number of COVID 19 cases, number of deaths, current test positive rate, etc.
After defining the structure, declare a variable of Covid19Info type with some initial values for Bangladesh. */

#include <stdio.h>
#include <string.h>

struct Covid19Info
{
    char countryName[50];
    int numberOfCases;
    int numberOfDeaths;
    float currentTestPositiveRate;
};

void main()
{
    struct Covid19Info BD;

    strcpy(BD.countryName, "Bangladesh");
    BD.numberOfCases = 1022;
    BD.numberOfDeaths = 102;
    BD.currentTestPositiveRate = 12.3;
}