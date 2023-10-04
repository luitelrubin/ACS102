/*
ACS-102
a5_p2.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
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
    float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36}; // initialize array with provided values
    int size = 6;                                    // size of arr

    printf("Before:\n");
    for (int i = 0; i < size; i++)
        printf("%.3f ", arr[i]);
    printf("\n");

    // call the function
    divby5(arr, size);

    printf("After:\n");
    for (int i = 0; i < size; i++)
        printf("%.3f ", arr[i]);
    printf("\n");
    return 0;
}