#include <stdio.h>

int main()
{
    char string1[100], string2[100];
    int i, j, length1 = 0, length2 = 0, flag = 1;
    char temp;

    printf("Enter first string: ");
    scanf("%s", string1);

    printf("Enter second string: ");
    scanf("%s", string2);

    for(i = 0; string1[i] != '\0'; i++)
    {
        length1++;
    }

    for(i = 0; string2[i] != '\0'; i++)
    {
        length2++;
    }

    if(length1 != length2)
    {
        printf("Not Anagram");
        return 0;
    }

    for(i = 0; i < length1 - 1; i++)
    {
        for(j = i + 1; j < length1; j++)
        {
            if(string1[i] > string1[j])
            {
                temp = string1[i];
                string1[i] = string1[j];
                string1[j] = temp;
            }

            if(string2[i] > string2[j])
            {
                temp = string2[i];
                string2[i] = string2[j];
                string2[j] = temp;
            }
        }
    }

    for(i = 0; i < length1; i++)
    {
        if(string1[i] != string2[i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("Anagram Strings");
    }
    else
    {
        printf("Not Anagram");
    }

    return 0;
}
