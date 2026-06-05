// Program to check if a number is a strong number or not

#include <stdio.h>
int main()
{
    int number, sum=0, fact=1, remainder, temp_number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    
    temp_number = number;
    while (temp_number !=0)
    {
        fact=1;
    
        remainder = temp_number % 10 ;
        for (i = 1; i <= remainder; i++)
        {
            fact *= i;
        }
        sum += fact;
        temp_number = temp_number / 10 ;
    
    }
    if (sum == number)
    {
        printf("%d is a strong number",number);
    }
    else
    {
        printf("%d is not a strong number",number);
    }

    return 0;
}   

