#include <stdio.h>
#include <math.h>

int main()
{
    int i, lower_range, upper_range;
    int length, remainder, sum, count = 0;
    int temp_number, term;

    printf("Enter the lower range: ");
    scanf("%d", &lower_range);

    printf("Enter the upper range: ");
    scanf("%d", &upper_range);

    for (i = lower_range; i <= upper_range; i++)
    {
        temp_number = i;
        length = 0;
        sum = 0;

        if (temp_number == 0)
            length = 1;

        while (temp_number != 0)
        {
            length++;
            temp_number /= 10;
        }

        temp_number = i;

        while (temp_number != 0)
        {
            remainder = temp_number % 10;
            term = (int)pow(remainder, length);
            sum += term;
            temp_number /= 10;
        }

        if (sum == i)
        {
            printf("%d\n", i);
            count++;
        }
    }

    if (count == 0)
    {
        printf("No Armstrong number in the given range");
    }

    return 0;
}
