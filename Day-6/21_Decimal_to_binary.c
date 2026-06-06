#include <stdio.h>
int main ()
{
    int decimal_number , binary_number, length = 0 , temp_decimal_num, i=0,j;
     
    int array[100];
    printf("enter a decimal number:");
    scanf("%d",&decimal_number);

    temp_decimal_num = decimal_number;

   
    printf("Number of digits in decimal number is =%d",length);
    
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

    return 0;

}
