#include <stdio.h>
int main()
{

    int number,i,factorial=1;
    printf("enter the number:");
    scanf("%d",&number);

    for (i=1;i<=number;i++)
    {
        factorial = factorial*i;

    }

    printf("The factorial of %d is :%d",number,factorial);

    return 0;
}