#include <stdio.h>

int main(){
    // Int-Int = Int
    // Float-Int = Float
    // Float-Float = Float
    // int a = 9, b = 2;   // Gives 4
    int a = 9; float b = 2; // Gives 4.5
    float c = a / b;
    printf("The value of a/b is %.3f\n", c);

    int d = 3.8;
    printf("The value of a float initialised as integer is demoted. %d\n", d);
    // float d = 3.8;
    // printf("%f\n", d);
    return 0;

    /* int k = 3.0 / 9;
    Value of k?
    3.0 / 9 should give 1.0 / 3 = 0.333... 
    However, since 'k' is by definition an integer,
    0.333... will be demoted to 0. 
    Therefore, answer: The value of k is 0. */
}