/*
ACS-102
a3_p1.c
Rubin Luitel
rluitel@constructor.university
*/

#include <stdio.h>

int main()
{
    // declarations
    float x;
    int n;

    scanf("%f", &x); // initialize variable with keyboard input
    scanf("%d", &n); // initialize variable with keyboard input

    while (n < 1) // ensure n is a natural number
    {
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }

    // display x n times
    for (int i = 0; i < n; i++)
    {
        printf("%f\n", x);
    }

    return 0;
}