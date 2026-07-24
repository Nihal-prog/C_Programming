#include <stdio.h>

int main(){
    /* Operator Precedence
    - In C, Rules such as BODMAS don't apply.
    - In the absence of paranthesis, higher precedence operators are evaluated first. 
    - Precedence:-
        1. *  /  %
        2. +  -
        3. =
    - Use paranthesis as a good practice.
    - Now among *, / and %, which to go first?
    - That's defined by 'associativity.'
    - x*y/z --> (x*y)/z
    - BUT, x/y*z --> (x/y)*z
    - I.e. * and / are evaluated from left to right.
    */

    return 0;
}