/*
CH-230-A
a1_p5.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int x = 2138;              // assign a value to x
    printf("x = %9d\n", x);    // print 9 digits contained in x to the console
    float y = -52.358925;      // assign a value to y
    printf("y = %11.5f\n", y); // print 11 digits before and 5 digits after the decimal point to the console
    char z = 'G';              // assign a value to z
    printf("z = %c\n", z);     // print z to the console
    double u = 61.295339687;   // assign a value to u
    printf("u = %.7lf", u);    // print u, accurate to 7 decimal places
    return 0;
}