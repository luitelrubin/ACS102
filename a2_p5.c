/*
CH-230-A
a2_p05.c
Rubin Luitel
rluitel@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    // declarations
    int a;
    int *ptr_a = &a;
    char line[1000];

    // populate a with a value
    printf("Enter an integer value for a: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &a);

    printf("The pointer's address is %p", ptr_a);

    // increase the value of a by 5 by modifying the pointer

    return 0;
}