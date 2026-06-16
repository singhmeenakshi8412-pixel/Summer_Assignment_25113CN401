#include <stdio.h>

int main()
{
    int array[100], number, i, j, k;
    
    printf("Enter number of elements: ");
    scanf("%d", &number);

    printf("Enter array elements:\n");
    for(i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i = 0; i < number; i++)
    {
        for(j = i + 1; j < number;)
        {
            if(array[i] == array[j])
            {
                for(k = j; k < number - 1; k++)
                {
                    array[k] = array[k + 1];
                }
                number--;
            }
            else
            {
                j++;
            }
        }
    }

    printf("Array after removing duplicates:\n");

    for(i = 0; i < number; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
