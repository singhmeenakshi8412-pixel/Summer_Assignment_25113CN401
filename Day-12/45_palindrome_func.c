//Program to check palindrome using a function 

#include <stdio.h>

int checkPalindrome(int num)
{
    int temp = num;
    int reversed_num = 0;
    int remainder;

    while(temp > 0)
    {
        remainder = temp % 10;
        reversed_num = reversed_num * 10 + remainder;
        temp = temp / 10;
    }

    if(reversed_num == num)
        return 1;
    else
        return 0;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(checkPalindrome(number))
        printf("%d is a Palindrome Number", number);
    else
        printf("%d is not a Palindrome Number", number);

    return 0;
}
