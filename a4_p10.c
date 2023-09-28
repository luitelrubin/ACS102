/*
ACS-102
a4_p10.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb);
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
{
    *prod = a * b;
    *div = a / b;
    for (int i = 0; i < b; i++)
        *pwr *= a;

    *invb = 1 / b;
}

int main()
{
    float a = 4, b = 2, prod, div, pwr = 1, invb;

    // printf("Enter a value for a: ");
    // scanf("%f", &a);
    // printf("Enter a value for b: ");
    // scanf("%f", &b);

    proddivpowinv(a, b, &prod, &div, &pwr, &invb);

    printf("a = %f, b = %f\n", a, b);
    printf("a * b\t: %f\n", prod);
    printf("a / b\t: %f\n", div);
    printf("a ^ b\t: %f\n", pwr);
    printf("1 / b\t: %f\n", invb);

    return 0;
}