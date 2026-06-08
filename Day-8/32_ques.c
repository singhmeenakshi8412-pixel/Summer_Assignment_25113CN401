#include <stdio.h>
int main()
{
    int i , j , number,k=1;
    
    number= 5;

    for (i = 1; i <= number ; i++)
    {
        
        for (j = 0 ; j < i ; j++)
        {
            printf("%d",k);
            
        }
        k++;
        printf("\n");
    }

    return 0;

}

