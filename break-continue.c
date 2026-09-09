/* Break and Continue in C */

#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 4){
            // break;      // Exit the loop NOW!
            
            printf("Skipped.\n");
            continue;       // Skip this iteration.
        }
        printf("Iteration %d\n", i);
    }
    printf("Loop ended.\n");
    return 0;
}
