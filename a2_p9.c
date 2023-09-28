/*
CH-230-A
a2_p09.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    // declaration
    char ch;

    // take input from the keyboard
    printf("Enter a character: ");
    ch = getchar();
    while (getchar() != '\n') // consume characters upto newline
        ;

    // using if statements to find and display correct classification of the character
    if (ch >= '0' && ch <= '9')
    {
        printf("%c is a number.", ch);
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is a letter.", ch);
    }
    else
        printf("%c is some other symbol.", ch);

    return 0;
}