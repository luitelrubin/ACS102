/*
ACS-102
a4_p1.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
int main()
{
    double lower, step, upper;
    double pi = M_PI; // M_PI imported from math.h library works as pi

    // printf("Enter lower limit: ");
    scanf("%lf", &lower);
    // printf("Enter upper limit: ");
    scanf("%lf", &upper);
    // printf("Enter step size: ");
    scanf("%lf", &step);

    /* --------------------------------------------------------------
    -    Start for loop at lower limit                              -
    -    Stop for loop when upper limit is reached (inclusive)      -
    -    Step for loop by 'step'                                    -
    -----------------------------------------------------------------*/
    for (float lwr = lower; lwr <= upper; lwr += step)
    {
        // display (radius i.e. lwr, area of circle, perimtetr of circle)
        printf("%lf %lf %lf\n", lwr, pi * lwr * lwr, 2 * pi * lwr);
    }
    return 0;
}