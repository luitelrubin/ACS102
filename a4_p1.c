/*
ACS-102
a4_p1.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    double lower, step, upper;
    double pie = 3.141592667; // value of pie is causing errors

    printf("Enter lower limit: ");
    scanf("%lf", &lower);
    printf("Enter upper limit: ");
    scanf("%lf", &upper);
    printf("Enter step size: ");
    scanf("%lf", &step);

    for (lower = lower; lower <= upper; lower += step)
    {
        printf("%lf %lf %lf\n", lower, pie * lower * lower, 2 * pie * lower);
        /*
            radius of circle = lower
            area of circle = 22/7 * lower^2
            perimeter of circle = 2 * 22/7 * lower
        */
    }
    return 0;
}