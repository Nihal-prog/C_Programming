#include <stdio.h>

int main()
{
    // Defining a variable to store the input
    int number;

    // Printing the prompt to enter an integer
    printf("Enter a number: ");

    // Actually taking keyboard input and assigning it to the variable
    scanf("%d", &number);

    // Printing the input
    printf("The number is: %d\n", number);
    return 0;
}