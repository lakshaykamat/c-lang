# Number Guessing Game in C - Beginner's Guide

This README explains a simple number guessing game written in C, perfect for beginners learning programming concepts.

## How the Game Works
The computer generates a random number between 1 and 100, and the player tries to guess it. After each guess, the program tells the player if their guess was too high or too low. The game continues until the player guesses the correct number, then displays how many attempts it took.

## Code Explanation

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
```
These are **header files** that provide essential functions:
- `stdio.h`: Handles input/output (like `printf()` and `scanf()`)
- `stdlib.h`: Contains functions for random number generation (`rand()` and `srand()`)
- `time.h`: Allows working with time functions (used here to seed the random number generator)

---

```c
int main()
{
    int secretNumber, guess, attempts = 0;
    const int MIN = 1, MAX = 100;
```
**Variable declarations**:
- `secretNumber`: Stores the random number to guess
- `guess`: Stores the player's current guess
- `attempts`: Counts how many guesses the player makes
- `MIN` and `MAX`: Constants defining the number range (1-100)

---

```c
    srand(time(0));
    secretNumber = (rand() % MAX) + MIN;
```
**Random number generation**:
- `srand(time(0))`: Seeds the random number generator with the current time
- `rand() % MAX`: Generates a number between 0 and 99
- `+ MIN`: Shifts the range to 1-100

---

```c
    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between %d and %d.\n", MIN, MAX);
```
**Game introduction**:
- Prints welcome messages and the number range

---

```c
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
```
**Game loop**:
- `do...while` loop runs until correct guess
- `scanf()` gets player's input
- `attempts++` increments the guess counter

---

```c
        if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts!\n", attempts);
        }
    } while (guess != secretNumber);
```
**Guess evaluation**:
- Compares `guess` with `secretNumber`
- Gives "Too high"/"Too low" feedback
- Breaks loop when guess is correct
- Shows total attempts upon success

---

```c
    return 0;
}
```
**Program exit**:
- Returns 0 to indicate successful execution

## How to Run the Game

1. Save the code in a file named `guess_game.c`
2. Compile the program:
   ```bash
   gcc guess_game.c -o guess_game
   ```
3. Run the executable:
   ```bash
   ./guess_game
   ```

## Learning Concepts Covered

1. **Variables and data types** (`int`, `const`)
2. **Input/output operations** (`printf`, `scanf`)
3. **Conditional statements** (`if`, `else if`, `else`)
4. **Loops** (`do...while`)
5. **Random number generation** (`srand`, `rand`, `time`)
6. **Constants** for fixed values
7. **Basic program structure** (main function, headers)

## Possible Enhancements

1. Add difficulty levels (change MIN/MAX values)
2. Limit maximum number of guesses
3. Add score tracking between games
4. Implement error handling for invalid inputs
5. Add a play-again option

Try modifying the code to add these features as a learning exercise!
