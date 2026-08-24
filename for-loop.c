/* For-loop is the most widely used type of loop
    for (initialize; condition; increment/decrement;)
    {
    CODE;
    }
*/

#include <stdio.h>

int main()
{
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("The value of i is %d\n", i);
    // }

    for (int i = 10; i > 0; i--)
    {
        printf("The value of i is %d\n", i);
    }
    return 0;
}