// Program to find HCF of two numbers.
#include <stdio.h>

int main() {

    int num_1, num_2, i, hcf;


    printf("Enter two numbers: ");
    scanf("%d %d", &num_1, &num_2);

    for(i = 1; i <= num_1 && i <= num_2; i++)
    {

        if(num_1 % i == 0 && num_2 % i == 0)
         {
            hcf = i;
        }
    }

    printf("HCF = %d", hcf);

    return 0;
}