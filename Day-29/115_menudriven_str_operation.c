#include <stdio.h>

int main()
{
    char string[100], temp;
    int choice = 0;
    int i, length;

    while(choice != 4)
    {
        printf("\n----- MENU DRIVEN STRING OPERATION -----\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Check Palindrome\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Enter String: ");
                scanf("%s", string);

                length = 0;
                i = 0;

                while(string[i] != '\0')
                {
                    length++;
                    i++;
                }

                printf("Length = %d\n", length);
                break;

            case 2:

                printf("Enter String: ");
                scanf("%s", string);

                length = 0;
                i = 0;

                while(string[i] != '\0')
                {
                    length++;
                    i++;
                }

                i = 0;

                while(i < length / 2)
                {
                    temp = string[i];
                    string[i] = string[length - 1 - i];
                    string[length - 1 - i] = temp;
                    i++;
                }

                printf("Reverse String = %s\n", string);
                break;

            case 3:
            {
                int flag = 1;

                printf("Enter String: ");
                scanf("%s", string);

                length = 0;
                i = 0;

                while(string[i] != '\0')
                {
                    length++;
                    i++;
                }

                i = 0;

                while(i < length / 2)
                {
                    if(string[i] != string[length - 1 - i])
                    {
                        flag = 0;
                        break;
                    }

                    i++;
                }

                if(flag == 1)
                {
                    printf("Palindrome String\n");
                }
                else
                {
                    printf("Not Palindrome String\n");
                }

                break;
            }

            case 4:
                printf("Thank You");
                break;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}
