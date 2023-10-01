/*
ACS-102
a4_p9.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
// function prototype(s)
int prod_min_max(int arr[], int n);

// returns the product of min element and max element in array arr[].
// n represents size of the array
int prod_min_max(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (min < arr[i])
        {
            min = arr[i];
        }
        if (max > arr[i])
        {
            max = arr[i];
        }
    }

    return min * max;
}
int main()
{
    int n;
    printf("Enter a size for your array: ");
    scanf("%d", &n);
    while (n < 1)
    {
        printf("Array size must be a positive integer\n");
        printf("Enter a size for your array: ");
        scanf("%d", &n);
    }

    int *arr;
    arr = (int *)malloc(sizeof(int) * n); // allocate memory to accomodate n integers

    printf("Enter %d integers to populate your array: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", arr + i); // take integer input from the keyboard

    printf("Product of min val and max val is\t: %d", prod_min_max(arr, n));
    free(arr); // release the allocated memory
    return 0;
}