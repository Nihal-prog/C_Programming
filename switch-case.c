#include <stdio.h>

int main(){
    /* Switch Case in C */
    int a;
    printf("Enter a number between 1 and 4 [ONLY]: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("1 = A\n");
        break;
    case 2:
        printf("2 = B\n");
        break;
    case 3:
        printf("3 = C\n");
        break;
    case 4:
        printf("4 = D\n");
        break;
    default:
        printf("Don't act over smart.\n");
        break;
    }
    return 0;
}