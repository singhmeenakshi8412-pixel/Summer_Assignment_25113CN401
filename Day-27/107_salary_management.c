#include <stdio.h>
int main()
{
    int emp_id;
    float salary, bonus, tax, total_salary;
    char name[100];

    printf("Salary Management System\n");

    printf("\nEnter name of the  employee : ");
    scanf("%s", name);

    printf("Enter employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter  salary: ");
    scanf("%f", &salary);

    printf("Enter bonus amount: ");
    scanf("%f", &bonus);

    printf("Enter tax amount: ");
    scanf("%f", &tax);


    net_salary = salary + bonus - tax;


    printf("\n   Salary Details   ");
    printf("\nEmployee Name: %s", name);
    printf("\nEmployee ID: %d", emp_id);
    printf("\nBasic Salary: %.2f", salary);
    printf("\nBonus: %.2f", bonus);
    printf("\nTax: %.2f", tax);
    printf("\nNet Salary: %.2f", total_salary);


    if (total_salary >= 50000)
    {
        printf("\nSalary Category: High");
    }
    else
    {
        printf("\nSalary Category: Normal");
    }

    return 0;
}
