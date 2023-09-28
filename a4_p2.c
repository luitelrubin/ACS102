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

    printf("Enter a string: ");
    fgets(line, sizeof(line), stdin);
    line[strlen(line) - 1] = '\0'; // remove trailing newline

    int i;
    for (i = 0; i < (int)strlen(line); i++)
    {
        i % 2 == 0 ? printf("%c\n", line[i]) : printf(" %c\n", line[i]);
    }
    return 0;
}