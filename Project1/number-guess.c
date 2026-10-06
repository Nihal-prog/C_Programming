/* Project 1: Number Guessing Game in C. Using loops and random number generator. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with current time
    srand(time(NULL));

    // Generate a random integer between 1 and 100
    int random_number = (rand() % 100) + 1;

    // Don't need to print the answer yet.
    // printf("Random number between 1 and 100: %d\n", random_number);
    
    int no_of_guesses = 0;

    int guessed;
    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);
        if (guessed > random_number)
        {
            printf("That's high.\n");
        } else {
            printf("That's low.\n");
        }
        no_of_guesses++;
        
    } while (guessed != random_number);

    printf("You guessed the number in %d guesses.\n", no_of_guesses);
    return 0;
}