#include <stdio.h>

int main(){
    // Degrees Celsius to Fahrenheit
    // Defining variables
    float c, f;

    // Taking Celsius input
    printf("Enter the Celsius: ");
    scanf("%f", &c);

    // Converting to Fahrenheit 
    f = ((9.0 / 5.0) * c) + 32;

    // Printing the output
    printf("%.2f Degrees Celsius = %.2f Degrees Fahrenheit\n", c, f);
    return 0;
}