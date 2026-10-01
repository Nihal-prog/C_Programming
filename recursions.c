/* Recursions in C */

#include <stdio.h>

// A function that calls to itself. E.g. Factorial
// 5! = 5 x 4 x 3 x 2 x 1 = 120
// Factorial(n) = Factorial(n-1) x n

int factorial(int); // Function prototype

int factorial(int n)
{ // Function definition
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return factorial(n - 1) * n;
}

int main()
{
    int num = 5;
    printf("The factorial of %d is %d.\n", num, factorial(num));
    num = 3;
    printf("The factorial of %d is %d.\n", num, factorial(num));
    return 0;
}