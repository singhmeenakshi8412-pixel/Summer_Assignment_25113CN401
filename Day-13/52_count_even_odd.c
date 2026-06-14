#include <stdio.h>
int main()
{
    int array[100],number,i ,even=0,odd=0;
    printf("Enter the number of elements in array:");
    scanf("%d",&number);
    printf("\nEnter the elements of array");

    for (i=0;i<number;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("\nThe array is\n");

    for (i=0;i<number;i++)
    {
        printf("%d\t",array[i]);
    }

    for (i=0;i<number;i++)
    {
        if (array[i]%2==0)
        {
            even++;
        }
        else 
        {
            odd++;
        }
    }
    
    printf("\nThe number of even numbers are %d\nThe number of odd numbers are %d",even,odd);
    
    return 0;
}
 