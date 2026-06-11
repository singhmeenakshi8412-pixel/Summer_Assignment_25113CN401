//Program to find factorial using a function 

#include <stdio.h>

int findFactorial(int num)
{
    int i,factorial = 1;
    
    for(i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}

int main()
{
    int num;
    int factorial;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial = findFactorial(num);

    printf("Factorial = %d", factorial);

    return 0;
}
