/*
CH-230-A
a2_p08.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    // declaration
    int num;
    char line[1000];

    // prompt user to enter an integer and store it
    printf("Enter an integer: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &num);

    // using ternary operator to print the result of the comparison
    (num % 7 == 0 && num % 2 == 0) ? printf("The number is divisible by 2 and 7") : printf("The number is NOT divisible by 2 and 7.");

    return 0;
}