/* Write a program to calculate the sum of first 10 natural numbers. */

#include <stdio.h>

int main()
{
    // Defining Variables
    int n = 10, sum = 0;

    // Starting at 0
    printf("Starting with initial sum = 0.\n");

    // For loop that run 10 times.
    // for (int i = 0; i <= n; i++)
    // {
    //     printf("%d + %d = %d\n", sum, i, sum + i);
    //     sum += i;       // Adding each iteration to the previous sum stored
    // }

    // Similar can be achieved using while loop too
    int i = 0;
    while (i <= n)
    {
        printf("%d + %d = %d\n", sum, i, sum + i);
        sum += i;
        i++;
    }

    // Printing the total sum
    printf("Total sum is: %d\n", sum);
    return 0;
}