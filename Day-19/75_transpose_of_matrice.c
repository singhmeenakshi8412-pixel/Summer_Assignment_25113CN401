#include <stdio.h>

int main()
{
    int matrix[10][10];
    int row, column;
    int i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &row, &column);

    printf("Enter matrix:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix is:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transpose Matrix:\n");

    for(i = 0; i < column; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}

