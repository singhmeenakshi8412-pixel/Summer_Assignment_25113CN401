// Program to print prime numbers in a given range.
#include <stdio.h>

int main()
{
    
    int lower_range, upper_range, i,j, count;

    printf ("enter lower range ");
    scanf("%d",& lower_range);
    
    printf ("enter upper range ");
    scanf("%d",& upper_range);
    
    for (j = lower_range; j <= upper_range; j ++)
    {

        count = 0;

        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                count++;
            }
        }

        if (count == 0)
        {
            printf ("%d",j);
            printf("\n");
        }
        
        
    }
    
    return 0;
}
