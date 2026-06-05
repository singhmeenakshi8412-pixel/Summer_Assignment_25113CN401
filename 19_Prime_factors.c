// Program to find the prime factors of a number

#include <stdio.h>
int main() {
    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Prime factors of %d are: ", number);

    for (i = 2; i <= number; i++)
    {
        while (number % i == 0)
        {
            printf("%d ", i);
            number = number / i;
        }
    }

    return 0;
}
