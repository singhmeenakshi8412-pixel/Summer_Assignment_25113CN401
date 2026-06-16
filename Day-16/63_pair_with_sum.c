#include <stdio.h>

int main()
{
    int array[100], number;
    int sum;
    int i, j;

    printf("Enter number of elements: ");
    scanf("%d", &number);

    printf("Enter array elements:\n");
    for(i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < number; i++)
    {
        for(j = i + 1; j < number; j++)
        {
            if(array[i] + array[j] == sum)
            {
                printf("Pair = %d %d", array[i], array[j]);
            }
        }
    }

    return 0;
}
