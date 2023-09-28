/*
CH-230-A
a2_p03.c
Rubin Luitel
rluitel@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    // declaractions
    int weeks, days, hours;
    int result;
    char line[1000];

    printf("This program converts weeks, days and hours into hours.\n");

    // prompt user to enter num of weeks and store it
    printf("Enter number of weeks: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &weeks);

    // prompt user to enter num of days and store it
    printf("Enter number of days: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &days);

    // prompt user to enter num of hours and store it
    printf("Enter number of hours: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &hours);

    // compute the result and display it
    result = (weeks * 7 * 24) + (days * 24) + hours;
    printf("%d weeks, %d days, %d hours = %d hours.", weeks, days, hours, result);
    return 0;
}