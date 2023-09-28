/*
CH-230-A
a1_p4.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int x = 17, y = 4;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    int sum = x + y;                             // calculate sum
    printf("sum = %d\n", sum);                   // print sum
    int prod = x * y;                            // calculate product
    printf("product = %d\n", prod);              // print product
    int diff = x - y;                            // calculate difference
    printf("difference = %d\n", diff);           // print difference
    float div = (float)x / y;                    // perform division
    printf("division = %f\n", div);              // print the result of division
    int rem = x % y;                             // calculate remainder of division
    printf("remainder of division = %d\n", rem); // print the remainder
    return 0;
}