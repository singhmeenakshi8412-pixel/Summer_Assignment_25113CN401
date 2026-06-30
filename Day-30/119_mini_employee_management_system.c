#include <stdio.h>

int main()
{
    int choice = 0;
    int id[10], salary[10], number = 0, i = 0;
    char name[10][100];

    while(choice != 3)
    {
        printf("\n----- EMPLOYEE MANAGEMENT SYSTEM -----\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number of Employees: ");
                scanf("%d",&number);

                i = 0;

                while(i < number)
                {
                    printf("Enter Employee ID: ");
                    scanf("%d",&id[i]);

                    printf("Enter Employee Name: ");
                    scanf("%s",name[i]);

                    printf("Enter Salary: ");
                    scanf("%d",&salary[i]);

                    i++;
                }
                break;

            case 2:
                i = 0;

                while(i < number)
                {
                    printf("\nEmployee ID = %d\n",id[i]);
                    printf("Name = %s\n",name[i]);
                    printf("Salary = %d\n",salary[i]);
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
