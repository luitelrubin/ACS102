/*
CH-230-A
a2_p01.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    // declarations
    double dbl1, dbl2;
    int int1, int2, intsum, intprod;

    char ch1, ch2;
    int charsum, charprod;

    char line[1000];

    // read two doubles from keyboard
    printf("Enter a value (of double type): ");
    fgets(line, sizeof(line), stdin); // read specified number of bytes from the console
    sscanf(line, "%lf", &dbl1);       // convert the info from char to double
    printf("Enter another value (of double type): ");
    fgets(line, sizeof(line), stdin); // read specified number of bytes from the console
    sscanf(line, "%lf", &dbl2);       // convert the info from char to double

    // sum of two doubles
    printf("sum of doubles=%lf\n", dbl1 + dbl2);

    // difference of the two doubles
    printf("difference of doubles=%lf\n", dbl1 - dbl2);

    // square of the first double
    printf("square=%lf\n", dbl1 * dbl1);

    // read two integers from the keyboard
    printf("Enter a value (of int type): ");
    fgets(line, sizeof(line), stdin); // read specified number of bytes from the console
    sscanf(line, "%d", &int1);        // convert the info from char to int
    printf("Enter another value (of int type): ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &int2);

    // sum of integers
    intsum = int1 + int2;
    printf("sum of integers=%d\n", intsum);

    // product of integers
    intprod = int1 * int2;
    printf("product of integers=%d\n", intprod);

    // read chars from the keyboard
    printf("Enter a value (of char type): ");
    ch1 = getchar();

    // getchar consumes newline character
    while (getchar() != '\n')
        ;

    printf("Enter another value (of char type): ");
    ch2 = getchar();

    // sum of chars
    charsum = ch1 + ch2;
    printf("sum of chars=%d\n", charsum);

    // product of chars
    charprod = ch1 * ch2;
    printf("product of chars=%d\n", charprod);

    // sum as a char
    printf("sum of chars=%c\n", charsum);

    // prod as a char
    printf("product of chars=%c\n", charprod);
    return 0;
}