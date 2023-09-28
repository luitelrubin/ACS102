/*
ACS-102
a4_p9.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int prod_min_max(int arr[], int n);
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
    arr = (int *)malloc(sizeof(int) * n);

    printf("Enter %d integers to populate your array: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", arr + i);

    printf("Product of min val and max val is\t: %d", prod_min_max(arr, n));
    free(arr);
    return 0;
}