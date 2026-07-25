#include <stdio.h>

int main(){
    // Defining variables for length and breadth
    float len, bdth;

    // Taking user inputs
    printf("Enter the length: ");
    scanf("%f", &len);
    printf("Enter the breadth: ");
    scanf("%f", &bdth);

    // Printing the output
    printf("The area of the rectangle is: %.2f\n", len * bdth);
    return 0;
}