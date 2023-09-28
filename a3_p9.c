/*
ACS-102
a3_p9.c
Rubin Luitel
rluitel@constructor.university
*/
#include <stdio.h>
double sum25(double v[], int n);

/*
double v[] is an array of size <=  20.
int value in n represents the number of elements in array v[]
the function returns either (v[2] + v[5]) or -111
*/
double sum25(double v[], int n)
{
    if (n <= 5)
        return -111;
    else
        return v[2] + v[5];
}

int main()
{
    int n; // to store keyboard input, n determines the number of elements in our array
    double array[20] = {0};

    // printf("How large would you like your array to be: ");
    scanf("%d", &n);

    if (n > 5 && n <= 20)
    {
        for (int i = 0; i < n; i++)
        {
            // printf("Enter a value to populate array position %d: ", i + 1);
            scanf("%lf", &array[i]);
        }
    }

    sum25(array, n) != -111 ? printf("sum=%lf\n", sum25(array, n)) : printf("One_or_both_positions_are_invalid");
    return 0;
}
