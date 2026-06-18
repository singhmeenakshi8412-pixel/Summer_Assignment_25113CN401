#include <stdio.h>

int main()
{
    int array1[100], array2[100];
    int number1, number2;
    int i, j;

    printf("Enter size of first array: ");
    scanf("%d", &number1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < number1; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &number2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < number2; i++)
    {
        scanf("%d", &array2[i]);
    }

    printf("Intersection Elements:\n");

    for(i = 0; i < number1; i++)
    {
        for(j = 0; j < number2; j++)
        {
            if(array1[i] == array2[j])
            {
                printf("%d ", array1[i]);
                break;
            }
        }
    }

    return 0;
}
