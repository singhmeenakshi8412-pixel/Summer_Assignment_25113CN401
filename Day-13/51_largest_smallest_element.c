#include <stdio.h>
int main()
{
    int array[100],number,i,largest,smallest;
    printf("Enter the number of elements");
    scanf("%d",&number);
    
    printf("\nEnter the elements of array");

    for (i=0; i< number;i++)
    
    {
        scanf("%d",&array[i]);
        
    }

    largest=array[0];
    smallest=array[0];

    for(i=0;i<number;i++)
    {
        
        if(array[i]<smallest)
        {
            
            smallest=array[i];
        }
        if(array[i]>largest)
        {
           largest=array[i];
        }
    }
    printf("The largest number is %d\nThe smallest number is %d",largest, smallest);
    
    return 0;

}
