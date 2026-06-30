#include <stdio.h>

int main()
{
    int choice = 0;
    int roll[10], marks[10], number = 0, i = 0;
    char name[10][100];

    while(choice != 3)
    {
        printf("\n----- STUDENT RECORD SYSTEM -----\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number of Students: ");
                scanf("%d",&number);

                i = 0;

                while(i < number)
                {
                    printf("Enter Roll Number: ");
                    scanf("%d",&roll[i]);

                    printf("Enter Name: ");
                    scanf("%s",name[i]);

                    printf("Enter Marks: ");
                    scanf("%d",&marks[i]);

                    i++;
                }
                break;

            case 2:
                i = 0;

                while(i < number)
                {
                    printf("\nRoll = %d\n",roll[i]);
                    printf("Name = %s\n",name[i]);
                    printf("Marks = %d\n",marks[i]);
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
