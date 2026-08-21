/* Write a program to check if a character entered if lowercase or not. */

#include <stdio.h>

int main()
{
    // Making a char variable
    char ch;

    // Taking character as input from the user
    printf("Enter the character: ");
    scanf("%c", &ch);

    // Using '%d' to print the ASCII value of the character
    printf("The ASCII value of this character is: %d\n", ch);

    // Since we know from ASCII Table, lower case alphabets range from a97 - z122
    // Applying conditionals as applicable
    if (ch >= 97 && ch <= 122)
    {
        printf("Lowercase.\n");
    }
    else
    {
        printf("Not lowercase.\n");
    }
    return 0;
}