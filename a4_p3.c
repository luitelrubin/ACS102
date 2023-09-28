/*
ACS-102
a4_p3.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
// function prototypes
float geometric_mean(float arr[], int num);
float highest_number(float arr[], int num);
float lowest_number(float arr[], int num);
float sum(float arr[], int num);
void display(float array[], int empty_pos);

// function definitions
float geometric_mean(float arr[], int num)
{
    float result = 1; // 1 is the neutral value for multiplication

    for (int i = 0; i < num; i++)
    {
        result *= arr[i];
    }
    result = (float)pow((double)result, (double)1 / num); // double pow(double, double) imported from math.h
    return result;
}
float highest_number(float arr[], int num)
{
    float highest = arr[0];
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > highest)
            highest = arr[i];
    }
    return highest;
}
float lowest_number(float arr[], int num)
{
    float lowest = arr[0];
    for (int i = 0; i < num; i++)
    {
        if (arr[i] < lowest)
            lowest = arr[i];
    }
    return lowest;
}
float sum(float arr[], int num)
{
    float sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    return sum;
}
void display(float array[], int num)
{
    printf("\nArray\t: [");
    for (int i = 0; i < num - 1; i++)
    {
        printf("%f, ", array[i]);
    }
    printf("%f]\n", array[num - 1]);
    return;
}
int main()
{
    float array[15];
    float member;
    int empty_pos = 0;

    printf("Enter a float value: ");
    scanf("%f", &member);

    while (member >= 0 && empty_pos < 15)
    {
        array[empty_pos] = member;
        printf("Enter a float value: ");
        scanf("%f", &member);
        ++empty_pos;
    }

    int size = empty_pos; // empty_pos = array's tail position + 1, hence can be used as array size

    char ch;
    while (getchar() != '\n')
        ;
    printf("Enter a character m/h/l/s: ");
    ch = getchar();

    // display array
    display(array, size);

    switch (ch)
    {
    case 'm':
        printf("GMean\t: %f\n", geometric_mean(array, size));
        break;
    case 'h':
        printf("Highest\t: %f\n", highest_number(array, size));
        break;
    case 'l':
        printf("Lowest\t: %f\n", lowest_number(array, size));
        break;
    case 's':
        printf("Sum\t: %f\n", sum(array, size));
        break;
    default:
        break;
    }
    return 0;
}