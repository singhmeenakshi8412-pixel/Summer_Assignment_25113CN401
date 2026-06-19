#include <stdio.h>

int main()
{
    int matrix[10][10];
    int row, column, i, j, sum = 0;

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

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            if(i == j)
            {
                sum += matrix[i][j];
            }
        }
    }

    printf("Diagonal Sum = %d", sum);

    return 0;
}
