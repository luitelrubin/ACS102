/*
ACS-102
a3_p10.c
Rubin Luitel
rluitel@constructor.university
*/
#include <stdio.h>

// fuction prototypes
float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);

// function definitions
float product(float a, float b)
{
    return a * b;
}

void productbyref(float a, float b, float *p)
{
    *p = a * b;
}

void modifybyref(float *a, float *b)
{
    *a += 3;
    *b += 11;
}

int main()
{
    float num1, num2;

    float prod; // prod will be used for storing the result of multiplication

    printf("Enter a float value: ");
    scanf("%f", &num1);
    printf("Enter another float value: ");
    scanf("%f", &num2);

    printf("Product of the two inputs (by value): %f\n", product(num1, num2));
    productbyref(num1, num2, &prod); // passed prod by reference
    printf("Product of the two inputs (by reference): %f\n", prod);

    // checking whether the calls to the first two functions have the same effect
    printf("Product function and productbyref function ");
    product(num1, num2) == prod ? printf("have the same effect.\n") : printf("do not have the same effect.\n");

    // checking the effect of calling modifybyref

    // values of num1 and num2 before running modifybyref function
    printf("Initial value of num1: %f\n", num1);
    printf("Initial value of num2: %f\n", num2);

    modifybyref(&num1, &num2); // modifybyref called here

    // values of num1 and num2 after executing modifybyref function
    printf("Modified value of num1: %f\n", num1); // num1 gets incremented by 3
    printf("Modified value of num2: %f\n", num2); // num2 gets incremented by 11
    return 0;
}