/*
ACS-102
a4_p11.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int count_insensitive(char *str, char c);

int count_insensitive(char *str, char c)
{
    int count = 0;
    c = tolower(c);
    for (int i = 0; i < strlen(str); i++)
    {
        if (c == tolower(str[i]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    // dynamically allocate a string of maximal length of 50 characters
    int numchars = 50;
    char *str = (char *)malloc(sizeof(char) * numchars);

    // read a string from the keyboard
    printf("Enter a string: \n");
    fgets(str, numchars, stdin);

    // allocate memory for another string of the correct size
    char *strnew = (char *)malloc(sizeof(char) * strlen(str));

    // copy the original string into the new string
    strcpy(strnew, str);

    // deallocate the memory occupied by the first string
    free(str);

    // check the occurrence of these characters in strnew using the count_insensitive function
    char chlist[] = {'b', 'H', '8', 'u', '$'};

    for (int i = 0; i < sizeof(chlist); i++)
    {
        printf("The character '%c' occurs %d times.\n", chlist[i], count_insensitive(strnew, chlist[i]));
    }

    // deallocate the memory occupied by the second string
    free(strnew);
    return 0;
}