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

    for(j = 0; j < column; j++)
    {
        sum = 0;

        for(i = 0; i < row; i++)
        {
            sum += matrix[i][j];
        }

        printf("Sum of Column %d = %d\n", j + 1, sum);
    }

    return 0;
}
