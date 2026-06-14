#include <stdio.h>
int main()
{
    int array[100],number,i,search_value,count=0;

    printf("Enter the number of elements in array:");
    scanf("%d",&number);
    printf("\nEnter the number to be searched in array:");
    scanf("%d",&search_value);

    printf("\nEnter the elements of array");

    for (i=0;i<number;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("\nThe array is \n");

    for (i=0;i<number;i++)
    {
        printf("%d\t",array[i]);
    }

    for(i=0;i<number;i++)
    {
        if (search_value==array[i])
        {
            count++;
            break;
        }
        
    }

    if (count!=0)
    {
        printf("\nNumber is found");
    }
    else 
    {
        printf("\nNumber is not found");
    }


    
    return 0;
}
 