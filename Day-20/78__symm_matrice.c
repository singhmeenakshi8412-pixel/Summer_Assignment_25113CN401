#include <stdio.h>

int main()
{
    int matrix[10][10];
    int row, column, i, j, flag = 1;

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

    if(row != column)
    {
        printf("Not Symmetric Matrix");
        return 0;
    }

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                flag = 0;
            }
        }
    }

    if(flag == 1)
    {
        printf("Symmetric Matrix");
    }
    else
    {
        printf("Not Symmetric Matrix");
    }

    return 0;
}
