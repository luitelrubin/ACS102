/*
CH-230-A
a1_p2.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int result; /* The result of our calculation*/
    result = (2 + 7) * 9 / 3;
    printf("The result was %d\n");            // printf is expecting an integer/integer variable to be supplied to it.
    printf("The result is now %d\n", result); // now we have supplied an integer variable to take the place of %d on console output.
    return 0;
}