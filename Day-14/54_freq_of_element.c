#include <stdio.h>
int main()
{
    int array[100],number,i,count=0,search_value;

    printf("Enter the number of elements in array:");
    scanf("%d",&number);
    printf("\nEnter the element to be searched in array:");
    scanf("%d",&search_value);

    printf("\nEnter the elements of array");

    for (i=0;i<number;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("The array is \n");

    for (i=0;i<number;i++)
    {
        printf("%d\t",array[i]);
    }

    for(i=0;i<number;i++)
    {
        if (search_value==array[i])
        {
            count++;
            
        }
        
    }
    
    printf("\nThe frequnecy of element is %d ",count);


    
    return 0;
}
 