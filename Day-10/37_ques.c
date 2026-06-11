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

        for(column = 1; column <= (2 * row - 1); column++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

