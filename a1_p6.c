/*
CH-230-A
a1_p6.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char c = 'F';                                          // declaration and assignment
    printf("Third character after %c  = %c.\n", c, c + 3); // c+3 calcultes the third characcter after the character stored in c
    printf("%c's corresponding ASCII code is %d.\n", c + 3, c + 3);
    return 0;
}