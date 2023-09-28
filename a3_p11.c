/*
ACS-102
a3_p11.c
Rubin Luitel
rluitel@constructor.university
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char one[500];
    char two[500];

    // printf("Enter a string (spaces allowed): ");
    fgets(one, sizeof(one), stdin);
    one[strlen(one) - 1] = '\0'; // replace the trailing newline character with '\0' character

    // printf("Enter another string (spaces allowed): ");
    fgets(two, sizeof(two), stdin);
    two[strlen(two) - 1] = '\0'; // replace the trailing newline character with '\0' character

    // string length calculation
    printf("length1=%zu\n", strlen(one)); // strlen() function returns the length of strings
    printf("length2=%zu\n", strlen(two));

    // string concatenation
    char temp[500];
    strcpy(temp, one);                               // make a duplicate of string one
    printf("concatenation=%s\n", strcat(temp, two)); // concatenate temp with string two and store the resulting string in temp

    // copy the contents of two to three and print
    char three[500];
    strcpy(three, two); // strcopy copies the contents of two to three
    printf("copy=%s\n", three);

    // compare two strings two and one and print a corresponding message
    if (strcmp(one, two) < 0)
        printf("one is smaller than two\n");
    else if (strcmp(one, two) > 0)
        printf("one is larger than two\n");
    else
        printf("one is equal sized as two\n");

    // read a character from the keyboard and search for the character in two.
    // printf("Enter a character you'd like to search in string two: ");
    char c, *charptr;
    c = getchar();
    charptr = strchr(two, c);

    if (charptr - two >= strlen(two))
        printf("Character not found\n");
    else
        printf("position=%ld\n", charptr - two);
    return 0;
}