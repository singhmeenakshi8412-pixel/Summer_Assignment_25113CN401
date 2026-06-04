#include <stdio.h>
int main()
{
    int prev_1=0, prev_2=1, current, number,i;
    printf("Enter the term number: ");
    scanf("%d", &number);

    if (number == 1) {
        printf("The %d term of the Fibonacci series is: %d", number, prev_1);
    } else if (number == 2) {
        printf("The %d term of the Fibonacci series is: %d", number, prev_2);
    } else {
        for (i = 3; i <= number; i++) 
        {
            current = prev_1 + prev_2;
            prev_1 = prev_2;
            prev_2 = current;
        }
        printf("The %d term of the Fibonacci series is: %d", number, current);
    }
}

