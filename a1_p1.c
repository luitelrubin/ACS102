/*
CH-230-A
a1_p1.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    double result;        /* The result of our calculation*/
    result = (3 + 1) / 5; // integer division is performed here which results in values after the decimal point being ignored hence the output 0
    printf("The value of 4/5 was %lf\n", result);

    result = (double)(3 + 1) / 5; // using a double cast, we will be able to force this expression to evaluate to a double value i.e. 0.800000
    printf("The value of 4/5 is now %lf\n", result);
    return 0;
}