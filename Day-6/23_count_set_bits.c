#include <stdio.h>
int main ()
{
    int decimal_number , binary_number, length = 0 , temp_decimal_num, i=0,j,count = 0;
     
    int array[100];
    printf("enter a decimal number:");
    scanf("%d",&decimal_number);

    temp_decimal_num = decimal_number;
    
    
    while (decimal_number != 0 )
    {
        array[i] = decimal_number % 2;
        decimal_number = decimal_number / 2;
        i++ ;

    }

    printf("\n The binary equivalent of decimal number %d is = ",temp_decimal_num);

    for ( j = i-1 ; j >= 0 ; j--)
    {
        printf("%d",array[j]);
    }

    for ( j = 0 ; j < i ; j++)
    {
        if (array[j]%2==1)
        {
            count++;
        }
    }
    printf("\n The number of set bits in the binary representation is %d",  count);

    return 0;

}
