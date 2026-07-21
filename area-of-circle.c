#include <stdio.h>

int main(){
    // Area of a circle
    // Defining variable for radius
    float r;

    // Taking input from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    // Printing the output
    printf("The area of a circle with radius %.2f is %.2f\n", r, 3.14 * r * r);
    return 0;
}