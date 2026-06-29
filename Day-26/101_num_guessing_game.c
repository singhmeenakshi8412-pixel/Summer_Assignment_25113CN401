//Write a program to Create number guessing game.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    
    int randomnumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    do
    {
        printf("Guess the number:  \n");
        scanf("%d", &guessed);

        if (guessed > randomnumber)
        {
            printf("Write a lower number\n");
        }

        else if (guessed < randomnumber)
        {
            printf("Write an upper number\n");
        }

        else
        {
            printf("You won\n");
        }

        no_of_guesses++;

    } while (guessed != randomnumber);

    printf("BRAVO !! \n (You made %d guesses)", no_of_guesses);

    return 0;
}
