# include <stdio.h>
int main()
{
    int number, i , product = 1 , remainder ;
    printf("enter a number :");
    scanf("%d",&number);

    while ( number != 0)
    
    {

        remainder = number % 10 ;
        product *= remainder;
        number = number / 10 ;
        
    }

    printf("The product of the digits in the given number is :%d",product);

    return 0;
}

