#include <stdio.h>

int main()
{
    int a = 1;      // Usually 4 Bytes (32 bits)
    float b = 1.44; // Usually 4 Bytes (32 bits)
    char c = 'S';   // Always 1 Byte (8 bits)

    // Checking size of variables
    printf("Int: %zu Byte\n", sizeof(a));
    printf("Float: %zu Byte\n", sizeof(b));
    printf("Char: %zu Byte\n", sizeof(c));

    // Can't use reserved keywords as variable names.
    return 0;
}