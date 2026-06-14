#include <stdio.h>
int main()
{
    int array[100],number,i ,sum=0;
    printf("Enter the number of elements in array:");
    scanf("%d",&number);
    printf("\nEnter the elements of array");

    for (i=0;i<number;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("The array is\n");
    for (i=0;i<number;i++)
    {
        printf("%d\t",array[i]);
    }

    for(i=0;i<number;i++)
    {
        sum+=array[i];
    }

    printf("\nThe sum of elemts of array is %d",sum);
    printf("\nThe average of elements of array is %d",sum/number);
    
    return 0;
}
 
