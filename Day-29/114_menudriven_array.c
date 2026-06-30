#include <stdio.h>

int main()
{
    int array[100];
    int number = 0, choice = 0;
    int i, element;

    while(choice != 4)
    {
        printf("\n----- MENU DRIVEN ARRAY OPERATION -----\n");
        printf("1. Enter Array\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Size: ");
                scanf("%d", &number);

                i = 0;

                while(i < number)
                {
                    printf("Enter Element %d: ", i + 1);
                    scanf("%d", &array[i]);
                    i++;
                }

                break;

            case 2:
                printf("Array Elements:\n");

                i = 0;

                while(i < number)
                {
                    printf("%d ", array[i]);
                    i++;
                }

                printf("\n");
                break;

            case 3:
                printf("Enter Element to Search: ");
                scanf("%d", &element);

                i = 0;

                while(i < number)
                {
                    if(array[i] == element)
                    {
                        printf("Element Found at Position %d\n", i + 1);
                        break;
                    }

                    i++;
                }

                if(i == number)
                {
                    printf("Element Not Found\n");
                }

                break;

            case 4:
                printf("Thank You");
                break;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}
