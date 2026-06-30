#include <stdio.h>

int main()
{
    int choice = 0;
    int id[10], number = 0, i = 0;
    char book[10][100];

    while(choice != 3)
    {
        printf("\n----- MINI LIBRARY SYSTEM -----\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number of Books: ");
                scanf("%d",&number);

                i = 0;

                while(i < number)
                {
                    printf("Enter Book ID: ");
                    scanf("%d",&id[i]);

                    printf("Enter Book Name: ");
                    scanf("%s",book[i]);

                    i++;
                }
                break;

            case 2:
                i = 0;

                while(i < number)
                {
                    printf("\nBook ID = %d\n",id[i]);
                    printf("Book Name = %s\n",book[i]);
                    i++;
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
