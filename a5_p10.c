/*
ACS-102
a5_p10.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
void print_nums(int num);
void print_nums(int num)
{
    if (num == 1)
    {
        // base case
        printf("%d.", 1); // print 1 and a period
    }
    else
    {
        // recursive case
        printf("%d, ", num); // print current number and a comma
        print_nums(num - 1); // call the function
    }
    return; // for aesthetic reasons
}
int main()
{
    int n;

    // read an integer from the keyboard
    printf("Enter an integer: ");
    scanf("%d", &n);

    print_nums(n); // call the function
    return 0;
}