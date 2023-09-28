/*
ACS-102
a3_p3.c
Rubin Luitel
rluitel@constructor.university
*/
#include <stdio.h>

float convert(int cm); // function declaration/prototype

float convert(int cm) // function definition
{
    return (float)cm / 100000; // type-cast necessary to retain values after the decimal point
}
int main()
{
    int cm;           // declaration
    scanf("%d", &cm); // take keyboard input and store it in memory address of cm

    printf("Result of conversion: %f", convert(cm));
    return 0;
}