#include <stdio.h>
int main()
{
    int i , j , number, k;

    number = 5;

    for (i = 0; i <= number ; i++)
    {
        k=1;
        for (j = 0 ; j < i ; j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }

    return 0;

}
