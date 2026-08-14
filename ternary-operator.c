#include <stdio.h>

int main(){
    // Just found out about something called the 'Turnery Operator' aka short-hand for if-else
    // Condition ? Expression-if-true : Expression-if-false
    // '?' and ':' are Ternery Operators
    // int a = 55, b = 6;
    int a = 55, b = 66;
    a > b ? printf("A is greater.\n"):printf("B is greater.\n");
    return 0;
}