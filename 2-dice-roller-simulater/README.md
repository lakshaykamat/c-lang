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