#include <stdio.h>

int main()
{
    int array1[100], array2[100], array3[200];
    int number1, number2;
    int i, k = 0;

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

    for(i = 0; i < number1; i++)
    {
        array3[k++] = array1[i];
    }

    for(i = 0; i < number2; i++)
    {
        array3[k++] = array2[i];
    }

    printf("Merged Array:\n");

    for(i = 0; i < k; i++)
    {
        printf("%d ", array3[i]);
    }

    return 0;
}
