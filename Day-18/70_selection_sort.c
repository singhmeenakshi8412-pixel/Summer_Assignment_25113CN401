#include <stdio.h>

int main()
{
    int array[100], number, i, j, temp, min_index;

    printf("Enter number of elements: ");
    scanf("%d", &number);

    printf("Enter array elements:\n");
    for(i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i = 0; i < number - 1; i++)
    {
        min_index = i;

        for(j = i + 1; j < number; j++)
        {
            if(array[j] < array[min_index])
            {
                min_index = j;
            }
        }

        temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }

    printf("\nSorted Array:\n");

    for(i = 0; i < number; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
