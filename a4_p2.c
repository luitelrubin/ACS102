/*
ACS-102
a4_p2.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char line[50];

    // printf("Enter a string: ");
    fgets(line, sizeof(line), stdin);
    line[strlen(line) - 1] = '\0'; // remove trailing newline

    for (int i = 0; i < (int)strlen(line); i++)
    {
        // print a space before the character if it's position in the string is odd
        i % 2 == 0 ? printf("%c\n", line[i]) : printf(" %c\n", line[i]);
    }
    return 0;
}