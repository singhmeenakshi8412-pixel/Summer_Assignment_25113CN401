#include <stdio.h>
int main ()
{
    int number , reverse_number=0 , remainder=0;
    printf("Enter a number:");
    scanf("%d",&number);

    while (number != 0)

    {
        remainder = number % 10 ;
        reverse_number = reverse_number * 10 + remainder ;
        number = number / 10 ;
    }

    printf("The reverse of the given number is: %d", reverse_number);

    if (reverse_number == number)
    {
        printf("\nThe given number is a palindrome.");
    }
    else
    {
        printf("\nThe given number is not a palindrome.");
    }
    
    return 0;
}
