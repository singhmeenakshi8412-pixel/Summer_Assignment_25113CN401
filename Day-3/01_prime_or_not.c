//Program to find whether a number is prime or not
#include <stdio.h>

int main()
{
    
    int number, i, count =0;
    printf ("enter a number ");
    scanf("%d",& number);
    
    for (i = 2; i < number ; i ++)

    {

        if (number % i == 0)
        {
            count ++;
        }
    }
    
    if (count==0)

    {
        printf("The number is prime.");
    }
    else
    {
        printf ("The number is not prime.");
    }

    return 0;

}  


