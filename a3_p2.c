/*
ACS-102
a3_p2.c
Rubin Luitel
rluitel@constructor.university
*/

#include <stdio.h>

int main()
{
    // declarations
    char ch;
    int n;

    printf("Enter a lowercase character: ");
    scanf("%c", &ch); // read a character from the keyboard and store it in ch's memory address

    printf("Enter a number: ");
    scanf("%d", &n); // read a number from the keyboard and store it in n's memory address

    // print the characters
    for (int i = 0; i <= n; i++)
    {
        printf("ch - %d = %c\n", i, ch - i); // output format: ch - 0 = ch
    }
    return 0;
}