/*
ACS-102
a3_p.c
Rubin Luitel
rluitel@constructor.university
*/
#include <stdio.h>

int position(char str[], char c)
{
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx)
        /* do nothing */
        ; /*Fix applied: I inserted a semicolon here*/

    return idx;
}
/*
In the initial program,
    in function "position", the statement "return idx" got executed inside the for loop. In fact, it got executed right after idx was initialized to 0, so the displayed value was invariably 0.
In the corrected program,
    in function "position", the for loop has been terminated with a semi-colon and "return idx" gets executed after the control exits out of the for loop. This returns the character position correctly.
*/

int main()
{
    char line[80];
    while (1)
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
}
