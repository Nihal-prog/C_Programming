/* Calculate n-factorial using for loops. */

#include <stdio.h>

int main()
{
    // E.g. 5! = 5 x 4 x 3 x 2 x 1 = 120
    // Defining Variables
    long int product = 1;
    int num;

    // Taking input
    printf("Enter the number you want factorial of: ");
    scanf("%d", &num);

    // Looping to find the factorial
    for (int i = 1; i <= num; i++)
    {
        product *= i;
    }

    // Printing the output
    printf("Factorial of %d is %ld\n", num, product);
    return 0;
}
