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
    char stop[] = "stop";
    char replacethis, withthis;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    while (strcmp(stop, str) != 0)
    {

        printf("Enter a character to be replaced: ");
        replacethis = getchar();
        while (getchar() != '\n')
            ;
        printf("Enter the replacing character: ");
        withthis = getchar();
        while (getchar() != '\n')
            ;
        replaceAll(str, replacethis, withthis);
        printf("%s\n", str);

        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);
        str[strlen(str) - 1] = '\0';
    }
    return 0;
}