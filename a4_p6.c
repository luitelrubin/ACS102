/*
ACS-102
a4_p6.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
void two_greatest(int arr[], int size)
{
    int greatest;
    int second_greatest;

    if (size > 1)
    {
        greatest = arr[0];
        second_greatest = arr[1]; // it's possible secondgreatest > greatest here, but we'll fix it later

        for (int i = 1; i < size; i++)
        {
            if (arr[i] > greatest) // if secondgreatest > greatest, swap the values
            {
                second_greatest = greatest;
                greatest = arr[i];
            }
            else if (arr[i] > second_greatest)
            {
                second_greatest = arr[i];
            }
        }
    }
    else
    {
        // if only one value in the array, arr[0] = greatest = secondgreatest
        greatest = arr[0];
        second_greatest = arr[0];
    }
    printf("Greatest\t= %d\n", greatest);
    printf("Second greatest\t= %d\n", second_greatest);
}

int main()
{
    int n;
    do
    {
        printf("Enter a size (greater than 0) for your array: ");
        scanf("%d", &n);
    } while (n < 1);

    int *array;

    array = (int *)malloc(sizeof(int) * n);
    /*
        void *__cdecl malloc(size_t) returns the address of first element in the allocated memory space
        appropriate cast has been used to allocate memory to an integer pointer 'array'
        the allocated memory has 'n' spaces each of which can store an integer value
    */

    printf("Enter %d values for your array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", array + i); // array + i traverses the allocated memory space
    }

    two_greatest(array, n);

    free(array); // release the allocated memory
    return 0;
}