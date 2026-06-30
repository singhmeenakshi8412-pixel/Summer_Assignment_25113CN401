#include <stdio.h>

int main()
{
    int choice = 0, account = 0;
    float balance = 0, amount;
    char name[100];

    while(choice != 4)
    {
        printf("\n----- Bank Account System -----\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Display Account\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d",&account);

                printf("Enter Name: ");
                scanf("%s",name);

                printf("Enter Balance: ");
                scanf("%f",&balance);
                break;

            case 2:
                printf("Enter Deposit Amount: ");
                scanf("%f",&amount);

                balance = balance + amount;
                break;

            case 3:
                printf("Account Number = %d\n",account);
                printf("Name = %s\n",name);
                printf("Balance = %.2f\n",balance);
                break;

            case 4:
                printf("Thank You");
                break;

            default:
                printf("Invalid Choice");
        }
    }

    return 0;
}
