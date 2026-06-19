#include <stdio.h>

int main()
{
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int row, column;
    int i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &row, &column);

    printf("Enter first matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("First matrix is:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Enter second matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf(" Second Matrix is:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Addition of matrices:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
