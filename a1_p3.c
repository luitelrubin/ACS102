/*
CH-230-A
a1_p3.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    float result; /* The result of the division*/
    int a = 5;
    int b = 13.5;
    result = a / b;                        // integer division is performed first and the result assigned to result
    printf("The result was %d\n", result); // result is a float variable, so the formatter should be %f instead of %d

    result = (float)a / b;                    // this forces the result of the division to retain the values after the decimal point
    printf("The result now is %f\n", result); // this prints the float variable result using the appropriate formatter
    return 0;
}