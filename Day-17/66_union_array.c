#include <stdio.h>

int main()
{
    int array1[100], array2[100], union_array[200];
    int number1, number2;
    int i, j, k = 0;
    int found;

    printf("Enter size of first array: ");
    scanf("%d", &number1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < number1; i++)
    {
        scanf("%d", &array1[i]);
        union_array[k++] = array1[i];
    }

    printf("Enter size of second array: ");
    scanf("%d", &number2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < number2; i++)
    {
        scanf("%d", &array2[i]);
    }

    for(i = 0; i < number2; i++)
    {
        found = 0;

        for(j = 0; j < k; j++)
        {
            if(array2[i] == union_array[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            union_array[k++] = array2[i];
        }
    }

    printf("Union Array:\n");

    for(i = 0; i < k; i++)
    {
        printf("%d ", union_array[i]);
    }

    return 0;
}
