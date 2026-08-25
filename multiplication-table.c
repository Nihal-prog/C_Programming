/* Multiplication Table of a given number in C */

#include <stdio.h>

int main()
{
    // Initialising Variables;
    int n;

    // Taking input from user
    printf("Enter the number you want table of: ");
    scanf("%d", &n);

    // Using for loop to print the 10 multiples of the given number
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}