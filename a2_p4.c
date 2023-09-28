/*
CH-230-A
a2_p04.c
Rubin Luitel
rluitel@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    // declarations
    float a, b, h;
    char line[1000];

    // populate variables a, b and h
    printf("Enter a float value for a: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &a);
    printf("Enter a float value for b: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &b);
    printf("Enter a float value for h: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &h);

    // area of square with side a
    printf("square area=%f\n", a * a);

    // area of rectangle with length and width b
    printf("rectangle area=%f\n", a * b);

    // area of triangle with base a and height h
    printf("triangle area=%f\n", 0.5 * a * h);

    // area of trapezoid with bases a, b and height h
    printf("trapezoid area=%f\n", 0.5 * h * (a + b));

    return 0;
}