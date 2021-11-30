// Program to find Transpose of a given matrix
#include<stdio.h>

void transpose(int c, int r, int m[r][c])
{
    int transposeMatrix[r][c], i, j, x, y;

    for (i = 0, x = 0; i < r; i++)
    {
        for (j = 0, y =; j < c; j++)
            transposeMatrix[i][j] = m[j][i]; 
    }// for

    // printing the transpose now.
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d ", transposeMatrix[i][j]);
        printf("\n");
    }// for    
} // transpose
int main()
{
    int rows, cols, i, j;
    printf("Enter the order of matrix OR rows and columns resp.: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // taking input from user. 
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            printf("\nEnter A%d%d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]); 
        } // for
    
    printf("\nThe representation of given matrix is:\n");
    // printing the matrix.
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }// for
    
    printf("\nTranspose of the given Matrix is:\n");
    transpose(rows, cols, matrix);
} // main