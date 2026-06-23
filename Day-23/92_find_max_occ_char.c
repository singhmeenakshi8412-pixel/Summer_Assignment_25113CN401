#include <stdio.h>

int main()
{
    char string[100], max_char;
    int i, j, count, max_count = 0;

    printf("Enter a string: ");
    scanf("%s", string);

    for(i = 0; string[i] != '\0'; i++)
    {
        count = 0;

        for(j = 0; string[j] != '\0'; j++)
        {
            if(string[i] == string[j])
            {
                count++;
            }
        }

        if(count > max_count)
        {
            max_count = count;
            max_char = string[i];
        }
    }

    printf("Maximum Occurring Character = %c", max_char);

    return 0;
}
