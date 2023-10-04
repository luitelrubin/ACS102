/*
ACS-102
a4_p12.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
void replaceAll(char *str, char c, char e);

void replaceAll(char *str, char c, char e)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            str[i] = e;
        }
    }
    return;
}
int main()
{
    char str[80];
    const char stop[] = "stop"; // for ease of use
    char replacethis, withthis;

    // take keyboard input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; // removing trailing newline

    while (strcmp(stop, str) != 0) // check if the keyboard input is "stop"
    {

        printf("Enter a character to be replaced: ");
        replacethis = getchar();
        while (getchar() != '\n') // clear input buffer
            ;
        printf("Enter the replacing character: ");
        withthis = getchar();
        while (getchar() != '\n') // clear input buffer
            ;
        replaceAll(str, replacethis, withthis);
        printf("%s\n", str);

        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin); // this string will be checked with the exit condition
        str[strlen(str) - 1] = '\0';    // removing trailing newline
    }
    return 0;
}