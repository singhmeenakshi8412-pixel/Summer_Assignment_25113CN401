#include <stdio.h>

int main()
{
    int array[100], number,i,j;
    int max_frequency = 0;
    int frequency_element;

    printf("Enter number of elements: ");
    scanf("%d", &number);

    printf("Enter elements of array:\n");
    for(i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i = 0; i < number; i++)
    {
        int count = 1;

        for(j = i + 1; j < number; j++)
        {
            if(array[i] == array[j])
            {
                count++;
            }
        }

        if(count > max_frequency)
        {
            max_frequency = count;
            frequency_element = array[i];
        }
    }

    printf("Maximum Frequency Element = %d", frequency_element);

    return 0;
}
