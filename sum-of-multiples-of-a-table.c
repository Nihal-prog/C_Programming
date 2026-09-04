/* Write a program in C to calcaulate the sum of the multiples from 1 through 10 of a given number. 

E.g. 8 x 1 = 8 to 8 x 10 = 80. Find the sum of 8 + 16 + ... 80*/

#include <stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        int product = num * i;
        printf("%d x %d = %d\n", num, i, product);
        sum += product;
    }
    printf("\nSum of multiples = %d\n", sum);
    return 0;
}
