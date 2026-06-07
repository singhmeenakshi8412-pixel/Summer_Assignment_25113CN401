//  Write a program to Recursive Reverse of a number.

#include <stdio.h>
int reverse(int n, int rev);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Reverse of the number :  %d", reverse(number, 0));

    return 0;
}

int reverse(int n, int rev)

{
    if (n == 0)
        return rev;

    return reverse(n / 10, rev * 10 + n % 10);

}
