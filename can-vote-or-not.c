#include <stdio.h>

int main(){
    // Conditionals. 
    // Initialising age integer variable
    int age;

    // Taking input
    printf("Enter your age: ");
    scanf("%d", &age);

    // Applying the conditions and printing the output
    if (age >= 18){
        // Can vote if age is greater than or equal to 18 year.
        printf("You can vote.\n");
    } else{
        // Any age less then 18 cannot vote
        printf("You cannot vote.\n");
    }
    return 0;
}