#include <stdio.h>
int main()
{
    int prev_1=0, prev_2=1, current, number,i;
    printf("Enter the number of terms: ");
    scanf("%d", &number);

    printf("Fibonacci Series:\n ");
    printf("%d \n %d \n ", prev_1, prev_2); 

    for (int i = 3; i <= number; i++) 
    {
        current = prev_1 + prev_2;
        printf("%d \n ", current);
        prev_1 = prev_2;
        prev_2 = current;

    }

}
