/* Write a program to check whether the given number is prime or not using loops */

#include <stdio.h>

int main()
{
    // Defining Variables
    int num;
    int not_prime = 0;

    // Taking input
    printf("Enter the number: ");
    scanf("%d", &num);

    // Checking if 0 or 1
    if (num == 0 || num == 1)
    {
        printf("%d is not prime.\n", num);
    }

    // Else running the loop-logic to check if number is divisible by any number other than one and itself.
    else
    {

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                not_prime = 1;
            }
        }

        // Using Ternery Operator to print the output based on the condition.
        (not_prime) ? printf("%d is NOT Prime.\n", num) : printf("%d is Prime.\n", num);

        // // Alternet longer way of printing conditionals
        // if (prime)
        // {
        //     printf("%d is NOT Prime.\n", num);
        // }
        // else{
        //     printf("%d is Prime.\n", num);
        // }
    }

    return 0;
}