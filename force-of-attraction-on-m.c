/* Write a function to calculate the force of attraction on a body of mass (m) exerted by the Earth. Assuming (g) = 9.8m/s^2 */

#include <stdio.h>
#define G 9.8

float force(float);

float force(float m){
    return m * G;
}

int main(){
    float mass;
    printf("Enter the mass of object: ");
    scanf("%f", &mass);
    printf("The object experiences a force of %.2fN by the Earth.\n", force(mass));
    return 0;
}