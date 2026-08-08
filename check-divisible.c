#include <stdio.h>

int main(){
    /* Program to check if the given number
    is divisible by the other given number
    or not? */
    
    // Initialising the variables
    int dividend, divisor;

    // Taking user inputs
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Checking whether the remainder is zero or not
    int remainder = dividend % divisor;

    // A hint of conditionals for better formatting in output
    if (remainder == 0){
        printf("Yes, %d is divisible by %d.\n", dividend, divisor);
    } else {
        printf("No, %d is not divisible by %d.\n", dividend, divisor);
    }
    return 0;
}