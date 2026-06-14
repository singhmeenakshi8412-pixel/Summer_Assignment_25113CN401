// Program to print Fibonacci series using a function 

#include <stdio.h>

void printFibonacci(int number)
{
    int prev_1 = 0;
    int prev_2 = 1;
    int current;
    int count;

    for(count = 1; count <= number; count++)
    {
        printf("%d \t", prev_1);

        current = prev_1 + prev_2;
        prev_1 = prev_2;
        prev_2 = current;
    }
}

int main()
{
    int number;

    printf("Enter number of terms.: ");
    scanf("%d", &number);

    printFibonacci(number);

    return 0;
}
