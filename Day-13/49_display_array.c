#include <stdio.h>
int main()
{
    int array[100],number,i;
    printf("Enter the number of elements in array:");
    scanf("%d",&number);
    printf("Enter the elements of array");

    for (i=0;i<number;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("The array is \n");

    for (i=0;i<number;i++)
    {
        printf("%d\t",array[i]);
    }
    
    return 0;
}
 