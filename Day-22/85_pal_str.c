// Write a program to Check palindrome string.

#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    int i, length, flag = 1;

    printf("Enter a string: ");
    scanf("%s", string);

    length = strlen(string);

    for (i = 0; i < length / 2; i++)
    {
        if (string[i] != string[length - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("String is palindrome");
    }
    else
    {
        printf("String is not palindrome");
    }

    return 0;
}
