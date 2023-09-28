/*
ACS-102
a3_p6.c
Rubin Luitel
rluitel@constructor.university
*/
#include <stdio.h>
float to_pounds(int kg, int g); // function prototype
float to_pounds(int kg, int g)  // function definition
{
    float pounds;
    pounds = kg * 2.2;               // convert kilograms to pounds and assign it to "pounds"
    pounds += (float)g / 1000 * 2.2; // convert grams to pounds and add it to "pounds"

    return pounds;
}

int main()
{
    int kg, g;

    scanf("%d", &kg); // take a value from the keyboard and assign it to kg
    scanf("%d", &g);  // take a value from the keyboard and assign it to g

    printf("Result of conversion: %f\n", to_pounds(kg, g));
    return 0;
}