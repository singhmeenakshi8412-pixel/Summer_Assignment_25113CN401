#include <stdio.h>
int main()
{
    int array[100],number,i,largest,pos;

    printf("Enter the number of elements in array:");
    scanf("%d",&number);
    printf("Enter the elements of array");

    for (i=0;i<number;i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("\nThe array is \n");

    for (i=0;i<number;i++)
    {
        printf("%d\t",array[i]);
    }

    largest=array[0];
    pos=0;

    for (i=0;i<number;i++)
    {
        if (array[i]>largest)
        {
            largest=array[i];
            pos++;

        }

    }

    printf("\nThe largest number is %d found at %d position",largest,pos+1);

    for(i=pos;i<number;i++)
    {
        array[i]=array[i+1];
    }

    array[number]=0;
    largest=array[0];

    for (i=0;i<number-1;i++)
    {
        if(array[i]>largest)
        {
            largest=array[i];
        }

    }

    printf("\nThe second largest number is %d",largest);

    return 0;
}
 