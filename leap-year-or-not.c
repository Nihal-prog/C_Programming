/* Write a program to find out whether a year entered by the user is leap year or not. */

#include <stdio.h>

int main(){
    // Variable for year;
    int year;

    // Taking input;
    printf("Enter the year: ");
    scanf("%d", &year);

    // Checking leap or not;
    // if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
    //     printf("%d = Leap year.\n");
    // } else { printf("%d = Not a leap year.\n"); }

    // Or short-hand if-else, i.e. Ternery Operator
    (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? printf("Leap year.\n"):printf("Not a leap year.\n");

    /* Logic:-
        Divisible by 4
        However. Century years make this is bit difficult.
        Cause 1900 % 4 = 0, However, 1900 wasn't a leap year.

        Hence, Year should be divisible by 4 AND NOT divisible by 100 OR divisible by 400
        Making 1900 a non-leap year, which is factually correct.
    */
    return 0;
}