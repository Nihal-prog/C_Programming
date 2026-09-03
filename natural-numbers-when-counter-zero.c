/* Write a program to print natural numbers between 10 and 20 when the counter is initialised at 0 */

#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 21)
    {
        if (i >= 10)
        {
            printf("The value of i is %d\n", i);
        }
        i++;
    }
    return 0;
}