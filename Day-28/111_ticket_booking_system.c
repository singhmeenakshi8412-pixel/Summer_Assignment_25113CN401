#include <stdio.h>

int main()
{
    int choice = 0, tickets = 0;
    float fare = 0, total = 0;
    char name[100], destination[100];

    while(choice != 3)
    {
        printf("\n----- Ticket Booking System -----\n");
        printf("1. Book Ticket\n");
        printf("2. Display Ticket\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Name: ");
                scanf("%s",name);

                printf("Enter Destination: ");
                scanf("%s",destination);

                printf("Enter Number of Tickets: ");
                scanf("%d",&tickets);

                printf("Enter Fare Per Ticket: ");
                scanf("%f",&fare);

                total = tickets * fare;
                break;

            case 2:
                printf("Passenger = %s\n",name);
                printf("Destination = %s\n",destination);
                printf("Tickets = %d\n",tickets);
                printf("Total Fare = %.2f\n",total);
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
