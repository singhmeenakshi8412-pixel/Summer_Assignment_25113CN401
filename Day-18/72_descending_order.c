#include <stdio.h>

int main()
{
    int array[100], number,i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &number);

    printf("Enter array elements:\n");
    for(i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i = 0; i < number - 1; i++)
    {
        for(j = 0; j < number - i - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("\nArray in ascending order:\n");

    for(i = 0; i < number; i++)
    {
        printf("%d ", array[i]);
    }

    
    for(i = 0; i < number / 2; i++)
    {
        int temp = array[i];
        array[i] = array[number - 1 - i];
        array[number - 1 - i] = temp;

    }
   
    printf("\nThe  array in descending order is\n");

    for (i=0;i<number;i++)
    {
        printf("%d\t",array[i]);
    }
    


    return 0;
}
