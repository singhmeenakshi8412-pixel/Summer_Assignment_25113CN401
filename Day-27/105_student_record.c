#include <stdio.h>

int main()
{
    int roll, marks;
    char name[50];

    printf("Student Record \n");

    printf("\nEnter name of the student: ");
    scanf("%s", name);

    printf("Enter roll number of the student: ");
    scanf("%d", &roll);

    printf("Enter marks out of 100 : ");
    scanf("%d", &marks);

    printf("\n Student Record ");
    printf("\nName: %s", name);
    printf("\nRoll Number: %d", roll);
    printf("\nMarks: %d", marks);

    if (marks >= 40)
    {
        printf("\nStudent has passed the exam");
    }
    else
    {
        printf("\nStudent has failed the exam");
    }

    return 0;
}
