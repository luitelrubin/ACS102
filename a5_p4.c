/*
ACS-102
a5_p4.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
// function prototype(s)
void divby5(float arr[], int size);

// divides all array elements by five
void divby5(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = (float)arr[i] / 5;
    }
}
int main()
{

    int n; // size of arr

    printf("Enter a size for your array: ");
    scanf("%d", &n); // take an integer input

    float *arr = (float *)malloc(sizeof(float) * n); // allocate memory for n floats

    printf("Enter %d float values for your array\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", arr + i); // read n values into the array
    }

    printf("Before:\n");
    for (int i = 0; i < n; i++)
        printf("%.3f ", arr[i]);
    printf("\n");

    divby5(arr, n); // call the function

    printf("After:\n");
    for (int i = 0; i < n; i++)
        printf("%.3f ", arr[i]);
    printf("\n");

    free(arr); // release the memory
    return 0;
}