#include <stdio.h>

int main()
{
    int choice = 0;
    float number1, number2, result;

    while(choice != 6)
    {
        printf("\n----- MENU DRIVEN CALCULATOR -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f%f", &number1, &number2);

                result = number1 + number2;

                printf("Result = %.2f\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f%f", &number1, &number2);

                result = number1 - number2;

                printf("Result = %.2f\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f%f", &number1, &number2);

                result = number1 * number2;

                printf("Result = %.2f\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f%f", &number1, &number2);

                if(number2 == 0)
                {
                    printf("Division by zero is not possible\n");
                }
                else
                {
                    result = number1 / number2;
                    printf("Result = %.2f\n", result);
                }
                break;

            case 5:
            {
                int a, b;

                printf("Enter two integers: ");
                scanf("%d%d", &a, &b);

                if(b == 0)
                {
                    printf("Division by zero is not possible\n");
                }
                else
                {
                    printf("Result = %d\n", a % b);
                }

                break;
            }

            case 6:
                printf("Thank You");
                break;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}
