#include <stdio.h>

int main()
{
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%f", &decimalNumber);

    int octalNumber = decimalNumber;
    printf("The octal equivalent of %d is: %o\n", decimalNumber, octalNumber);

    int hexadecimalNumber = decimalNumber;
    printf("The hexadecimal equivalent of %d is: %X\n", decimalNumber, hexadecimalNumber);
}