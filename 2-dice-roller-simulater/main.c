/*
 * Title: Simple Dice Roller
 * Description: This program simulates rolling a six-sided dice.
 *              It generates a random number between 1 and 6, displays it,
 *              and asks the user if they want to roll again.
 * Author: [Your Name]
 * For: Beginner learners to understand randomness, loops, and input/output.
 */

#include <stdio.h>   // For input/output functions
#include <stdlib.h>  // For rand() and srand()
#include <time.h>    // For seeding random number generator with current time

int main() {
    int diceValue;     // Stores the dice roll result (1 to 6)
    char rollAgain;    // Stores user's choice to roll again ('y' or 'n')

    // Seed the random number generator with the current time
    // This makes sure the dice roll is different every time you run the program
    srand(time(0));

    printf("=== 🎲 Simple Dice Roller ===\n");

    // Loop to allow multiple rolls until the user decides to stop
    do {
        // Generate a random number between 1 and 6
        diceValue = (rand() % 6) + 1;

        // Display a simple ASCII art representation of the dice face
        printf("\n");
        printf("+-----+\n");
        printf("|     |\n");
        printf("|  %d  |\n", diceValue);
        printf("|     |\n");
        printf("+-----+\n");

        // Show the rolled number
        printf("\nYou rolled: %d\n", diceValue);

        // Ask the user if they want to roll again
        printf("\nRoll again? (y/n): ");
        scanf(" %c", &rollAgain);

        // The space before %c in scanf is important to consume any leftover newline characters

    } while (rollAgain == 'y' || rollAgain == 'Y');  // Repeat if user types 'y' or 'Y'

    printf("\nThanks for playing! 🎉\n");

    return 0;  // Indicate successful program termination
}
