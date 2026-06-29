// Write a program to Create quiz application. 
#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("Welcome to Meenakshi's Quiz\n");

    printf("\n1. Which loop executes at least once?");
    printf("\n1. For");
    printf("\n2. While");
    printf("\n3. Do-While");
    printf("\n4. None");

    printf("\nEnter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        score++;
    }

    printf("\n2. Which function is used to read a string?");
    printf("\n1. scanf()");
    printf("\n2. printf()");
    printf("\n3. gets()");
    printf("\n4. putchar");

    printf("\nEnter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        score++;
    }
    
    printf("\n3. Which keyword skips the current iteration");
    printf("\n1. Break");
    printf("\n2. Continue");
    printf("\n3. Return");
    printf("\n4. Goto");

    printf("\nEnter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        score++;
    }


    printf("\nQuiz completed!");
    printf("\nYour score is: %d/3", score);

    return 0;
}
