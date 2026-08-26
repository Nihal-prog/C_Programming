#include <stdio.h>

int main()
{
    // An absurd program, yet, here goes.
    // Infinite loop with counter value increment.
    int i = 0;
    while (2 < 10) // Forever true condition makes the loop endless
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}