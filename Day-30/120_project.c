#include <stdio.h>

void input(int id[], char book[][100], int number);
void display(int id[], char book[][100], int number);

int main()
{
    int id[10], number;

    char book[10][100];

    printf("Enter Number of Books: ");
    scanf("%d", &number);

    input(id, book, number);

    display(id, book, number);

    return 0;
}

void input(int id[], char book[][100], int number)
{
    int i = 0;

    while(i < number)
    {
        printf("\nEnter Book ID: ");
        scanf("%d", &id[i]);

        printf("Enter Book Name: ");
        scanf("%s", book[i]);

        i++;
    }
}

void display(int id[], char book[][100], int number)
{
    int i = 0;

    printf("\n----- Library Details -----\n");

    while(i < number)
    {
        printf("\nBook ID = %d\n", id[i]);
        printf("Book Name = %s\n", book[i]);

        i++;
    }
}
