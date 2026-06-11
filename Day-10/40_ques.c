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

        for(column = 0; column < row; column++)
        {
            printf("%c", 'A' + column);
        }

        for(column = row - 2; column >= 0; column--)
        {
            printf("%c", 'A' + column);
        }

        printf("\n");
    }

    return 0;
}
