/* Write a program to find the greatest of the four numbers given. */

#include <stdio.h>

int main()
{
    int a = 5, b = 116, c = 8, d = 2;
    if (a > b && a > c && a > d)
    {
        printf("%d is greater.\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is greater.\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d is greater.\n", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("%d is greater.\n", d);
    }
    else
    {
        printf("Enter integers only.\n");
    }
    return 0;
}