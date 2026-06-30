#include <stdio.h>

int main()
{
    int choice = 0;
    char name[100];
    long long mobile = 0;

    while(choice != 3)
    {
        printf("\n----- Contact Management System -----\n");
        printf("1. Add Contact\n");
        printf("2. Display Contact\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Name: ");
                scanf("%s",name);

                printf("Enter Mobile Number: ");
                scanf("%lld",&mobile);
                break;

            case 2:
                printf("Name = %s\n",name);
                printf("Mobile = %lld\n",mobile);
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
