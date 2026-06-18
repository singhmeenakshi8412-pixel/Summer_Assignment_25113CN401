#include <stdio.h>

int main()
{
    int array[100], number;
    int i, search;
    int lower, upper, middle;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &number);

    printf("Enter sorted array elements:\n");
    for(i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    lower = 0;
    upper = number - 1;

    while(lower <= upper)
    {
        middle = (lower + upper) / 2;

        if(array[middle] == search)
        {
            found = 1;
            break;
        }
        else if(search < array[middle])
        {
            upper = middle - 1;
        }
        else
        {
            lower = middle + 1;
        }
    }

    if(found)
    {
        printf("Element found at position %d", middle + 1);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}
