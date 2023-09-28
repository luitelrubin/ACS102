/*
ACS-102
a4_p4.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int count_consonants(char str[]);

int count_consonants(char str[])
{
    int vowels[] = {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0};
    int cons_count = 0;

    int charnum;
    for (int i = 0; i < strlen(str); i++)
    {
        charnum = tolower(str[i]) - 'a'; // charnum is 0 for a and 25 for z

        if (charnum >= 0 && charnum < 26)
        {
            if (vowels[charnum] == 0)
                ++cons_count;
        }
    }
    return cons_count;
}

int main()
{
    char line[1000];
    fgets(line, sizeof(line), stdin);

    while (line[0] != '\n')
    {
        printf("Number of consonants=%d\n", count_consonants(line));
        fgets(line, sizeof(line), stdin);
    }
    return 0;
}