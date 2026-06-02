#include <stdio.h>
int main()
{
    int number, i , sum = 0 , remainder ;
    printf("enter a number :");
    scanf("%d",&number);

    while ( number != 0)
    {

        remainder = number % 10 ;
        sum += remainder;
        number = number / 10 ;
        
    }

    printf("The sum of the digits in the given number is :%d",sum);

    return 0;
    
}