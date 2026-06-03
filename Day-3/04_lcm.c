// Program to find the LCM of two numbers.
#include <stdio.h>

int main() {

    int num_1, num_2, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num_1, &num_2);

    max = (num_1 > num_2) ? num_1 : num_2;

    while(1) {

        if(max % num_1 == 0 && max % num_2 == 0) {
            lcm = max;
            break;
        }

        max++;
    }

    printf("LCM = %d", lcm);

    return 0;
}

