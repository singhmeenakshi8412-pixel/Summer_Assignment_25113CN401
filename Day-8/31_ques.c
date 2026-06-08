#include <stdio.h>
int main()
{
    int i , j , number;
    char k ;

    number = 5 ;
    
    for (i = 0; i <= number ; i++)
    {
        k='A';
        for (j = 0 ; j < i ; j++)
        {
            printf("%c",k);
            k++;
        }
        printf("\n");
    }

    return 0;

}

