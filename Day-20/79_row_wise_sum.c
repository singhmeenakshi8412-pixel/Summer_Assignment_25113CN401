#include <stdio.h>

int main()
{
    int matrix[10][10];
    int row, column, i, j, sum;

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

    for(i = 0; i < row; i++)
    {
        sum = 0;

        for(j = 0; j < column; j++)
        {
            sum += matrix[i][j];
        }

        printf("Sum of Row %d = %d\n", i + 1, sum);
    }

    return 0;
}
