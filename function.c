/* Functions in C */

#include <stdio.h>

// Function Prototype
int sum(int, int);

// !!!
// Had we not written the function prototype above, we'd have to write the function before main function.

int main()
{
    int a = 1, b = 2;
    // int c = a + b;
    // printf("The sum is %d.\n", c);
    sum(a, b);  // Function call
    sum(21, 9); // Function call
    return 0;
}

// Function Definition
int sum(int x, int y)
{
    printf("The sum of %d and %d is %d.\n", x, y, x + y);
    return x + y;
}
