#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int diceValue;
    char rollAgain;
    
    // Seed the random number generator
    srand(time(0));
    
    printf("=== Simple Dice Roller ===\n");
    
    do {
        // Generate random number between 1 and 6
        diceValue = (rand() % 6) + 1;
        
        // Display the dice face
        printf("\n");
        printf("+-----+\n");
        printf("|     |\n");
        printf("|  %d  |\n", diceValue);
        printf("|     |\n");
        printf("+-----+\n");
        printf("\nYou rolled: %d\n", diceValue);
        
        // Ask if user wants to roll again
        printf("\nRoll again? (y/n): ");
        scanf(" %c", &rollAgain);
        
    } while (rollAgain == 'y' || rollAgain == 'Y');
    
    printf("\nThanks for playing!\n");
    return 0;
}