
// Write a program to Recursive factorial.
#include <stdio.h>

int factorial(int n);

int main()
{
    int nnumber;

    printf("Enter a number: ");
    scanf("%d", &nnumber);

    printf("Factorial of %d = %d\n", nnumber, factorial(nnumber));

    return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}
