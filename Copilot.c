#include <stdio.h>

int main() {
    int secret = 7;          // Fixed secret number
    int guess;               // User's guess
    int attempts = 3;        // Maximum number of tries

    printf("Guess a number between 1 and 10.\n"); // Inital Goal

    for (int i = 1; i <= attempts; i++) { // For loop that loops for every attempt
        printf("Attempt %d/%3d. Enter your guess: ", i, attempts); // User Question
        scanf("%d", &guess); // User Input

        if (guess == secret) { // If guess is right
            printf("Correct! You win!\n"); // Congratulate the user
            return 0;        // End the program immediately
        }
        else if (guess < secret) { // If guess is lower
            printf("Too low! Try again.\n"); // Print that the guess was too low
        }
        else { // If guess is higher
            printf("Too high! Try again.\n"); // Print that the guess was too high
        }
    }

    // If the loop finishes without a correct guess:
    printf("Sorry, you lose! The correct number was %d.\n", secret); // Tell the user the correct guess

    return 0;
}
