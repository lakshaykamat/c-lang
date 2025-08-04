#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber, guess, attempts = 0;
    const int MIN = 1, MAX = 100;

    srand(time(0));

    secretNumber = (rand() % MAX) + MIN;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between %d and %d.\n", MIN, MAX);

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber)
        {
            printf("Too high! Try again.\n");
        }
        else if (guess < secretNumber)
        {
            printf("Too low! Try again.\n");
        }
        else
        {
            printf("Congratulations! You guessed the number in %d attempts!\n", attempts);
        }
    } while (guess != secretNumber);

    return 0;
}