#include <stdio.h>

int main()
{
    int choice = 0;
    int id = 0, quantity = 0;
    char item[100];

    while(choice != 4)
    {
        printf("\n----- INVENTORY MANAGEMENT SYSTEM -----\n");
        printf("1. Add Item\n");
        printf("2. Display Item\n");
        printf("3. Update Quantity\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Enter Item ID: ");
                scanf("%d", &id);

                printf("Enter Item Name: ");
                scanf("%s", item);

                printf("Enter Quantity: ");
                scanf("%d", &quantity);

                printf("Item Added Successfully.\n");
                break;

            case 2:

                printf("\nItem ID = %d\n", id);
                printf("Item Name = %s\n", item);
                printf("Quantity = %d\n", quantity);
                break;

            case 3:

                printf("Enter New Quantity: ");
                scanf("%d", &quantity);

                printf("Quantity Updated Successfully.\n");
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
