# C Projects
# Number Guessing Game in C

Welcome to the **Number Guessing Game** — a simple and fun C program that helps you learn key programming concepts such as loops, conditionals, input/output, and random number generation.

---

## 🎯 Learning Goals

By studying and running this program, you will learn:

* How to generate random numbers in C
* Using variables and constants
* Taking user input with `scanf()`
* Using loops (`do...while`) to repeat actions
* Applying conditional statements (`if...else`) for decision making
* Counting attempts and giving user feedback

---

## 📁 File Included

* `Number_Guessing_Game.c` — The full source code for the game

---

## 🧩 How the Code Works (Step-by-Step)

### 1. **Include Libraries**

```c
#include <stdio.h>   // For input/output functions like printf and scanf
#include <stdlib.h>  // For random number functions rand() and srand()
#include <time.h>    // For getting the current time to seed the random generator
```

These libraries provide the necessary functions for input/output and random number generation.

---

### 2. **Variable Declarations**

```c
int secretNumber, guess, attempts = 0;
const int MIN = 1, MAX = 100;
```

* `secretNumber`: Holds the random number the user tries to guess
* `guess`: Stores the user's current guess
* `attempts`: Counts how many tries the user has made
* `MIN` and `MAX`: Constants defining the guessing range (1 to 100)

---

### 3. **Random Number Generation**

```c
srand(time(0));
secretNumber = (rand() % MAX) + MIN;
```

* `srand(time(0))` seeds the random number generator using the current time, so the number changes each time you run the program
* `rand() % MAX` generates a number between 0 and 99; adding `MIN` shifts this range to 1–100

---

### 4. **User Instructions**

```c
printf("Welcome to the Number Guessing Game!\n");
printf("I'm thinking of a number between %d and %d.\n", MIN, MAX);
```

These lines greet the player and explain the rules.

---

### 5. **The Guessing Loop**

```c
do {
    printf("Enter your guess: ");
    scanf("%d", &guess);
    attempts++;
    
    if (guess > secretNumber) {
        printf("Too high! Try again.\n");
    } else if (guess < secretNumber) {
        printf("Too low! Try again.\n");
    } else {
        printf("Congratulations! You guessed the number in %d attempts!\n", attempts);
    }
} while (guess != secretNumber);
```

* The program keeps asking for guesses until the correct number is found
* After each guess, it tells the user if their guess was too high, too low, or correct
* The `attempts` counter increments each time the user guesses

---

### 6. **Program End**

```c
return 0;
```

This signals the program finished successfully.

---

## 🧪 Try These Enhancements (Exercises)

* Limit the number of guesses to 7 — tell the user if they run out of attempts
* Add a feature to ask if the user wants to play again after guessing correctly
* Introduce difficulty levels that change the `MAX` number
* Keep track of and display the best (lowest) number of attempts across games

---

## 🚀 How to Compile and Run

### On macOS or Linux:

```bash
gcc Number_Guessing_Game.c -o guessing_game
./guessing_game
```

### On Windows (with GCC):

```bash
gcc Number_Guessing_Game.c -o guessing_game.exe
guessing_game.exe
```
Certainly! Here's a detailed, beginner-friendly `README.md` for your **Simple Dice Roller** program, tailored for educational purposes:

---

# 🎲 Simple Dice Roller in C

This is a basic C program that simulates rolling a six-sided dice. It generates random numbers to mimic dice rolls, displays the result with simple ASCII art, and lets the user roll again as many times as they want.

---

## 🎯 Learning Objectives

By studying and running this program, you will learn:

* How to generate **random numbers** in C
* Using **variables** to store and manage data
* Handling **user input** with `scanf()`
* Using **loops** (`do...while`) to repeat actions until a condition is met
* Creating **simple ASCII art** to display output nicely
* Understanding the importance of **seeding** the random number generator

---

## 📁 Files Included

* `Dice_Roller_Educational.c` — The source code for the dice roller program

---

## 🧩 How the Code Works (Step-by-Step)

### 1. **Include Required Libraries**

```c
#include <stdio.h>   // For input and output functions
#include <stdlib.h>  // For random number functions
#include <time.h>    // To seed the random number generator using the current time
```

These libraries provide functions to read/write data and generate random numbers.

---

### 2. **Variable Declarations**

```c
int diceValue;   // Stores the value of the dice roll (1 to 6)
char rollAgain;  // Stores user's decision to roll again ('y' or 'n')
```

Variables hold data used throughout the program.

---

### 3. **Seeding the Random Number Generator**

```c
srand(time(0));
```

* Seeds the random number generator using the current time,
* Ensures that the dice rolls are different each time the program runs.

---

### 4. **Main Loop - Rolling the Dice**

```c
do {
    diceValue = (rand() % 6) + 1;  // Generate a number between 1 and 6
    // Display dice using ASCII art
    // Show rolled number
    // Ask user if they want to roll again
} while (rollAgain == 'y' || rollAgain == 'Y');
```

* Generates a random dice roll
* Displays the dice visually with ASCII characters
* Takes input from the user to decide if they want to roll again
* Repeats the loop if user says 'y' or 'Y'

---

### 5. **Program End**

```c
printf("\nThanks for playing! 🎉\n");
return 0;
```

* Displays a friendly goodbye message
* Returns `0` to signal successful program completion

---

## 🧪 Try These Exercises (Practice Ideas)

* 🎲 Modify the program to roll two dice and show their sum.
* 🛡 Add input validation to accept only 'y', 'Y', 'n', or 'N'.
* 🔟 Change the dice to have 10 sides (values 1 to 10).
* 📊 Count how many rolls were made and display the total at the end.
* 🎨 Improve the ASCII art to better represent each dice face.

---

## 🚀 How to Compile and Run

### On macOS or Linux:

```bash
gcc Dice_Roller_Educational.c -o dice_roller
./dice_roller
```

### On Windows (with GCC):

```bash
gcc Dice_Roller_Educational.c -o dice_roller.exe
dice_roller.exe
```