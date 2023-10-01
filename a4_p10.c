/*
ACS-102
a4_p10.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
// function prototype(s)
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb);

// computes and returns by reference a*b, a/b, a^b and 1/b
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
{
    *prod = a * b; // assigns the product of a and b to the address pointed by the pointer
    *div = a / b;
    for (int i = 0; i < b; i++)
        *pwr *= a;

    *invb = 1 / b;
}

int main()
{
    // a and b have been initialized with randomly chosen test values,
    // pwr has been assigned the neutral value for multiplication 1
    float a = 4, b = 2, prod, div, pwr = 1, invb;

    /*  alternatively, the following block of code can be used to initialize a and b from standard input
        printf("Enter a float value: ");
        scanf("%f", &a);
        printf("Enter a float value: ");
        scanf("%f", &b);
    */
    proddivpowinv(a, b, &prod, &div, &pwr, &invb); // passing a and b by value, and prod, div, pwr and invb by reference

    printf("a = %f, b = %f\n", a, b);
    printf("a * b\t: %f\n", prod);
    printf("a / b\t: %f\n", div);
    printf("a ^ b\t: %f\n", pwr);
    printf("1 / b\t: %f\n", invb);

    return 0;
}