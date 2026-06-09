#include <stdio.h>
int main()
{

    int i , j , number=5,k;

    for (i = number ; i >= 1 ; i--)
    {
        k=1;
        for (j = 1 ; j <= i ; j++ )
        {
            printf ("%d",k);
            k++;
        }
        
        printf("\n");
    }
    return 0;
}

