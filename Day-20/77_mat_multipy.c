#include <stdio.h>

int main()
{
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int row1, column1, row2, column2, i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &row1, &column1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &row2, &column2);

    if(column1 != row2)
    {
        printf("Matrix multiplication not possible");
        return 0;
    }

    printf("Enter first matrix:\n");

    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < column1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for(i = 0; i < row2; i++)
    {
        for(j = 0; j < column2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < column2; j++)
        {
            result[i][j] = 0;

            for(k = 0; k < column1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Multiplication Matrix:\n");

    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < column2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
