//Program to find the maximum of two numbers using a function 

#include <stdio.h>

int findMaximum(int num_1, int num_2)
{
    if(num_1 > num_2)
        return num_1;
    else
        return num_2;
}

int main()
{
    int num_1,num_2,maximum;
    
    printf("Enter first number: ");
    scanf("%d", &num_1);

    printf("Enter second number: ");
    scanf("%d", &num_2);

    maximum = findMaximum(num_1, num_2);

    printf("Maximum = %d", maximum);

    return 0;
}
