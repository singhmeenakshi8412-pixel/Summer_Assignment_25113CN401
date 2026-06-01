#include <stdio.h>
int main() 
{
    
    int number,i,product=0;
    printf("enter the number:");
    scanf("%d",&number);
    
    for (i=1;i<=10;i++)
    {
        product=i*number;
        printf("%d x %d = %d",number,i,product);
        printf("\n");
    }

    return 0;
}