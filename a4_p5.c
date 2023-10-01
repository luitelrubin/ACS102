/*
ACS-102
a4_p5.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_consonants(char str[]);

int count_consonants(char str[])
{
    int vowels[] = {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0}; // positions of a,e,i,o,u are 1
    int cons_count = 0;

    int charnum;
    char *ptr;

    /*start from str's first element's address, stop at str's last element: '\0', step by 1 address.*/
    for (ptr = str; *ptr != '\0'; ptr++)
    {
        charnum = tolower(*ptr) - 'a'; // charnum is 0 for a and 25 for z

        if (charnum >= 0 && charnum < 26)
        {
            if (vowels[charnum] == 0)
                ++cons_count; // if a lowercase letter isn't a vowel, it is a consonant
        }
    }
    return cons_count;
}

int main()
{
    char line[1000];
    fgets(line, sizeof(line), stdin); // take keyboard input

    while (line[0] != '\n') // stop when keyboard input is just the enter key
    {
        printf("Number of consonants=%d\n", count_consonants(line));
        fgets(line, sizeof(line), stdin);
    }
    return 0;
}