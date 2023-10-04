/*
ACS-102
a5_p5.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
double scalar_prod(double v[], double w[], int size);
void smallest(double vector[], int size);
void largest(double vector[], int size);

double scalar_prod(double v[], double w[], int size)
{
    double prod = 0;
    for (int i = 0; i < size; i++)
    {
        prod += v[i] * w[i]; // sum of products of v[i] and w[i]
    }
    return prod;
}

void smallest(double vector[], int size)
{
    double small = vector[0]; // assume first element is the smallest
    int spos = 0;             // assume smalest element lies in position 0
    for (int i = 1; i < size; i++)
    {
        if (vector[i] < small)
        {
            small = vector[i];
            spos = i;
        }
    }
    printf("The smallest = %lf\n", small);
    printf("Position of smallest = %d\n", spos);
    return;
}

void largest(double vector[], int size)
{
    double large = vector[0]; // assume first element is the smallest
    int lpos = 0;             // assume largest element lies in position 0
    for (int i = 1; i < size; i++)
    {
        if (vector[i] > large)
        {
            large = vector[i];
            lpos = i;
        }
    }
    printf("The largest = %lf\n", large);
    printf("Position of largest = %d\n", lpos);
    return;
}
int main()
{
    int n;
    scanf("%d", &n); // read a number n

    double *v = (double *)malloc(sizeof(double) * n); // allocate space for n components
    double *w = (double *)malloc(sizeof(double) * n); // allocate space for n components

    for (int i = 0; i < n; i++)
        scanf("%lf", v + i); // read components of vector v

    for (int i = 0; i < n; i++)
        scanf("%lf", w + i); // read components of vector w

    printf("Scalar product=%lf\n", scalar_prod(v, w, n));

    smallest(v, n); // display the smallest element and its position
    largest(v, n);  // display the largest element and its position

    smallest(w, n); // display the smallest element and its position
    largest(w, n);  // display the largest element and its position

    free(v); // release memory held by v
    free(w); // release memory held by w
    return 0;
}