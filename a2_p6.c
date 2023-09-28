/*
CH-230-A
a2_p06.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    // double declarations
    double x, y;
    char line[1000];

    // read double values from keyboard
    printf("Enter a double value for x: ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &x);

    printf("Enter a double value for y: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &y);

    // declare and initialize pointers to double
    double *ptr_one = &x, *ptr_two = &x, *ptr_three = &y;

    // print contents of the pointers
    printf("The address of ptr 1 = %p\n", ptr_one);
    printf("The address of ptr 2 = %p\n", ptr_two);
    printf("The address of ptr 3 = %p\n", ptr_three);

    return 0;
}