#include <stdio.h>
#include <math.h>
int main()
{
    int binary_number , decimal_number=0,length=0 , i=0, temp_binary_num ,remainder,term =0; 

    printf("enter a binary number: ");
    scanf("%d",&binary_number);
    
    temp_binary_num = binary_number;
    while (temp_binary_num != 0)
    {
        length ++;
        temp_binary_num= temp_binary_num/10;
    } 

    

    printf("\n Number of digits in binary number is =%d",length);
    temp_binary_num = binary_number;

    while ( temp_binary_num != 0)
    {
        remainder= temp_binary_num % 10;
        term= remainder * (int)pow(2,i);
        decimal_number += term;
        temp_binary_num = temp_binary_num / 10;
        i++ ;

    }

    printf("\n The decimal equivalent of binary number %d is = %d",binary_number,decimal_number);

    return 0;
    
    

}

