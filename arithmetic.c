#include <stdio.h>

int main()
{
    // Arithmetics
    int a = 5, b = 2;
    int c = a * b; // Legal
    // a * b = z    // Illegal
    printf("%d x %d = %d\n", a, b, c);

    // Modulus operator: To calculate the remainder after division.
    int m = a % b;
    printf("Remained of %d / %d is %d.\n", a, b, m);

    // % Can't be applied to floats.
    // +/- Sign same as numerator.

    return 0;
}