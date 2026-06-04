// Check whether a number is an Armstrong number or not
#include <stdio.h>
#include <math.h>
int main()
{
    int number, length=0,remainder, sum=0, temp_number,term;

    printf ("enter the number:");
    scanf("%d",&number);

    temp_number=number;

    if (temp_number==0)
    {
        length=1;
    }
    while ( temp_number !=0)
    {
        length++;
        temp_number=temp_number/10;
    }
    printf("length of the number is %d \n",length);

    temp_number=number;
    while (temp_number!=0)
    {
        remainder=temp_number%10;
        term=(int) pow(remainder,length);
        sum+=term;
        temp_number=temp_number/10;
    }
    printf("sum of individual terms is %d \n",sum);

    if (sum==number)
    {
        printf("number is armstrong");
    }
    else 
    {
        printf("number is not Armstrong ");
    }
    
    return 0;
}
