/*
CH-230-A
a2_p10.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    // declaration
    int days;
    int count = 1;

    char line[1000];

    // take input from the keyboard
    printf("Enter number of days: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &days);

    // input validation
    while (days < 1)
    {
        printf("Invalid Input\n");
        printf("Enter number of days: ");
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%d", &days);
    }

    while (count <= days)
    {
        switch (count)
        {
        case 1:
            printf("1 day = 24 hours\n"); // singular day for 1 day
            break;
        default:
            printf("%d days = %d hours\n", count, count * 24); // plural days for more than 1 days
        }
        ++count;
    }

    return 0;
}