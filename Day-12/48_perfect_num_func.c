//Program to check perfect number using a function 

#include <stdio.h>

int checkPerfect(int number)
{
    int i;
    int sum = 0;

    for(i= 1; i< number; i++)
    {
        if(number % i == 0)
        {
            sum = sum + i;
        }
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

    if(checkPerfect(number))
        printf("%d is a Perfect Number", number);
    else
        printf("%d is not a Perfect Number.", number);

    return 0;
}
