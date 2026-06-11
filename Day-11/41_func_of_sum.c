//Program to find the sum of two numbers using a function 

#include <stdio.h>

int findSum(int num_1, int num_2)
{
    return num_1 + num_2;
}

int main()
{
    int num_1, num_2,sum ;
    
    printf("Enter first number: ");
    scanf("%d", &num_1);

    printf("Enter second number: ");
    scanf("%d", &num_2);

    sum = findSum(num_1, num_2);

    printf("Sum = %d", sum);

    return 0;
}
