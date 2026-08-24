/* do-while loop is a type of loop that is bound to run at least once before checking for the conditionals given, */

#include <stdio.h>

int main(){
    int i = 0;
    do
    {
        printf("The value of i is %d\n", i);    // Since this is a do-while loop, 0 will be printed regardless the condition below stating it be started with i > 0 not i = 0.
        i++;
    } while (i > 0 && i < 10);
    
    return 0;
}