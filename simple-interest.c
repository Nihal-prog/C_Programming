#include <stdio.h>

int main()
{
    // Simple Interest
    // Defining variables
    float p, t, r, SI;

    // Taking inputs
    printf("Enter the principal amount(P): ");
    scanf("%f", &p);
    printf("Enter the time(t): ");
    scanf("%f", &t);
    printf("Enter the rate of interest(r): ");
    scanf("%f", &r);

    // Calculating SI
    SI = (p * t * r) / 100;

    // Printing the output
    printf("The Simple Interest is: %.2f\n", SI);
    return 0;
}