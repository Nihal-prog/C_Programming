/* Increment and Decrement operators in C */

#include <stdio.h>

int main(){
    // Variable
    int num = 10;
    printf("Original value %d\n\n", num);
    
    // Increment
    num++;                  // Increments the value of the variable num by one
    printf("Incremented %d\n", num);
    printf("Incremented %d\n\n", ++num);  // Increments first, then prints

    // Decrement
    num--;                  // Decrements one
    printf("Decremented %d\n", num);
    printf("Decremented %d\n", --num);  // Decrements first, then prints
    return 0;
}