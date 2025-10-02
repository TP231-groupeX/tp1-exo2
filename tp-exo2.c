// Note me 00//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100

int matrixA[MAX][MAX], matrixB[MAX][MAX], matrixC[MAX][MAX];
int rowA, columnA, rowB, columnB;
int i, j, k;

void ReadMatrixSize(char matrixName, int rows, int columns)
{
    printf("Enter the number of columns for matrix %c: ", matrixName);
    scanf("%d", &columns);
    while (columns < 1 || columns > MAX || columns % 1 != 0)
    {
        printf("Invalid input. Please enter a number between 1 and %d: ", MAX);
        scanf("%d", &columns);
    }

    printf("Enter the number of rows for matrix %c: ", matrixName);
    scanf("%d", &rows);
    while (rows < 1 || rows > MAX || rows % 1 != 0)
    {
        printf("Invalid input. Please enter a number between 1 and %d: ", MAX);
        scanf("%d", &rows);
    }

    if (matrixName == 'A')
    {
        rowA = rows;
        columnA = columns;
    }
    else if (matrixName == 'B')
    {
        rowB = rows;
        columnB = columns;
    }
    return;
}

int main ()
{
    // Read sizes of matrices
    ReadMatrixSize('A', rowA, columnA);
    ReadMatrixSize('B', rowB, columnB);

    // Check compatibility
    if (columnA != rowB)
    {
        printf("Product not possible. Columns of A must equal rows of B.\n");
        return 1;
    }

    // Read elements of matrix A
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnA; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);
        }
    }

    
    // Verify number of elements entered for matrix A
    int countA = 0;
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnA; j++)
        {
            countA++;
        }
    }
    if (countA != rowA * columnA)
    {
        printf("Error: Number of elements entered for Matrix A does not match its declared size (%d x %d = %d).\n", rowA, columnA, rowA * columnA);
        return 1;
    }


    // Read elements of matrix B
    printf("Enter elements of matrix B:\n");   
    for (int i = 0; i < rowB; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Verify number of elements entered for matrix B
    int countB = 0;
    for (int i = 0; i < rowB; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            countB++;
        }
    }
    if (countB != rowB * columnB)
    {
        printf("Error: Number of elements entered for Matrix B does not match its declared size (%d x %d = %d).\n", rowB, columnB, rowB * columnB);
        return 1;
    }

    // Multiply matrices A and B and store it in C
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            matrixC[i][j] = 0;
            for (int k = 0; k < columnA; k++)
            {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Display the result
    printf("The resultant Matrix C=(A * B):\n");    
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }
    return 0;
}

