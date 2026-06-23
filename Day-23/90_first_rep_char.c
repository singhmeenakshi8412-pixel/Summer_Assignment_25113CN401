#include <stdio.h>

int main()
{
    char string[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", string);

    for(i = 0; string[i] != '\0'; i++)
    {
        for(j = i + 1; string[j] != '\0'; j++)
        {
            if(string[i] == string[j])
            {
                printf("First Repeating Character = %c", string[i]);
                return 0;
            }
        }
    }

    printf("No Repeating Character");

    return 0;
}
