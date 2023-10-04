/*
ACS-102
a5_p7.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];

    fgets(str1, sizeof(str1), stdin); // take string input from the keyboard
    str1[strlen(str1) - 1] = '\0';    // remove trailing newline
    fgets(str2, sizeof(str2), stdin); // take string input from the keyboard
    str1[strlen(str2) - 1] = '\0';    // remove trailing newline

    char *concatenated = (char *)malloc(sizeof(char) * (strlen(str1) + strlen(str2)));
    strcpy(concatenated, str1); // copy the contents of str1 to concatenated
    strcat(concatenated, str2); // concatenate concatenate (i.e. str1) with str2

    printf("Result of concatenation: %s", concatenated);
    free(concatenated); // release allocated memory for concatenated
    return 0;
}