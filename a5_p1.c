/*
ACS-102
a5_p1.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
void show_triangle(int n, char ch);

void show_triangle(int n, char ch)
{
    int jstop = n; // inner loop stops at jstop
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < jstop; ++j)
        {
            printf("%c", ch);
        }
        printf("\n");
        --jstop; // decrease character count in the next line
    }
}
int main()
{
    int n;
    char c;

    // take user input
    scanf("%d", &n);
    while (getchar() != '\n') // clear the input buffer
        ;
    c = getchar();

    // call the function
    show_triangle(n, c);
    return 0;
}