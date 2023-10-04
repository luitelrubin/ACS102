/*
ACS-102
a5_p8.c
Rubin Luitel
rluitel@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
// function prototype(s)
void populate(int **mat, int row, int col);
void display(int **mat, int row, int col);
void product(int **mat1, int **mat2, int **prod, int n, int m, int p);

// populates matrix positions with keyboard input
void populate(int **mat, int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    return;
}

// displays the value stored in each matrix position
void display(int **mat, int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return;
}

// computes and returns by reference the product of matrix multiplication
void product(int **mat1, int **mat2, int **prod, int n, int m, int p)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < p; k++)
        {
            for (int j = 0; j < m; j++)
            {
                sum += mat1[i][j] * mat2[j][k];
            }
            prod[i][k] = sum; // assign sum to appropriate position in prod
            sum = 0;          // clear the sum for next computation
        }
    }
    return;
}

int main()
{
    int n, m, p;

    // take integer inputs from the keyboard to initialize n, m and p
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);

    /*dynamically allocate memory for 3 2D matrices*/

    // allocate memory for a pointer table
    int **matA = (int **)malloc(sizeof(int *) * n); // row_size = n
    int **matB = (int **)malloc(sizeof(int *) * m); // row_size = m
    int **matC = (int **)malloc(sizeof(int *) * n); // row_size = n

    // allocate memory for the matrix elements
    for (int i = 0; i < n; ++i)
        matA[i] = (int *)malloc(sizeof(int) * m); // col_size = m
    for (int i = 0; i < m; ++i)
        matB[i] = (int *)malloc(sizeof(int) * p); // col_size = p
    for (int i = 0; i < n; ++i)
        matC[i] = (int *)malloc(sizeof(int) * p); // col_size = p

    // populate matA and matB
    populate(matA, n, m);
    populate(matB, m, p);

    // display matA and matB
    printf("Matrix A:\n");
    display(matA, n, m);
    printf("Matrix B:\n");
    display(matB, m, p);

    // multiply matA and matB and store the result in matC
    product(matA, matB, matC, n, m, p);

    // display matC
    printf("The multiplication result AxB:\n");
    display(matC, n, p);

    // release the memory allocated to matA, matB and matC
    for (int i = 0; i < n; ++i)
        free(matA[i]);
    free(matA);

    for (int i = 0; i < m; ++i)
        free(matB[i]);
    free(matB);

    for (int i = 0; i < n; ++i)
        free(matC[i]);
    free(matC);
    return 0;
}