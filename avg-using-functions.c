/* Write a program using functions to calculate the average of three numbers in C. */

#include <stdio.h>

float average(float, float, float);

float average(float a, float b, float c)
{
    return (a + b + c) / 3;
}

int main()
{
    float n1 = 1.98, n2 = 27.8, n3 = 3.98;
    printf("Average of %.2f, %.2f and %.2f is: %.2f\n", n1, n2, n3, average(n1, n2, n3));
    return 0;
}