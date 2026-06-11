// Program to check whether a number is prime using a function 

#include <stdio.h>

int checkPrime(int num)
{
    int i;

    if(num <= 1)
        return 0;

    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(checkPrime(num))
        printf("%d is a Prime Number", num);
    else
        printf("%d is not a Prime Number", num);

    return 0;
}
