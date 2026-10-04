/* Fibonacci series in C using recursions to nth term. */

#include <stdio.h>

int fibonacci(int);

// Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...
// fibonacci(n) = fibonacci(n-2) + fibonacci(n-1);

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int num = 12;
    printf("12th in Fibonacci Series is %d.\n", fibonacci(num));
    return 0;
}