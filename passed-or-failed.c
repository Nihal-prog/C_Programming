/* Assuming three subject marks inputs from the user, check using if-else whether a student has passed or failed the exam if the combined result required to pass is 40% in total and 33% in each subject. */

#include <stdio.h>

int main(){
    // Defining variables for marks
    float sub1, sub2, sub3;

    // Taking inputs from user
    printf("Enter the marks in subject 1: ");
    scanf("%f", &sub1);
    printf("Enter the marks in subject 2: ");
    scanf("%f", &sub2);
    printf("Enter the marks in subject 3: ");
    scanf("%f", &sub3);
    printf("\n"); // Just for the sake of formatting

    // Calculating individual percentage.
    float percent_1, percent_2, percent_3, percent_total;
    percent_1 = (sub1 / 100) * 100;
    percent_2 = (sub2 / 100) * 100;
    percent_3 = (sub3 / 100) * 100;
    percent_total = ((sub1 + sub2 + sub3) / 300) * 100;

    // Printing results
    printf("Subject 1: %.2f\n", percent_1);
    printf("Subject 2: %.2f\n", percent_2);
    printf("Subject 3: %.2f\n", percent_3);
    printf("Total Percetage Acquired: %.2f\n\n", percent_total);

    // Deciding pass or fail using if else
    if (percent_1 >= 33 && percent_2 >= 33 && percent_3 >= 33 && percent_total >= 40){
        printf("Congrats, you passed.\n");
    } else {
        printf("Hard luck, you didn't pass this time.\n");
    }
    return 0;
}