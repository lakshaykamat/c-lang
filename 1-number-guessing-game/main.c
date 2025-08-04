/*
 * Title: Number Guessing Game
 * Description: A simple C game where the computer picks a random number,
 *              and the user tries to guess it. Great for learning loops,
 *              conditionals, input/output, and randomness.
 * Author: Lakshay Kamat
 * For: Beginner C students and programming learners
 */

#include <stdio.h>   // for printf() and scanf()
#include <stdlib.h>  // for rand(), srand()
#include <time.h>    // for time() to seed random number generator

int main() {
    // Declare variables
    int secretNumber;  // the number to guess
    int guess;          // user input
    int attempts = 0;   // number of tries

    // Constants for the guessing range
    const int MIN = 1;
    const int MAX = 100;

    // Seed the random number generator with current time
    // This ensures a different number every time you run the program
    srand(time(0));

    // Generate the random number between MIN and MAX (inclusive)
    secretNumber = (rand() % MAX) + MIN;

    // 👋 Start of the game
    printf("=============================================\n");
    printf("🎮 Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between %d and %d.\n", MIN, MAX);
    printf("Can you guess what it is?\n");
    printf("=============================================\n");

    // Start the guessing loop
    do {
        // Ask the user for a guess
        printf("\nEnter your guess: ");
        scanf("%d", &guess);  // Get user input

        attempts++;  // Count this attempt

        // Provide feedback
        if (guess > secretNumber) {
            printf("📉 Too high! Try a smaller number.\n");
        } else if (guess < secretNumber) {
            printf("📈 Too low! Try a larger number.\n");
        } else {
            printf("🎉 Congratulations! You guessed the number in %d attempts!\n", attempts);
        }

    } while (guess != secretNumber);  // Loop until correct guess

    // Game over
    printf("Thanks for playing! 👋\n");

    return 0;
}
