/*
ACS-102
a5_p3.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int count_lower(char *str);

// returns the total number of lowercase characters in str
int count_lower(char *str)
{
    int countlwr = 0; // lower case characters counter

    for (char *ptr = str; *ptr != '\0'; ++ptr)
    {
        if (isalpha(*ptr)) // check if *ptr contains an alphabet
        {
            if (*ptr >= 'a' && *ptr <= 'z') // check if the aphabet is a lwr case character
            {
                ++countlwr; // if both hold true, increment the counter
            }
        }
    }
    return countlwr; // total number of lowercase characters
}
int main()
{
    char str[52]; // to accommodate '\n' and '\0' at the end of the string of length 50

    while (str[0] != '\n')
    {
        printf("Enter a string: ");                           // take keyboard input
        fgets(str, sizeof(str), stdin);                       // take string input
        printf("Lowercase letters = %d\n", count_lower(str)); // call the function and display the result
    }
    return 0;
}