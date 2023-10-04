/*
ACS-102
a5_p.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n); // n = length of array

    float *arr = (float *)malloc(sizeof(float) * n); // allocate memory for n floats

    for (int i = 0; i < n; i++)
        scanf("%f", arr + i); // populate the array with keyboard input

    // start at the first address, stop at the nth address relative to first, step by 1 address
    for (float *ptr = arr; ptr < (arr + n); ++ptr)
    {
        if (*ptr < 0)                                                          // if element negative
            printf("Before the first negative value: %d elements", ptr - arr); // ptr - arr evaluates to the number of elements before the neg val
    }
    free(arr); // release the memory held by arr
    return 0;
}