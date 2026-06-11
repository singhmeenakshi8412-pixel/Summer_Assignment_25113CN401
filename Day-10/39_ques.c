#include <stdio.h>

int main()
{
    int row, column;

    for(row = 1; row <= 5; row++)
    {
        for(column = 1; column <= 5 - row; column++)
        {
            printf(" ");
        }

        for(column = 1; column <= row; column++)
        {
            printf("%d", column);
        }

        for(column = row - 1; column >= 1; column--)
        {
            printf("%d", column);
        }

        printf("\n");
    }

    return 0;
}
