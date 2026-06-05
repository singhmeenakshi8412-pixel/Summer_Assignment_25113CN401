// Program to find the largest prime factor of a number

#include <stdio.h>
int main() {

    int number, i;
    int largest_prime_factor = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 2; i <= number; i++)
    {
        while (number % i == 0)
     {
            largest_prime_factor = i;
            number = number / i;
        }
    }

    printf("Largest Prime Factor = %d\n", largest_prime_factor);

    return 0;
}


