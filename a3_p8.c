/*
ACS-102
a3_p8.c
Rubin Luitel
rluitel@constructor.university
*/
#include <stdio.h>
// function prototypes
float sum(float arr[], int size);
float average(float arr[], int size);

/*
arr[] is the array of floats,
size represents the total number of elements in the array,
the function sum computes and returns the sum of elements in arr
*/
float sum(float arr[], int size) // expects an array and the index upto which it has values
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

/*
arr[] is an array of floats,
size represents the total number of elements in the array,
average computes and returns the average from all elements in arr
*/
float average(float arr[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

int main()
{
    float array[10]; // array that stores a maximum of ten float values
    float input;     // stores input from the keyboard
    int nextpos = 0; // array position which is available for storing value

    printf("Enter a float value: ");
    scanf("%f", &input); // assign this value to the array only after checking it isn't -99.0
    // printf("now pointing to => %d \n", nextpos);

    while (input != -99.0 && nextpos < 10) // keep taking inputs until -99.0 is entered
    {
        array[nextpos] = input;
        // printf("In pos %d goes %f.\n\n", nextpos, array[nextpos]);
        printf("Enter a float value: ");
        scanf("%f", &input); // assign this value to the array only after checking it isn't -99.0
        ++nextpos;           // increment to next empty position
        // printf("now pointing to => %d \n", nextpos);
    }

    // print array
    printf("\nArray\t: [");
    for (int i = 0; i < nextpos - 1; i++)
    {
        printf("%f, ", array[i]);
    }
    printf("%f]\n", array[nextpos - 1]);
    printf("Sum\t: %f\n", sum(array, nextpos));     // call sum function
    printf("Avg\t: %f\n", average(array, nextpos)); // call average function

    return 0;
}