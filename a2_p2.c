/*
CH-230-A
a2_p02.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getchar();

    // print char as character
    printf("character=%c\n", ch);

    // print char as decimal
    printf("character=%d\n", ch);

    // print char as octal
    printf("character=%o\n", ch);

    // print char as hexadecimal
    printf("character=%x\n", ch);
    return 0;
}