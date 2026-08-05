#include <stdio.h>

int main()
{
    // Volume of a cylinder
    // Defining variables
    float r, h;

    // Taking radius and height inputs from the user
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &r);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &h);

    // Calculating and printing
    printf("The volume of the cylinder is: %.2f\n", 3.14159 * r * r * h);
    return 0;
}