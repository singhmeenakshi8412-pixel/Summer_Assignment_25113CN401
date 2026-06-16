#include <stdio.h>

int main()
{
    int array[100], number;
    int sum = 0, expected_sum, missing;

    printf("Enter the size of array: ");
    scanf("%d", &number);

    printf("Enter elements of array: ");

    for (int i = 0; i < number - 1; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    expected_sum = number * (number + 1) / 2;


    missing = expected_sum - sum;

    
    printf("Missing number is: %d", missing);

    return 0;
}

