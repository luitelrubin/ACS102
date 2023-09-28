/*
ACS-102
a3_p5.c
Rubin Luitel
rluitel@constructor.university
*/
#include <stdio.h>
// function prototypes
double sum_temps(double *temperature, int size);
void display_temps(double *temperature, int size);
void display_degF(double *temperature, int size);
double avg_temps(double *temperature, int size);


double sum_temps(double *temperature, int size)
{
    double sum = 0; // declare and initialize sum
    for (int i = 0; i < size; i++)
    {
        sum += *(temperature + i); // (temperature + i) gives an address, *(temperature + i) gives a corresponding value
    }
    return sum;
}

void display_temps(double *temperature, int size)
{
    printf("Temperature list in deg C:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%lf, ", *(temperature + i));
    }
}

void display_degF(double *temperature, int size)
{
    printf("Temperatures in deg F: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%lf, ", (double)9 / 5 * (*(temperature + i)) + 32); // convert from deg C to deg F and print the temperature list
    }
}

double avg_temps(double *temperature, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(temperature + i); // calculate sum of all temperatures
    }
    return (double)sum / size; // averature temperature calculated and result type-casted to double to preserve decimal values
}

int main()
{
    // declarations
    char c; // the character stored in c will be used to choose an operation
    int n;

    printf("Enter a character: ");
    scanf("%c", &c); // take a character from the keyboard and store it in c's memory address
    printf("Enter a number: ");
    scanf("%d", &n); // take an integer from the keyboard and store it in n's memory address

    int size = n;            // size of temperature array
    double temperature[100]; // declaration

    // populate array
    for (int i = 0; i < size; i++)
    {
        printf("Enter temperature %d in deg C: ", i + 1);
        scanf("%lf", &temperature[i]);
    }

    // use switch statement to select an operation to carry out
    // operation selected according to the character stored in c
    switch (c)
    {
        /*Note: in all function calls, a reference to temperature array has been passed*/
    case 's':
        printf("Sum of all temperatures: %lf", sum_temps(temperature, size)); // sum_temps adds all temperatures and returns a result
        break;
    case 'p':
        display_temps(temperature, size); // display_temps displays a list of temperatures in degree Celsius
        break;
    case 't':
        display_degF(temperature, size); // display_degF displays a list of temperatures in degree Fahrenheit
        break;
    default:
        printf("Arithmetic mean of all temperatures: %lf", avg_temps(temperature, size)); // avg_temps calculates an average of all temperatures and returns a result
        break;
    }

    return 0;
}
