#include <stdio.h>
int main()
{
    int i , j , number=5;
    for (i = number ; i >= 1 ; i--)
    {
        for (j = 1 ; j <= i ; j++ )
        {
            printf ("*");
        }
        printf("\n");
    }
    return 0;
}

