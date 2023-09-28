/*
ACS-102
a3_p7.c
Rubin Luitel
rluitel@constructor.university
*/
#include <stdio.h>
void print_form(int n, int m, char c); // function declaration

/*
This function:
=> expects two integers n and m
=> expects one character c
=> prints n lines of characters c; the character count is m in the first line then it increases by 1 as we print each subsequent line
=> stops when the number of characters printed on a line = m*n-1.
*/
void print_form(int n, int m, char c) // function definition
{
    int mdup = m;             // we'll be modifying m later on so making a duplicate seemed like a good idea
    while (m <= mdup + n - 1) // for our testcase, if m <= 4*3-1 let it run. Otherwise, stop.
    {
        for (int j = 0; j < m; j++)
        {
            printf("%c", c);
        }
        m += 1; // print one more character in the next iteration

        printf("\n");
    }
}

int main()
{
    int n, m;
    char c;

    printf("Enter an integer to initialize n: ");
    scanf("%d", &n);
    printf("Enter an integer to initialize m: ");
    scanf("%d", &m);

    while (getchar() != '\n')
        ;

    printf("Enter a character to initialize c: ");
    c = getchar();
    print_form(n, m, c);

    return 0;
}