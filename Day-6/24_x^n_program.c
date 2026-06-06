#include <stdio.h>
int main()
{
    int base , exponent, result , i;

    printf("enter a base number:");
    scanf("%d",&base);
    printf("enter an exponent number:");
    scanf("%d",&exponent);

    result = 1;
    for ( i = 1 ; i <= exponent ; i++)
    {
        result = result * base;

    }

    printf("%d raised to the power of %d is = %d",base,exponent,result);

    return 0;
}
