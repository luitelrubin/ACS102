/*
ACS-102
a5_p11.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
int isprime(int num, int d)
{
    // base cases
    if (d < 1)
        return 0; // when num is 1, and d is 0
    else if (d == 1)
        return 1; // when no integer between 1 (non-inclusive) and num/2 perfectly divides num
    else if (num % d == 0)
        return 0; // when an integer between 1 (non-inclusive) and num/2 perfectly divides num
    else
        return isprime(num, d - 1); // recursive case
}

int main()
{
    int x;
    scanf("%d", &x); // take an integer input

    printf("%d is ", x);
    isprime(x, x / 2) ? printf("prime\n") : printf("not prime\n"); // prime if the function returns 1, not prime if the function returns 0
    return 0;
}