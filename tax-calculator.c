/* Calculate the income tax paid by an employee as per the slab given below:-
    < 2.5L = 0%
    2.5L - 5.0L = 5%
    5.0L - 10.0L = 20%
    Above 10L = 30%
*/

#include <stdio.h>

int main()
{
    // Initialising variables;
    float income;

    // Taking input
    printf("Enter your income(LPA): ");
    scanf("%f", &income);

    // Applying conditionals and calculating tax per slab
    if (income < 2.5)
    {
        printf("No income tax applicable.\n\n");
    }
    else if (income >= 2.5 && income < 5.0)
    {
        printf("You are subjected to 5%% income tax.\n\n");
        printf("Your annual income tax = %.2f LPA\n", 0.05 * income);
        printf("Income after tax = %.2f LPA\n", 0.95 * income); // 100% - 5% = 1.00 - 0.05 = 95%
    }
    else if (income >= 5.0 && income < 10)
    {
        printf("You are subjected to 20%% income tax.\n\n");
        printf("Your annual income tax = %.2f LPA\n", 0.20 * income);
        printf("Income after tax = %.2f LPA\n", 0.80 * income); // 100% - 20% = 1.00 - 0.20 = 80%
    }
    else
    {
        printf("You are subjected to 30%% income tax.\n\n");
        printf("Your annual income tax = %.2f LPA\n", 0.30 * income);
        printf("Income after tax = %.2f LPA\n", 0.70 * income); // 100% - 30% = 1.00 - 0.30 = 70%
    }
    return 0;
}