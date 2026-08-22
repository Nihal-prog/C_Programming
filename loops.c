/* Loops in C */

#include <stdio.h>

int main()
{
    // While Loop
    int i = 1;  // Counter variable to avoid infinite loop
    while (i < 11)
    {
        printf("The value of i is: %d\n", i);
        i++; // or i = i + 1;
    }


    return 0;
}