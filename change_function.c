#include <stdio.h>

int change(int a);

int change(int a){
    a = 70;
    return 0;
}

int main(){
    // Assigning a value to variable 'b'
    int b = 20;
    printf("The value of b is %d.\n", b);

    // Attempting to change it
    change(b);

    // The value isn't changed because only a copy of the value i.e. 22 is passed into it.
    printf("The value of b is %d.\n", b);
    return 0;
}