//Program to check Armstrong number using a function 

#include <stdio.h>

int checkArmstrong(int number)
{
    int temp = number;
    int remainder;
    int sum = 0;

    while(temp > 0)
    {
        remainder = temp % 10;
        sum = sum + (remainder * remainder * remainder);
        temp = temp / 10;
    }

    if(sum == number)
        return 1;
    else
        return 0;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(checkArmstrong(number))
        printf("%d is an Armstrong Number", number);
    else
        printf("%d is not an Armstrong Number", number);

    return 0;
}

