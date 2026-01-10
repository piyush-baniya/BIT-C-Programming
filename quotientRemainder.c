#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int quotient = num1 / num2;
    int remainder = num1 % num2;

    printf("The quotient of %d and %d is: %d\n", num1, num2, quotient);
    printf("The remainder of %d and %d is: %d\n", num1, num2, remainder);

    return 0;
}