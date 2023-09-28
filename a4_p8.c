/*
ACS-102
a4_p8.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
void display(int arr[][30], int size);
void undersd(int arr[][30], int size);

void display(int arr[][30], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void undersd(int arr[][30], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i + j > size - 1)
                printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
}
int main()
{
    int matrix[30][30];

    int n;

    // take number of rows from the standard input
    scanf("%d", &n);

    // populate matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // printf("Enter a value: ");
            scanf("%d", &matrix[i][j]);
        }
    }

    // outputs
    printf("The entered matrix is:\n");
    display(matrix, n);
    printf("Under the secondary diagonal:\n");
    undersd(matrix, n);
    return 0;
}