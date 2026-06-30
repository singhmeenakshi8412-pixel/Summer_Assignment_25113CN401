#include <stdio.h>

int main()
{
    int choice = 0, id = 0;
    char book[100];

    while(choice != 3)
    {
        printf("\n----- Library Management System -----\n");
        printf("1. Add Book\n");
        printf("2. Display Book\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d",&id);

                printf("Enter Book Name: ");
                scanf("%s",book);

                printf("Book Added Successfully.\n");
                break;

            case 2:
                if(id == 0)
                {
                    printf("No Book Available.\n");
                }
                else
                {
                    printf("Book ID = %d\n",id);
                    printf("Book Name = %s\n",book);
                }
                break;

            case 3:
                printf("Thank You");
                break;

            default:
                printf("Invalid Choice");
        }
    }

    return 0;
}
