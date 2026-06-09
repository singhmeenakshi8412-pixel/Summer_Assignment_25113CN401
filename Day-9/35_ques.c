#include <stdio.h>
int main()
{

    int i , j , number=5;
    char k = 'A';

    for (i = 1 ; i <= number  ; i++)
    {
       
        for (j = 1 ; j <= i ; j++ )
        {
            printf ("%c",k);
           
        }
        k++;
        printf("\n");
    }
    return 0;
}

